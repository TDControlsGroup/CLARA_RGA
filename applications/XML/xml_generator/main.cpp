#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <fstream>
#include "tinyxml.h"
#include "tinystr.h"
#include "stripFile.h"
#include "scandata.h"
#include "rgaxml.h"



int main()
{
    TiXmlDocument files("filelist.xml");
    files.LoadFile();
    TiXmlElement *filel = files.FirstChildElement("files");
    for(TiXmlElement* e = filel->FirstChildElement("file"); e != NULL; e = e->NextSiblingElement("file"))
            {
                cout << "Playing: " << e->GetText() << "\n";
                string currentfile = e->GetText();
                scandata * myresults = new scandata() ;
                rgaxml myxml;
                stripFile myscan;

                myscan.scan(currentfile.c_str(),myresults);
                std::string myoutfile="outfile_";
                myoutfile+=e->GetText();
                myoutfile+=".xml";
                myxml.build(myresults, myoutfile);
                //delete myresults;
            }

    return 0;
}
