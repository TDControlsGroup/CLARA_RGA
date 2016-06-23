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
    if ( !(files.LoadFile()) ){cout << "Failed to load filelist"; return -1;};
    TiXmlElement *filel = files.FirstChildElement("files");

    for(TiXmlElement* e = filel->FirstChildElement("file"); e != NULL; e = e->NextSiblingElement("file"))
            {
                cout << "Playing: " << e->GetText() << "\n";
                string currentfile = e->GetText();


                stripFile myscan;
                rgaxml myxml;

                TiXmlDocument  doc;
                scandata myresults;
                myscan.scan(currentfile.c_str(),&myresults);
                std::string myoutfile="outfile_";
                myoutfile+=e->GetText();
                myoutfile+=".xml";

                myxml.build(&myresults, myoutfile.c_str());
            }

    return 0;
}
