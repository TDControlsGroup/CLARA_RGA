/****************************************************************************
V1.2 Macro subsitiutions removed for C++ methods as this is more uniform

****************************************************************************/

//! [0]
#include <iostream>
#include <stdio.h>
#include <QtUiTools>
#include <QString>
#include <QStringList>

//Macro


//! [0]


#include "RGA.h"

//! [1]
RGA::RGA()
{
//Setup Main UI devices

    stream = new QTextStream( stdout );
    DeviceName.push_back(QString(RGA1));
    DeviceName.push_back(QString(RGA2));
    DeviceName.push_back(QString(RGA3));
    DeviceName.push_back(QString(RGA4));
    DeviceName.push_back(QString(RGA5));
	DeviceName.push_back(QString(RGA6));

    DynamicDeviceTitle.push_back(QString("RGA1"));
    DynamicDeviceTitle.push_back(QString("RGA2"));
    DynamicDeviceTitle.push_back(QString("RGA3"));
    DynamicDeviceTitle.push_back(QString("RGA4"));
    DynamicDeviceTitle.push_back(QString("RGA5"));
    DynamicDeviceTitle.push_back(QString("RGA6"));
    ArchiverName=ARCHNAME;	
    
	//Masses to display on the summary plots
	int summary_masses[]=SUMMARY_MASS_LIST;
    summaryMasses.insert( summaryMasses.begin(), summary_masses , summary_masses + SUMMARY_SIZE ) ;
	
    //Masses to display on the strip plots
	int strip_masses[]=STRIP_MASS_LIST;
    stripMasses.insert( stripMasses.begin(), strip_masses , strip_masses + STRIP_SIZE ) ;
	
	for (unsigned int i = 0; i < DEVICES; i++)
{

	//Run the GET title commnad and swap the result into Device Title. This is used all over the place
	Messages.push_back    ( new UserMessage() );
	StringFormat.push_back( new QEStringFormatting() );
    DeviceTitle.push_back ( new QEString( DeviceName[i]+":GETNAME", this, StringFormat[i], i, Messages[i]));
	//Connect the signals for a lable change to a slot to update non EPICS aware widgets
	QObject::connect( DeviceTitle[i], SIGNAL( stringChanged( const QString&, QCaAlarmInfo&, QCaDateTime&, const unsigned int & ) ),
                      this, SLOT( updateTitle( const QString&, QCaAlarmInfo&, QCaDateTime&, const unsigned int & ) ) );
	DeviceTitle[i]->subscribe();

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
	//Usedfor PV naming
	char catstring[40];
	char varstring[40];	

    //Setup slots for main UI: Make buttons work
    QObject::connect (pmain.anascan,   SIGNAL( clicked() ), this, SLOT( RGAFormShowAnaPlot() ) );
    QObject::connect (pmain.barscan,   SIGNAL( clicked() ), this, SLOT( RGAFormShowBarPlot() ) );

	//Setup the archiving buttons
    ((mymain.findChild<QGroupBox*>("Archiver") )->findChild<QEPushButton *>("archStart") )-> setProperty ("variable", ArchiverName+":ArchiveOn" );
    ((mymain.findChild<QGroupBox*>("Archiver") )->findChild<QEPushButton *>("archStop") ) -> setProperty ("variable", ArchiverName+":Off" );
	//Setup the archiving time
    ((mymain.findChild<QGroupBox*>("Archiver") )->findChild<QELabel *>("archDt") ) -> setProperty ("variable", ArchiverName+":ONTIMER" );

	
	
	for (unsigned int i = 0; i < DEVICES; i++)
    {

		/* Main Window*/
		//Fill in names and serial numbers of the devices
		//Names
        updateObject<QELabel*>("id_%d", "%s:GETNAME", "variable", 1, i);		

		//Make button links from main to the summary plots and from strip plots
        updateObject<QEPushButton*>("dummy", "%d", "clickText", 2, i);	
	
		//SN
        updateObject<QELabel*>("sn_%d", "%s:GETSERIAL", "variable", 1, i);
		
	    //Connect the percentage scan boxes to the EPICS records
        updateObject<QGroupBox*>("per%d", "%s:PERSCANNED", "variable", 3, i);

	    //Update the main panel LED strips
        updateObject<RgaLed*>("box_%d", "dummy", "dummy", 5, i);

		//Update the summary panel boxes
        updateObject<QGroupBox*>("status_%d", "dummy", "dummy", 6, i);
		
		/*Summary bar charts*/
		for (unsigned int j=0; j< summaryMasses.size() ; j++)
		{

		updateObject<QELabel*>("name_%02d", "%s:BAR:M%d.DESC", "variable", 4, i, j);
		updateObject<QELabel*>("pres_%02d", "%s:BAR:M%d", "variable", 4, i, j);
		updateObject<QEAnalogIndicator*>("bar_%02d", "%s:BAR:M%d", "variable", 4, i, j );
		}	
	
        /*Strip Chart*/
		( (mystrip.at(i) )->findChild< QEStripChart*>("qestripchart")  )->setYRange(MIN_YPRESSURE,MAX_YPRESSURE);
        ( (mystrip.at(i) )->findChild< QEStripChart*>("qestripchart")  )->yScaleModeSelected(QEStripChartNames::log);
		for (unsigned int j=0; j< stripMasses.size() ; j++)
		{
		  sprintf(varstring,"%s:BAR:M%d \n",DeviceName[i].toStdString().c_str(), summaryMasses[j]);	 
	      ( (mystrip.at(i) )->findChild< QEStripChart*>("qestripchart")  )-> setPvName(j, varstring );
		}	
	}

  mytabs.setFixedSize(rgamain.geometry().width(),rgamain.geometry().height());
  mytabs.addTab(&mymain, tr("RGA startup"));
  mytabs.addTab(&rgamain, tr("RGA settings"));
  mytabs.show(); 
  
}

/*
  Update objects
*/
template<class T>
void RGA::updateObject(const char *catstring,const  char *varstring,const  char* property, int mode,int i, int j)
{   
    char catf[40];
	char varf[40];


	switch(mode){
		
	 case 1:
	  //Lable: Add device name to the varstring
	  sprintf(catf,catstring,i+1);
	  sprintf(varf,varstring,DeviceName[i].toStdString().c_str());
	  (mymain.findChild<T>(catf) )-> setProperty (property, varf );
     break;
	 
	 case 2:
	  //ClickText: Just use the varstring
	  sprintf(catf,"summary%d",i+1);
	  sprintf(varf,varstring,i);
	  //Bar
	  (mymain.findChild<T>(catf) )-> setProperty (property, varf );
	  QObject::connect (mymain.findChild<T>(catf),  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
      //Strip
	  sprintf(catf,"barstrip%d",i+1);
	  (mymain.findChild<T>(catf) )-> setProperty (property, varf );
	  QObject::connect (mymain.findChild<T>(catf),  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowStripPlot(int) ) );

     break;
	 
	 case 3:
	  //Percent box
	  sprintf(catf,catstring,i+1);
	  sprintf(varf,varstring,DeviceName[i].toStdString().c_str());
	  ((mymain.findChild<T>("percentBox") )->findChild<QEAnalogProgressBar *>(catf) )-> setProperty ("variable", varf );
	 break;
	 
	 case 4:
	  //Summary plots
	  sprintf(catf,catstring,j+1);
	  sprintf(varf,varstring,DeviceName[i].toStdString().c_str(), summaryMasses[j]);
	  ((ov.at(i))->findChild<T>(catf))-> setProperty("variable",varf);
	 break;
	 
	 case 5:
	  //Main window LED display
	  sprintf(catf,catstring,i+1);
	  sprintf(varf,"%s",DeviceName[i].toStdString().c_str());
      mymain.findChild<RgaLed*>(catf)->setEPICS(varf);
 	  
	 break;

	 case 6:
	  //RGA summary screen

	  //Filament LED
	  sprintf(catf,catstring,i+1);
	  sprintf(varf,"%s",DeviceName[i].toStdString().c_str());
	  rgamain.findChild<RgaStatus*>(catf)->setEPICS(varf);
	  break;
	  }
}

const char* RGA::varString(const char* varstring, char* pvar, int i)
{
	  sprintf(pvar,varstring,DeviceName[i].toStdString().c_str());
	  return pvar;
}

/*
*
* SLOTS:
*
*/

void RGA::connectionChanged( QCaConnectionInfo& connectionInfo )
{
	      printf("Connection issue \n");
}

void RGA::updateTitle( const QString& data, QCaAlarmInfo&, QCaDateTime& timeStamp, const unsigned int &i )
{
    //Update objects that are not EPICS aware
	printf("Connection data update %d: %s \n", i, data.toStdString().c_str() );
    //Update the label
	
	//Use custom widget to fill the LED and mode indicators titles	
	char catstring[40];
    sprintf(catstring,"box_%d",i+1);
    (mymain.findChild<RgaLed *>(catstring) )->setTitle(data.toStdString().c_str() );
	
    //Use custom widget to fill the LED and mode indicators in the main window	
	sprintf(catstring,"status_%d",i+1);
    (rgamain.findChild<RgaStatus *>(catstring))->setTitle(data.toStdString().c_str() );	
    //Update the title box
     DynamicDeviceTitle[i]=data.toStdString().c_str();
}


void  RGA::RGAFormShowAnaPlot()
{
    pana.qeplotter->setYRange(MIN_YPRESSURE,MAX_YPRESSURE);
    pana.qeplotter->setXRange(0,200);
    QStringList pvs;
    QStringList alias;
    pvs << "=(S-.5)/32" << DeviceName[0]+":ANA" << DeviceName[1]+":ANA" << DeviceName[2]+":ANA" << DeviceName[3]+":ANA" << DeviceName[4]+":ANA" << DeviceName[5]+":ANA";
    alias << "X " << DynamicDeviceTitle[0] << DynamicDeviceTitle[1] << DynamicDeviceTitle[2] << DynamicDeviceTitle[3] << DynamicDeviceTitle[4] << DynamicDeviceTitle[5];

    pana.qeplotter->setDataPvNameSet(pvs);
    pana.qeplotter->setAliasNameSet(alias);
    myana.show();
}
void  RGA::RGAFormShowBarPlot()
{
    pbar.qeplotter->setYRange(MIN_YPRESSURE,MAX_YPRESSURE);
    pbar.qeplotter->setXRange(0,200);
    QStringList pvs;
    QStringList alias;
    pvs << "=(S-0.5)" << DeviceName[0]+":BAR" << DeviceName[1]+":BAR" << DeviceName[2]+":BAR" << DeviceName[3]+":BAR" << DeviceName[4]+":BAR" << DeviceName[5]+":BAR";
    alias << "X " << DynamicDeviceTitle[0] << DynamicDeviceTitle[1] << DynamicDeviceTitle[2] << DynamicDeviceTitle[3] << DynamicDeviceTitle[4] << DynamicDeviceTitle[5];

    pbar.qeplotter->setDataPvNameSet(pvs);
    pbar.qeplotter->setAliasNameSet(alias);
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
