#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <fstream>
#include "tinyxml.h"
#include "tinystr.h"

using namespace std;
void stripFile(const char *filetype, vector<float > *mass, vector<vector<float> > *pressure);

int main()
{
    vector<vector <float>> pressure;
    vector<float> mass;
    stripFile("ana2.txt", &mass, &pressure);
    return 0;
}

//Open file and strip out data
void stripFile(const char *filetype, vector<float > *mass, vector<vector <float>> *pressure)
{
    ifstream myfile;
    myfile.open (filetype);
    //Read in
    if(myfile.is_open())
    {
        std::string line;
        //Flag parts to extract from file line by line
        int massstart=0;
        int datastart=0;


        while(getline (myfile,line))
        {
            //Look for file sections and trip flags
            if( line.find("Time") !=line.npos && line.find("Scan") !=line.npos && massstart ==0 )
            {massstart=1;}

            if( std::regex_match (line, regex("\"?[0-9][0-9]\/[0-9][0-9]\/[0-9][0-9][0-9][0-9].*")) && massstart ==1 )
            {datastart+=1;}// Data

            //Use these to hold tokens
            stringstream stream(line);
            string mysubstring;

            if (massstart==1 && datastart==0)
            {
                std::regex re("Mass (.*)");

                std:smatch match;
                while(getline (stream,mysubstring,'"'))
                {

                   if (std::regex_search(mysubstring, match, re) && match.length() > 0 ) {
                     cout << stof(match.str(1)) << "\n";
                     mass->push_back(stof(match.str(1)));
                     cout << "Length of mass vector" << mass->size() << "\n";
                   }
                }
            }

            if (massstart==1 && datastart > 0)
            {

                int counter=0;
                while(getline (stream,mysubstring,' '))
                {
                    //First token, time info
                    if (counter==0){cout << "Time " << mysubstring << "\n";}

                    //Second token, scan info
                    if (counter==1){cout << "Time " << mysubstring << "\n";}
                    //The rest is data
                    if (counter>1){
                     cout << stof(mysubstring) << "\n";
                    }
                  counter++;
                }
            }

        }
    }
    myfile.close();
}
