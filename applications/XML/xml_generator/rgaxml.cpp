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
    //delete decl;

    root = new TiXmlElement( "rga" );
    this->gen();
    doc->LinkEndChild( root );
    doc->SaveFile( "madeByHand.xml" );

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
    char  mychar[10];

    //Scan info
    _scans.push_back( new TiXmlElement("SCAN"));
    _scans[scanno]->SetAttribute("no",scanno+1);

    //Sens
    _sensitivity.push_back(new TiXmlElement("SENSITIVITY"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_sensitivity.push_back( new TiXmlText(mychar));

    //Mult
    _multiply.push_back(new TiXmlElement("MULT"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_multiply.push_back( new TiXmlText(mychar));

    //Detector
    _detector.push_back(new TiXmlElement("DETECTOR"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_detector.push_back( new TiXmlText(mychar));

    //Channel
    _channel_count.push_back(new TiXmlElement("CHANNEL"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_channel_count.push_back( new TiXmlText(mychar));

    //Plot
    _plot_type.push_back(new TiXmlElement("PLOT"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_plot_type.push_back( new TiXmlText(mychar));

    //Filament
    _filament.push_back(new TiXmlElement("FILAMENT"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_filament.push_back( new TiXmlText(mychar));

    //Max Mass
    _max_mass.push_back(new TiXmlElement("MAXMASS"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_max_mass.push_back( new TiXmlText(mychar));

    //Gain 1
    _gain1.push_back(new TiXmlElement("GAIN1"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_gain1.push_back( new TiXmlText(mychar));

    //Gain 2
    _gain2.push_back(new TiXmlElement("GAIN2"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_gain2.push_back( new TiXmlText(mychar));

    //Gain 3
    _gain3.push_back(new TiXmlElement("GAIN3"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_gain3.push_back( new TiXmlText(mychar));

    //Name
    _name.push_back(new TiXmlElement("NAME"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_name.push_back( new TiXmlText(mychar));

    //Serial
    _serialno.push_back(new TiXmlElement("ID"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_serialno.push_back( new TiXmlText(mychar));


    //Sump
    _sump.push_back(new TiXmlElement("SUMP"));
    std::sprintf(mychar,"%.2e",myscan->getSumP() );
    _text_sump.push_back( new TiXmlText(mychar));


    //Data block
    _data.push_back(new TiXmlElement("DATA"));

    //Document layout of elements

    _name[scanno]->LinkEndChild(_text_name[scanno]);
    _serialno[scanno]->LinkEndChild(_text_serialno[scanno]);
    _gain1[scanno]->LinkEndChild(_text_gain1[scanno]);
    _gain2[scanno]->LinkEndChild(_text_gain2[scanno]);
    _gain3[scanno]->LinkEndChild(_text_gain3[scanno]);
    _max_mass[scanno]->LinkEndChild(_text_max_mass[scanno]);
    _filament[scanno]->LinkEndChild(_text_filament[scanno]);
    _plot_type[scanno]->LinkEndChild(_text_plot_type[scanno]);
    _channel_count[scanno]->LinkEndChild(_text_channel_count[scanno]);
    _detector[scanno]->LinkEndChild(_text_detector[scanno]);
    _multiply[scanno]->LinkEndChild(_text_multiply[scanno]);
    _sensitivity[scanno]->LinkEndChild(_text_sensitivity[scanno]);
    _sump[scanno]->LinkEndChild(_text_sump[scanno]);


    _scans[scanno]->LinkEndChild(_name[scanno]);
    _scans[scanno]->LinkEndChild(_serialno[scanno]);
    _scans[scanno]->LinkEndChild(_gain1[scanno]);
    _scans[scanno]->LinkEndChild(_gain2[scanno]);
    _scans[scanno]->LinkEndChild(_gain3[scanno]);
    _scans[scanno]->LinkEndChild(_max_mass[scanno]);
    _scans[scanno]->LinkEndChild(_filament[scanno]);
    _scans[scanno]->LinkEndChild(_plot_type[scanno]);
    _scans[scanno]->LinkEndChild(_channel_count[scanno]);
    _scans[scanno]->LinkEndChild(_detector[scanno]);
    _scans[scanno]->LinkEndChild(_multiply[scanno]);
    _scans[scanno]->LinkEndChild(_sensitivity[scanno]);
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


