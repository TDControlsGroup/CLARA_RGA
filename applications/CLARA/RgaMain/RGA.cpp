/****************************************************************************
V1.2 Macro subsitiutions removed for C++ methods as this is more uniform

****************************************************************************/

//! [0]
#include <iostream>
#include <stdio.h>
#include <QtUiTools>
#include <QString>
#include <QStringList>
#include <cadef.h>
#include "RgaCA.h"

//Macro


//! [0]


#include "RGA.h"

//! [1]
RGA::RGA()
{
//Setup Main UI devices
    //CA
	RgaCA myCA;

    DeviceName.push_back(QString(RGA1));
    DeviceName.push_back(QString(RGA2));
    DeviceName.push_back(QString(RGA3));
    DeviceName.push_back(QString(RGA4));
    DeviceName.push_back(QString(RGA5));
	DeviceName.push_back(QString(RGA6));
    ArchiverName="rga-arch";	
    
	//Masses to display on the summary plots
	int summary_masses[]=SUMMARY_MASS_LIST;
    summaryMasses.insert( summaryMasses.begin(), summary_masses , summary_masses + SUMMARY_SIZE ) ;
	
    //Masses to display on the strip plots
	int strip_masses[]=STRIP_MASS_LIST;
    stripMasses.insert( stripMasses.begin(), strip_masses , strip_masses + STRIP_SIZE ) ;
	
	for (unsigned int i = 0; i < DEVICES; i++)
{
	//Put the GET title commands into Device Title
    DeviceTitle.push_back(DeviceName[i]+":GETNAME");
	printf("Number %d Name %s \n", i, DeviceTitle[i].toStdString().c_str() );

	//Run the GET title commnad and swap the result into Device Title. This is used all over the place
	//to label devcices so record the name in an array
    //DeviceTitle[i]=myCA.GetData(DeviceTitle[i].toStdString().c_str());
	printf("Number %d Name %s \n", i, DeviceTitle[i].toStdString().c_str() );
    //Set up summary plots
    ov.push_back(new QMainWindow);
	pmainBar.push_back(new Ui::mainBar);
	pmainBar.at(i)->setupUi(ov.at(i));

	//Set up strip plots
	mystrip.push_back(new QMainWindow);
	pstrip.push_back(new Ui::stripWindow);
	pstrip.at(i)->setupUi(mystrip.at(i));
}

    QString applicationMacros[4];
    QString mainWindowMacros;

//Main GUI
    pmain.setupUi(&mymain);
    prga.setupUi(&rgamain);


//Comparison barcharts
    pbar.setupUi(&mybar);
    pana.setupUi(&myana);
}

RGA::~RGA()
{

}

