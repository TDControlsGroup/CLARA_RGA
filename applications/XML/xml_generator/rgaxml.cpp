#include "rgaxml.h"

/*
 Note: New is used here but not deleted as this is a one shot wonder and the OS
*/



rgaxml::rgaxml()
{

}

rgaxml::~rgaxml(){

}




void rgaxml::build(scandata *myobj)
{

    doc= new TiXmlDocument();
    myscan=myobj;
    //TiXmlDeclaration * decl;
    decl = new  TiXmlDeclaration( "1.0", "utf-8", "");
    doc->LinkEndChild( decl );
    root = new TiXmlElement( "rga" );
    infosection = new TiXmlElement ( "INFO");
    this->addinfo();
    this->gen();
    doc->LinkEndChild( root );
    doc->SaveFile( "madeByHand.xml" );

}

void rgaxml::addinfo(){

    //Load info
    std::string killblanks;
    for(int info=0 ; info < this->myscan->getInfoSize(); info ++){
    //Element
     this->myscan->setInfoIndex(info);
     killblanks= this->myscan->getInfo();
     if(killblanks.size() < 1) {continue;}; //Strip out blanks
     _element.push_back     (new TiXmlElement(this->myscan->getElementName() ));
     _text_element.push_back(new TiXmlText   (this->myscan->getInfo()        ));
     //there will not be as many elements as info if we skip blanks so use size to link
     _element[_element.size()-1]->LinkEndChild(_text_element[_element.size()-1]);
     infosection->LinkEndChild(_element[_element.size()-1]);
    }
 root->LinkEndChild(infosection);
}

void rgaxml::gen(){
for (int scanno=0;scanno < myscan->getNumberScans(); scanno++)
 {
   //Build header elements
   _buildScan(scanno);

   for (int massno=0;massno < myscan->getMassRange(); massno++)
        {
   //Build pressure elements
   _buildPress(scanno, massno);

   }
 }

}

void rgaxml::_buildScan(int scanno){


    //Scan info
    _scans.push_back( new TiXmlElement("SCAN"));
    _scans[scanno]->SetAttribute("no",scanno+1);

    //Sump
    char  mychar[10];
    _sump.push_back(new TiXmlElement("SUMP"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_sump.push_back( new TiXmlText(mychar));


    //Data block
    _data.push_back(new TiXmlElement("DATA"));

    //Document layout of pressure elements

    _sump[scanno]->LinkEndChild(_text_sump[scanno]);
    _scans[scanno]->LinkEndChild(_sump[scanno]);
    _scans[scanno]->LinkEndChild(_data[scanno]);


    root->LinkEndChild(_scans[scanno]);

}

void rgaxml::_buildPress(int scanno, int massno ){
    char  mychar[10];
    int pressno=massno;
    myscan->setIndex(scanno,massno,pressno);

    //Set element

    _pressures.resize(scanno+1);
    _pressures[scanno].push_back( new TiXmlElement("PRESS"));


    std::sprintf(mychar,"%.2f",myscan->getMass() );
    _pressures[scanno][massno]->SetAttribute("mass",mychar);

    //set value
    _text_pressures.resize(scanno+1);
    std::sprintf(mychar,"%.2e",myscan->getPressure() );
    _text_pressures[scanno].push_back( new TiXmlText(mychar));

    //Document layout of elements
    _pressures[scanno][massno]->LinkEndChild(_text_pressures[scanno][massno]);
    _data[scanno]->LinkEndChild(_pressures[scanno][massno]);

}


