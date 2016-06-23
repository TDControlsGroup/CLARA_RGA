#ifndef STRIPFILE_H
#define STRIPFILE_H
#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <fstream>
#include "tinyxml.h"
#include "tinystr.h"
#include "scandata.h"


using namespace std;
class stripFile
{


    int _maxdata;
    int _scanno;
    int _massstart;
    int _datastart;
    int _instrument_start;
    int _eventstart;
    scandata *loadscan;
    void lineScanner(std::string line);
    void lineFlagger(std::string line);
    void dateTime(std::string dateline, int scan);
public:
stripFile();
void scan(const char *filetype, scandata *myresults);
};
#endif // STRIPFILE_H