void  RGA::RGAMain()
{

    //Seupup slots for main UI: Make buttons work
    QObject::connect (pmain.anascan,   SIGNAL( clicked() ), this, SLOT( RGAFormShowAnaPlot() ) );
    QObject::connect (pmain.barscan,   SIGNAL( clicked() ), this, SLOT( RGAFormShowBarPlot() ) );
    //QObject::connect (pmain.barstrip,  SIGNAL( clicked() ), this, SLOT( RGAFormShowStripPlot() ) );

	char catstring[40];
	char varstring[40];	

    
	
	
	for (unsigned int i = 0; i < DEVICES; i++)
    {

		/* Main Window*/
		//Fill in names and serial numbers of the devices
		//Names

	    sprintf(catstring,"id_%d",i+1);
	    sprintf(varstring,"%s:GETNAME",DeviceName[i].toStdString().c_str());
	    (mymain.findChild<QELabel *>(catstring) )-> setProperty ("variable", varstring );		


		//Make button links from main to the summary plots
	    sprintf(catstring,"summary%d",i+1);
		sprintf(varstring,"%d",i);
		mymain.findChild<QEPushButton *>(catstring)->setProperty("clickText",varstring);
		QObject::connect (mymain.findChild<QEPushButton *>(catstring),  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
		
		//Make button links from strip to the summary plots
	    sprintf(catstring,"barstrip%d",i+1);
		sprintf(varstring,"%d",i);
		mymain.findChild<QEPushButton *>(catstring)->setProperty("clickText",varstring);
		QObject::connect (mymain.findChild<QEPushButton *>(catstring),  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowStripPlot(int) ) );

		//SN
	    sprintf(catstring,"sn_%d",i+1);
	    sprintf(varstring,"%s:GETSERIAL",DeviceName[i].toStdString().c_str());
	    (mymain.findChild<QELabel *>(catstring) )-> setProperty ("variable", varstring );		


        //Use custom widget to fill the LED and mode indicators in the main window	
	    sprintf(catstring,"box_%d",i+1);
        (mymain.findChild<RgaLed *>(catstring) )->setEPICS(DeviceTitle[i].toStdString().c_str(),DeviceName[i].toStdString().c_str());
	    //Connect the percentage scan boxes to the EPICS records
	    sprintf(catstring,"per%d",i+1);		
	    sprintf(varstring,"%s:PERSCANNED",DeviceName[i].toStdString().c_str());
	    ((mymain.findChild<QGroupBox *>("percentBox") )->findChild<QEAnalogProgressBar *>(catstring) )-> setProperty ("variable", varstring );

		/*rgamainwindow*/
		
        //Use custom widget to fill the LED and mode indicators in the main window	
	    sprintf(catstring,"status_%d",i+1);
        (rgamain.findChild<RgaStatus *>(catstring))->setEPICS(DeviceTitle[i].toStdString().c_str(),DeviceName[i].toStdString().c_str());
printf("Fill loop %i\n", i);
		/*Summary bar charts*/
		for (unsigned int j=0; j< summaryMasses.size() ; j++)
		{
	      sprintf(catstring,"name_%02d",j+1);	
		  sprintf(varstring,"%s:BAR:M%d.DESC \n",DeviceName[i].toStdString().c_str(), summaryMasses[j]);
	      ( (ov.at(i) )->findChild< QELabel*>(catstring)  )-> setProperty ("variable", varstring );
	      sprintf(catstring,"pres_%02d",j+1);		 
		  sprintf(varstring,"%s:BAR:M%d \n",DeviceName[i].toStdString().c_str(), summaryMasses[j]);
	      ( (ov.at(i) )->findChild< QELabel*>(catstring)  )-> setProperty ("variable", varstring );
		  sprintf(catstring,"bar_%02d",j+1);
		  ( (ov.at(i) )->findChild< QEAnalogIndicator*>(catstring)  )-> setProperty ("variable", varstring );
		}	

		
        /*Strip Chart*/
		( (mystrip.at(i) )->findChild< QEStripChart*>("qestripchart")  )->setYRange(MIN_YPRESSURE,MAX_YPRESSURE);
        ( (mystrip.at(i) )->findChild< QEStripChart*>("qestripchart")  )->yScaleModeSelected(QEStripChartNames::log);
		for (unsigned int j=0; j< stripMasses.size() ; j++)
		{
		  sprintf(varstring,"%s:BAR:M%d \n",DeviceName[i].toStdString().c_str(), summaryMasses[j]);
	      printf("%s \n", varstring);		 
	      ( (mystrip.at(i) )->findChild< QEStripChart*>("qestripchart")  )-> setPvName(j, varstring );

		}	
	}

  mytabs.setFixedSize(rgamain.geometry().width(),rgamain.geometry().height());
  mytabs.addTab(&mymain, tr("RGA startup"));
  mytabs.addTab(&rgamain, tr("RGA settings"));
  mytabs.show(); 
  
}
	

void  RGA::RGAFormShowAnaPlot()
{
    pana.qeplotter->setYRange(MIN_YPRESSURE,MAX_YPRESSURE);
    pana.qeplotter->setXRange(0,200);
    QStringList pvs;
    pvs << "=(S-.5)/32" << DeviceName[0]+":ANA" << DeviceName[1]+":ANA" << DeviceName[2]+":ANA" << DeviceName[3]+":ANA";
    pana.qeplotter->setDataPvNameSet(pvs);
    myana.show();
}
void  RGA::RGAFormShowBarPlot()
{
    pbar.qeplotter->setYRange(MIN_YPRESSURE,MAX_YPRESSURE);
    pbar.qeplotter->setXRange(0,200);
    QStringList pvs;
    pvs << "=(S-0.5)" << DeviceName[0]+":BAR" << DeviceName[1]+":BAR" << DeviceName[2]+":BAR" << DeviceName[3]+":BAR";
    pbar.qeplotter->setDataPvNameSet(pvs);
    mybar.show();
}
void  RGA::RGAFormShowStripPlot(int summary)
{
    (mystrip.at(summary))->show();
}
void  RGA::RGAFormShowBarSummary(int rga)
{
    (ov.at(rga))->show();
}
