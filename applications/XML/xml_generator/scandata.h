#ifndef SCANDATA_H
#define SCANDATA_H
#include <iostream>
#include <stdio.h>      /* printf */
#include <assert.h>
#include <string>
#include <vector>
#include <ctime>
#include <time.h>

class scandata
{
    std::vector<float> _mass;
    std::vector<std::vector <float>> _pressure;
    std::vector <float> _sump;
    std::vector <tm> timeInfo;
    unsigned int _pindex;
    unsigned int _mindex;
    unsigned int _scan;
    char _mybuffer[];

public:
    scandata();
    //Global info that will not change between scans


void setName(char *);
void setSerialno();
void setDetector();
void setSensitivity();
void setPlotType();
void setGain1();
void setGain2();
void setGain3();
void setMax_mass();
void setFilament();
void setChannel_count();
void setMultiply();

char* getName();
char* getSerialno();
char* getDetector();
char* getSensitivity();
char* getPlotType();
float getGain1();
float getGain2();
float getGain3();
int getMax_mass();
int getFilament();
int getChannel_count();
int getMultiply();



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
    char* getDateTime();



};

#endif // SCANDATA_H
