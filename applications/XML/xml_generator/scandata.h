#ifndef SCANDATA_H
#define SCANDATA_H
#include <iostream>
#include <stdio.h>      /* printf */
#include <assert.h>
#include <string>
#include <vector>


struct mytime{
    int year;
    int month;
    int day;
    int hour;
    int min;
    int sec;
};


class scandata
{

    std::string temptime;
    std::vector<float> _mass;
    std::vector<std::vector <float>> _pressure;
    std::vector <float> _sump;
    std::vector <mytime> timeInfo;
    unsigned int _pindex;
    unsigned int _mindex;
    unsigned int _scan;
    char _mybuffer[];
    std::vector<std::string> my_rege_name;
    std::vector<std::string> my_rege_map;
    std::vector<std::string> infoval;
    std::vector<std::string> elenamemap;
    int _name;

public:
    scandata();

//Global info that will not change between scans
void setInfoIndex(int name){this->_name=name;}
void setInfo(std::string info){this->infoval[_name]= info;}

const char * getInfo()         {return this->infoval[_name].c_str();}
const char * getInfoName()     {return this->my_rege_name[_name].c_str() ;}
const char * getInfoNameRegExp(){return this->my_rege_name[_name].c_str();}
int getInfoSize()              {return this->infoval.size()                  ;}
const char * getElementName()  {return this->elenamemap[_name].c_str()       ;}


    //Scan level info

    void setIndex(unsigned int  scan_index, unsigned mass_index, unsigned int  pressure_index);
    void setPressure(float pressure);
    void setMass(float mass);

    void setSump(float sump);

    float getPressure();
    float getMass();

    int getNumberScans();
    int getPressureRange();
    int getMassRange();
    int checkMassPressureSize();
    float getSumP();

    void setYear(int);
    void setMonth(int);
    void setDay(int);
    void setHour(int);
    void setMin(int);
    void setSec(int);
    const char* getDateTime();



};

#endif // SCANDATA_H
