#ifndef MXML_H
#define MXML_H
#include <iostream>
#include <regex>
#include <string>
#include <cstring>
#include <vector>
#include <fstream>
#include "tinyxml.h"
#include "tinystr.h"
#include "scandata.h"




class rgaxml
{
    //Data containter
    scandata * myscan;
    //Xml structure
    //Instrument settings info

    std::vector <TiXmlElement * > _element;
    std::vector <TiXmlText    * > _text_element;

    //Scan info
    TiXmlDocument * doc;
    TiXmlDeclaration * decl;
    TiXmlElement * root;
    TiXmlElement * infosection;

    std::vector <TiXmlElement * > _scans;
    std::vector <TiXmlElement * > _data;
    std::vector <TiXmlElement * > _sump;
    std::vector <TiXmlText * > _text_sump;
    std::vector < std::vector <TiXmlElement * >> _pressures;
    std::vector < std::vector <TiXmlText * >> _text_pressures;

    void _buildScan(int  scanno);
    void _buildPress(int scanno, int massno);

public:
    rgaxml();
    ~rgaxml();
    void build(scandata *myobj);
    void addinfo();
    void gen();
};

#endif // XML_H
