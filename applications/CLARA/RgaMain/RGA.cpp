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
#define MIN_YPRESSURE 1e-13
#define MAX_YPRESSURE 0.1

//! [0]


#include "RGA.h"

//! [1]
RGA::RGA()
{
//Setup Main UI devices
    //CA
	RgaCA myCA;

    DeviceName.push_back(QString("rga1"));
    DeviceName.push_back(QString("rga2"));
    DeviceName.push_back(QString("rga3"));
    DeviceName.push_back(QString("rga4"));
    DeviceName.push_back(QString("rga5"));
	DeviceName.push_back(QString("rga6"));
    ArchiverName="rga-arch";	

	for (unsigned int i = 0; i < DeviceName.size(); i++)
{
    DeviceTitle.push_back(DeviceName[i]+":GETNAME");
	printf("Number %d Name %s \n", i, DeviceTitle[i].toStdString().c_str() );
    DeviceTitle[i]=myCA.GetData(DeviceTitle[i].toStdString().c_str());
	printf("Number %d Name %s \n", i, DeviceTitle[i].toStdString().c_str() );
}

	
//    DeviceTitle2=DeviceName2+":GETNAME";
//    DeviceTitle2=myCA.GetData(DeviceTitle2.toStdString().c_str());



    QString applicationMacros[4];
    QString mainWindowMacros;

//Macro substitutions in the Ui files
    applicationMacros[0]="RGA="+DeviceName[0];
    applicationMacros[1]="RGA="+DeviceName[1];
    applicationMacros[2]="RGA="+DeviceName[2];
    applicationMacros[3]="RGA="+DeviceName[3];

    mainWindowMacros="RGA1="+DeviceName[0]+", RGA2="+DeviceName[1]+", RGA3="+DeviceName[2]+", RGA4="+DeviceName[3]+", GRGA=GlobalRga";

    ContainerProfile profile;
//Main GUI
    profile.setupProfile( this, QStringList(), "", mainWindowMacros );
    pmain.setupUi(&mymain);
    prga.setupUi(&rgamain);
    profile.releaseProfile();

//Comparison barcharts
    pbar.setupUi(&mybar);
    pana.setupUi(&myana);

//Stripchart tool
    pstrip.setupUi(&mystrip);

//Summary bar charts
    profile.setupProfile( this, QStringList(), "", applicationMacros[0] );
    poverview1.setupUi(&ov1);
    profile.releaseProfile();

    profile.setupProfile( this, QStringList(), "", applicationMacros[1] );
    poverview2.setupUi(&ov2);
    profile.releaseProfile();

    profile.setupProfile( this, QStringList(), "", applicationMacros[2] );
    poverview3.setupUi(&ov3);
    profile.releaseProfile();

    profile.setupProfile( this, QStringList(), "", applicationMacros[3] );
    poverview4.setupUi(&ov4);
    profile.releaseProfile();

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
    //QObject::connect (pmain.summary1,  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    //QObject::connect (pmain.summary2,  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    //QObject::connect (pmain.summary3,  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    //QObject::connect (pmain.summary4,  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );

	char catstring[40];
	char varstring[40];	
	

	for (unsigned int i = 0; i < DeviceName.size(); i++)
    {
		/*mainwindow*/
		
		//Labels for buttons
		sprintf(catstring,"name%d",i+1);
	    printf("Buttons relabel, %s\n",catstring);
        (mymain.findChild<QLabel *>(catstring) )->setText(DeviceTitle[i]);
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

	}
	

	
    //Add main ui to a tabbed window
    mytabs.setFixedSize(mymain.geometry().width(),mymain.geometry().height());
    mytabs.addTab(&mymain, tr ("RGA startup"));
    mytabs.addTab(&rgamain, tr ("RGA settings"));
    mytabs.show();
    //Title the overview barcharts
    ov1.setWindowTitle(DeviceTitle[0]);
    ov2.setWindowTitle(DeviceTitle[1]);
    ov3.setWindowTitle(DeviceTitle[2]);
    ov4.setWindowTitle(DeviceTitle[3]);
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
void  RGA::RGAFormShowStripPlot()
{
    pstrip.qestripchart->setYRange(MIN_YPRESSURE,MAX_YPRESSURE);
    pstrip.qestripchart->yScaleModeSelected(QEStripChartNames::log);

    pstrip.qestripchart->setPvName(0,DeviceName[0]+":BAR:M2");
    pstrip.qestripchart->setPvName(1,DeviceName[0]+":BAR:M4");
    pstrip.qestripchart->setPvName(2,DeviceName[0]+":BAR:M16");
    pstrip.qestripchart->setPvName(3,DeviceName[1]+":BAR:M2");
    pstrip.qestripchart->setPvName(4,DeviceName[1]+":BAR:M4");
    pstrip.qestripchart->setPvName(5,DeviceName[1]+":BAR:M16");
    pstrip.qestripchart->setPvName(6,DeviceName[2]+":BAR:M2");
    pstrip.qestripchart->setPvName(7,DeviceName[2]+":BAR:M4");
    pstrip.qestripchart->setPvName(8,DeviceName[2]+":BAR:M16");
    pstrip.qestripchart->setPvName(9,DeviceName[3]+":BAR:M2");
    pstrip.qestripchart->setPvName(10,DeviceName[3]+":BAR:M4");
    pstrip.qestripchart->setPvName(11,DeviceName[3]+":BAR:M16");
    mystrip.show();
}
void  RGA::RGAFormShowBarSummary(int rga)
{
    switch(rga)
    {
    case 1 :
        ov1.show();
        break; // Show Bar1
    case 2 :
        ov2.show();
        break; // Show Bar2
    case 3 :
        ov3.show();
        break; // Show Bar3
    case 4 :
        ov4.show();
        break; // Show Bar4

    }
}

void RGA::requestAction( const QEActionRequests& request )
{

    /*
        There are two ways to handle signals in EpicsQt. One is through Qt Signal/Slots and the other through EpicsQt ContainerProfile.
        I don't use ContainerProfile for Signals/Slots but I do use it for macro substitutions. This is here to stop runtime warnings from that.
        If you decide to use this, for example: open a Gui using a macro, then its functions will go here.
    */
    // Only handle file open requests
    if( request.getKind() != QEActionRequests::KindOpenFile )
    {
        return;
    }

    // If there is enough arguments, open the file
    if (request.getArguments().count () >= 1)
    {
        // Build the gui and load it into a dialog.
        // Note, this is very similar to the default method that QE push buttons uses
        // to present a gui if the application has not provided a handler to
        // create GUIs through the ContainerProfile.
        QDialog* d = new QDialog();
        QEForm* gui = new QEForm( request.getArguments().first() );
        if( gui )
        {
            if( gui->readUiFile())
            {
                gui->setParent( d );
                d->exec();
            }
            else
            {
                delete gui;
                gui = NULL;
            }
        }
        else
        {
            delete d;
        }
    }
}
