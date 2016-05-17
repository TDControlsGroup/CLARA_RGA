#ifndef SCANDATA_H
#define SCANDATA_H
#include <iostream>
#include <stdio.h>      /* printf */
#include <assert.h>
#include <string>
#include <vector>
#include <ctime>

class scandata
{
    std::vector<float> _mass;
    std::vector<std::vector <float>> _pressure;
    std::vector <float> _sump;
    std::vector <tm> timeInfo;
    unsigned int _pindex;
    unsigned int _mindex;
    unsigned int _scan;


public:
    scandata();
    //Global info that will not change between scans
    void  setScanType(char *);
    char* getScanType();

    void setFil();
    int getFil();

    void setDetector();
    int getDetctor();

    void setMult();
    int getMult();

    void setRange();
    int getRange();

    //Scan level info

    void setIndex(unsigned int  scan_index, unsigned mass_index, unsigned int  pressure_index);
    void setPressure(float pressure);
    void setMass(float mass);

    void setSump(float sump);

    float getPressure();
    float getMass();

    int getNumberPressureScans();
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
    char* getDateTime();



};

#endif // SCANDATA_H
