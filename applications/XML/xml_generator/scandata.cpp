#include "scandata.h"

scandata::scandata()
{
    /*
    Vector structure:
    mass -> mass per amu
    pressure-> scan#,pressure
    scanInfo-> scan#, time, sum of pressures
    */


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
 int scandata::getNumberPressureScans(){   return this->_pressure.size();}
 int scandata::getPressureRange(){         return this->_pressure[_scan].size();}
 int scandata::getMassRange(){             return this->_mass.size();}

 int scandata::checkMassPressureSize(){
  int mass_press_equal=1;
     //Check each scan is the same size as the mass range
     for (int scanno=0; scanno < this->getNumberPressureScans() ; scanno++){
         if (_mass.size() != _pressure[scanno].size() ) {mass_press_equal=0;};

     }
  return mass_press_equal;
 }


 void scandata::setYear(int year){   this->timeInfo[_scan].tm_year = year -1900;} //Years after 1900
 void scandata::setMonth(int month){ this->timeInfo[_scan].tm_mon = month - 1;} //Jan == 0, months since Jan
 void scandata::setDay(int day){     this->timeInfo[_scan].tm_mday = day;} //Month day
 void scandata::setHour(int hour){   this->timeInfo[_scan].tm_hour = hour;}
 void scandata::setMin(int min){     this->timeInfo[_scan].tm_min = min;}
 void scandata::setSec(int sec){     this->timeInfo[_scan].tm_sec = sec;}
 char* scandata::getDateTime(){}










