#include <iostream>
#include <stdio.h>      /* printf */
#include <assert.h>
#include "scandata.h"

void test_scandata(){
    //Load
    scandata *myobj;
    myobj= new scandata();
    //

    myobj->setIndex(1,1,1); //Scan 0 and 1 and mass 0 and 1
    myobj->setPressure(1.2e-10);
    //Inital size
    std::cout << "scandat inital scans 2: " <<  myobj->getNumberPressureScans() << "\n";
    assert(myobj->getNumberPressureScans()==2);
    std::cout << "scandat inital pressures: " <<  myobj->getPressureRange() << "\n";
    assert(myobj->getPressureRange()==2);
    std::cout << "scandat set and get scan 1, pressure 1 pressure = 1.2e-10: " <<  myobj->getPressure() << "\n";
    assert(myobj->getPressure() == (float)1.2e-10);

    std::cout << "scandat mass \n";
    myobj->setMass(1.5);
    assert(myobj->getMass() == (float)1.5);

    std::cout << "scandat check index masses != index pressures, load data and then check they match\n";
    //First test fails
    assert(myobj->checkMassPressureSize()==false);
    //Set mass and pressure scans
    myobj->setIndex(0,0,0);
    myobj->setMass(0.5);
    myobj->setPressure(1.1e-2);
    myobj->setIndex(0,0,1);
    myobj->setPressure(1.5e-1);
    myobj->setIndex(1,0,0);
    myobj->setPressure(1.5e-4);

    //Check data
    myobj->setIndex(0,0,0);
    assert(myobj->getPressure() == (float)1.1e-2);
    assert(myobj->getMass() == (float)0.5);

    myobj->setIndex(0,1,1);
    assert(myobj->getPressure() == (float)1.5e-1);
    assert(myobj->getMass() == (float)1.5);

    myobj->setIndex(1,0,0);
    assert(myobj->getPressure() == (float)1.5e-4);
    assert(myobj->getMass() == (float)0.5);

    myobj->setIndex(1,1,1);
    assert(myobj->getPressure() == (float)1.2e-10);
    assert(myobj->getMass() == (float)1.5);

    //Now data loaded and test passes: Check mass and pressure scans equal size
    assert(myobj->checkMassPressureSize()==true);

    std::cout << "Sump for three values\n";
    myobj->setIndex(0,0,0);
    myobj->setSump(5);
    assert(myobj->getSumP() == 5);
    myobj->setIndex(1,0,0);
    myobj->setSump(6);
    assert(myobj->getSumP() == 6);
    myobj->setIndex(2,0,0);
    myobj->setSump(7);
    assert(myobj->getSumP() == 7);
}

int main(){
    test_scandata();
    return 0;
}
