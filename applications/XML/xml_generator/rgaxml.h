#ifndef MXML_H
#define MXML_H
#include <iostream>
#include <regex>
#include <string>
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


    std::vector <TiXmlElement * > _name;
    std::vector <TiXmlText * > _text_name;
    std::vector <TiXmlElement * > _serialno;
    std::vector <TiXmlText * > _text_serialno;
    std::vector <TiXmlElement * > _gain1;
    std::vector <TiXmlText * > _text_gain1;
    std::vector <TiXmlElement * > _gain2;
    std::vector <TiXmlText * > _text_gain2;
    std::vector <TiXmlElement * > _gain3;
    std::vector <TiXmlText * > _text_gain3;
    std::vector <TiXmlElement * > _max_mass;
    std::vector <TiXmlText * > _text_max_mass;
    std::vector <TiXmlElement * > _filament;
    std::vector <TiXmlText * > _text_filament;
    std::vector <TiXmlElement * > _plot_type;
    std::vector <TiXmlText * > _text_plot_type;
    std::vector <TiXmlElement * > _channel_count;
    std::vector <TiXmlText * > _text_channel_count;
    std::vector <TiXmlElement * > _detector;
    std::vector <TiXmlText * > _text_detector;
    std::vector <TiXmlElement * > _sensitivity;
    std::vector <TiXmlText * > _text_sensitivity;
    std::vector <TiXmlElement * > _multiply;
    std::vector <TiXmlText * > _text_multiply;

    //Scan info
    TiXmlDocument * doc;
    TiXmlDeclaration * decl;
    TiXmlElement * root;
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
    void gen();
};

#endif // XML_H
