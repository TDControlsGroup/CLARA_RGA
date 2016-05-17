#include "stripFile.h"

//Open file and strip out data

stripFile::stripFile(){
    this->_maxdata = 0;
}

void stripFile::scan(const char *filetype, scandata *myresults)
{
    this->loadscan=myresults;
    ifstream myfile;
    myfile.open (filetype);
    //Read in
    if(myfile.is_open())
    {
        std::string line;

         //Keep track of data scanned
        this->_maxdata=0;
        this->_scanno=0;
        while(getline (myfile,line))
        {
         //Find lines we need
         this->lineFlagger(line);
         //Scan these lines
         this->lineScanner(line);
        }
    }
    myfile.close();
}

void stripFile::lineFlagger(std::string line){
    //Reset flag to extract from file line by line
    this->_datastart=0;
    this->_massstart=0;
    //Look for file sections and trip flags
    if( line.find("Time") !=line.npos && line.find("Scan") !=line.npos && this->_massstart ==0 )
    {this->_massstart=1;}

    if( std::regex_match (line, regex("\"?[0-9][0-9]\/[0-9][0-9]\/[0-9][0-9][0-9][0-9].*")) )
    {this->_scanno++; this->_datastart=this->_scanno;}// Data

   }

void stripFile::lineScanner(std::string line){


    //Use these break selected line into tokens and scan for settings/data on that line
    stringstream stream(line);
    string mysubstring;

    if (this->_massstart==1 && this->_datastart==0)
    {
        std::regex re("Mass (.*)");

        std:smatch match;
        while(getline (stream,mysubstring,'"'))
        {

           if (std::regex_search(mysubstring, match, re) && match.length() > 0 ) {
             cout << stof(match.str(1)) << "\n";
             this->loadscan->setIndex(0,_maxdata,0);//Set new array
             this->loadscan->setMass(stof(match.str(1)));//Load mass
             this->_maxdata++;//Increase the index
             cout << "Length of mass vector" << this->_maxdata << "\n";
           }
        }
    }

    if (this->_datastart > 0)
    {

        int counter=0;
        while(getline (stream,mysubstring,'\t'))
        {
            //First token, time info
            if (counter==0){this->dateTime(mysubstring, _datastart);}


            //Second token, scan info
            if (counter==1){cout << "Scan " << mysubstring << "\n";}


            //The rest is data
            if (counter>1){
                //Scan pressure. Set index to 0,0 to avoid expanding array; we want to get size
                this->loadscan->setIndex(_datastart-1,0,0);

                //Scan pressure
                if(this->loadscan->getMassRange() > this->loadscan->getPressureRange() ) {
                    this->loadscan->setIndex(_datastart-1,0,counter-2);//Add pressure
                    this->loadscan->setPressure((float)stof(mysubstring));
                }

                //Load Sum of pressure (last item on the list)
                if(this->loadscan->getMassRange() == this->loadscan->getPressureRange() ) {
                   this->loadscan->setSump((float)stof(mysubstring));
                }
            }
          counter++;
        }
    }
}

void stripFile::dateTime(std::string dateline, int scan){
    cout << "Time " << dateline << " dd mm yyyy hh mm ss:" <<
                                        dateline.substr(1,2) << " " <<
                                        dateline.substr(4,2) << " " <<
                                        dateline.substr(7,4) << " " <<
                                        dateline.substr(12,2) << " " <<
                                        dateline.substr(15,2) << " " <<
                                        dateline.substr(18,2) << " " <<
                                        " \n";
//Load time info into standard tm structure
    this->loadscan->setIndex(scan-1,0,0);
    this->loadscan->setYear  ( stoi (dateline.substr(7,4) ) );
    this->loadscan->setMonth ( stoi (dateline.substr(4,2) ) );
    this->loadscan->setDay   ( stoi (dateline.substr(1,2) ) );
    this->loadscan->setHour  ( stoi (dateline.substr(12,2)) );
    this->loadscan->setMin   ( stoi (dateline.substr(15,2)) );
    this->loadscan->setSec   ( stoi (dateline.substr(18,2)) );
}
