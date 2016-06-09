#include "scandata.h"

scandata::scandata()
{
    /*
    Vector structure:
    mass -> mass per amu
    pressure-> scan#,pressure
    scanInfo-> scan#, time, sum of pressures
    */
    my_rege_name.push_back("Instrument Name");
    my_rege_name.push_back("Serial number");
    my_rege_name.push_back("Electronic Gain 1");
    my_rege_name.push_back("Electronic Gain 2");
    my_rege_name.push_back("Electronic Gain 3");
    my_rege_name.push_back("Maximum mass");
    my_rege_name.push_back("Measurement");
    my_rege_name.push_back("Units");
    my_rege_name.push_back("Filament");
    my_rege_name.push_back("Channel count");
    my_rege_name.push_back("Accuracy");
    my_rege_name.push_back("Detector");
    my_rege_name.push_back("Sensitivity");
    my_rege_name.push_back("Detector gain");
    my_rege_name.push_back("Electronic Gain Id");

    //Make the names into regexp


    for(unsigned int i =0; i < my_rege_name.size(); i++){
        my_rege_map.push_back("");
        my_rege_map[i] = my_rege_name[i];
        if(my_rege_name[i] == "Sensitivity" ){my_rege_map[i].append(" .?A.?mbar.?");}
        my_rege_map[i].append("\"\t\"?([A-Za-z0-9\.-]*)\"?");
        infoval.push_back("");
    }
   //Add XML element names
    elenamemap.push_back("INSTRUMENT");
    elenamemap.push_back("SERIAL_NUMBER");
    elenamemap.push_back("E_GAIN_1");
    elenamemap.push_back("E_GAIN_2");
    elenamemap.push_back("E_GAIN_3");
    elenamemap.push_back("MAX_MASS");
    elenamemap.push_back("MEASUREMENT");
    elenamemap.push_back("UNITS");
    elenamemap.push_back("FILAMENT");
    elenamemap.push_back("CHANNEL_COUNT");
    elenamemap.push_back("ACCURACY");
    elenamemap.push_back("DETECTOR");
    elenamemap.push_back("SENSITIVITY");
    elenamemap.push_back("DETECTOR_GAIN");
    elenamemap.push_back("E_GAIN_ID");
}
 void scandata::setIndex(unsigned int  scan_index, unsigned mass_index ,unsigned int  pressure_index)
{
this->_scan=scan_index;this->_pindex=pressure_index;

 //2D pressure vector bounds check : Expand pressure vec to scan range
  if(_pressure.size()<_scan+1){
   _pressure.resize(_scan+1);
   _pressure[_scan].resize(0);
  }

 //2D pressure vector bounds check: Expand pressure vec to index range
  if(_pressure[_scan].size()<_pindex+1){
  _pressure[_scan].resize(_pindex+1);
  }

 //Check the index of mass range (not affected by scan)
this->_mindex=mass_index;

 if(_mass.size()<_mindex+1){
  _mass.resize(_mindex+1);
 }

 //Check the index of sump scan
 if(_sump.size()<_scan+1){
  _sump.resize(_scan+1);
 }

 //Time info
 if(timeInfo.size()<_scan+1){
  timeInfo.resize(_scan+1);

 }
}

 void scandata::setPressure(float pressure){


     //Load
     _pressure[_scan][_pindex]=pressure;
 }
 void scandata::setMass(float mass){

     this->_mass[_mindex]=mass;
 }

 void scandata::setSump(float sump){this->_sump[_scan]=sump;}


 float scandata::getPressure(){            return this->_pressure[_scan][_pindex];}
 float scandata::getMass(){                return this->_mass[_mindex];}
 float scandata::getSumP(){                return this->_sump[_scan];}
 int scandata::getNumberScans(){           return this->_pressure.size();}
 int scandata::getPressureRange(){         return this->_pressure[_scan].size();}
 int scandata::getMassRange(){             return this->_mass.size();}

 int scandata::checkMassPressureSize(){
  int mass_press_equal=1;
     //Check each scan is the same size as the mass range
     for (int scanno=0; scanno < this->getNumberScans() ; scanno++){
         if (_mass.size() != _pressure[scanno].size() ) {mass_press_equal=0;};

     }
  return mass_press_equal;
 }


void scandata::setYear(int year){   this->timeInfo[_scan].year = year;}
void scandata::setMonth(int month){ this->timeInfo[_scan].month = month;}
void scandata::setDay(int day){     this->timeInfo[_scan].day = day;}
void scandata::setHour(int hour){   this->timeInfo[_scan].hour = hour;}
void scandata::setMin(int min){     this->timeInfo[_scan].min = min;}
void scandata::setSec(int sec){     this->timeInfo[_scan].sec = sec;}

const char* scandata::getDateTime(){
    char buffer[20];
    sprintf(buffer, "%i-%i-%i %i:%i:%i",
            this->timeInfo[_scan].year, this->timeInfo[_scan].month, this->timeInfo[_scan].day,
            this->timeInfo[_scan].hour, this->timeInfo[_scan].min, this->timeInfo[_scan].sec
            );
    temptime=buffer;
    return this->temptime.c_str();
}










