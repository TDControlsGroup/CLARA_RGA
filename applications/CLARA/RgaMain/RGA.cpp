/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

//! [0]
#include <iostream>
#include <QtUiTools>
#include <QString>
#include <QStringList>
#define MIN_YPRESSURE 1e-13
#define MAX_YPRESSURE 0.1

//! [0]


#include "RGA.h"

//! [1]
RGA::RGA()
{
//Setup Main UI devices

    DeviceName1="rga1";
    DeviceName2="rga2";
    DeviceName3="rga3";
    DeviceName4="rga4";

    DeviceTitle1="Rga1";
    DeviceTitle2="Rga2";
    DeviceTitle3="Rga3";
    DeviceTitle4="Rga4";

    ArchiverName="rga-arch";

    QString applicationMacros[4];
    QString mainWindowMacros;

//Macro substitutions in the Ui files
    applicationMacros[0]="RGA="+DeviceName1;
    applicationMacros[1]="RGA="+DeviceName2;
    applicationMacros[2]="RGA="+DeviceName3;
    applicationMacros[3]="RGA="+DeviceName4;

    mainWindowMacros="RGA1="+DeviceName1+", RGA2="+DeviceName2+", RGA3="+DeviceName3+", RGA4="+DeviceName4+", GRGA=GlobalRga";

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
    QObject::connect (pmain.barstrip,  SIGNAL( clicked() ), this, SLOT( RGAFormShowStripPlot() ) );
    QObject::connect (pmain.summary1,  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    QObject::connect (pmain.summary2,  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    QObject::connect (pmain.summary3,  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    QObject::connect (pmain.summary4,  SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );

    //Correct button names
    pmain.summary1->setText("Summary "+DeviceTitle1);
    pmain.summary2->setText("Summary "+DeviceTitle2);
    pmain.summary3->setText("Summary "+DeviceTitle3);
    pmain.summary4->setText("Summary "+DeviceTitle4);

    //Correct PVs for the archiver
    pmain.archStart-> setProperty ("variable", ArchiverName+":ArchiveOn"  );
    pmain.archStop->setProperty   ("variable", ArchiverName+":Off" );
    pmain.archStop2->setProperty  ("variable", ArchiverName+":Off" );
    pmain.archOn->setProperty     ("variable", ArchiverName+":TimerRaw" );
    pmain.archTime->setProperty   ("variable", ArchiverName+":sectime" );
    pmain.archFil->setProperty    ("variable", ArchiverName+":FilPow" );
    pmain.archScan->setProperty   ("variable", ArchiverName+":Head" );
    pmain.archAnaOn->setProperty  ("variable", ArchiverName+":ANADone" );
    pmain.archFailR->setProperty  ("variable", ArchiverName+":ANARst" );
    pmain.archFailC->setProperty  ("variable", ArchiverName+":ANANumF" );
    pmain.archFailC->setProperty  ("variable", ArchiverName+":ANANumF" );
    pmain.archTO->setProperty     ("variable", ArchiverName+":ANATmO"  );
    pmain.archTOVal->setProperty  ("variable", ArchiverName+":TmO"  );

    //Add main ui to a tabbed window
    mytabs.setFixedSize(rgamain.geometry().width(),rgamain.geometry().height());
    mytabs.addTab(&mymain, tr ("RGA startup"));
    mytabs.addTab(&rgamain, tr ("RGA settings"));
    mytabs.show();
    //Title the overview barcharts
    ov1.setWindowTitle(DeviceTitle1);
    ov2.setWindowTitle(DeviceTitle2);
    ov3.setWindowTitle(DeviceTitle3);
    ov4.setWindowTitle(DeviceTitle4);
}
void  RGA::RGAFormShowAnaPlot()
{
    pana.qeplotter->setYRange(MIN_YPRESSURE,MAX_YPRESSURE);
    pana.qeplotter->setXRange(0,200);
    QStringList pvs;
    pvs << "=(S-.5)/32" << DeviceName1+":ANA" << DeviceName2+":ANA" << DeviceName3+":ANA" << DeviceName4+":ANA";
    pana.qeplotter->setDataPvNameSet(pvs);
    myana.show();
}
void  RGA::RGAFormShowBarPlot()
{
    pbar.qeplotter->setYRange(MIN_YPRESSURE,MAX_YPRESSURE);
    pbar.qeplotter->setXRange(0,200);
    QStringList pvs;
    pvs << "=(S-0.5)" << DeviceName1+":BAR" << DeviceName2+":BAR" << DeviceName3+":BAR" << DeviceName4+":BAR";
    pbar.qeplotter->setDataPvNameSet(pvs);
    mybar.show();
}
void  RGA::RGAFormShowStripPlot()
{
    pstrip.qestripchart->setYRange(MIN_YPRESSURE,MAX_YPRESSURE);
    pstrip.qestripchart->yScaleModeSelected(QEStripChartNames::log);

    pstrip.qestripchart->setPvName(0,DeviceName1+":BAR:M2");
    pstrip.qestripchart->setPvName(1,DeviceName1+":BAR:M4");
    pstrip.qestripchart->setPvName(2,DeviceName1+":BAR:M16");
    pstrip.qestripchart->setPvName(3,DeviceName2+":BAR:M2");
    pstrip.qestripchart->setPvName(4,DeviceName2+":BAR:M4");
    pstrip.qestripchart->setPvName(5,DeviceName2+":BAR:M16");
    pstrip.qestripchart->setPvName(6,DeviceName3+":BAR:M2");
    pstrip.qestripchart->setPvName(7,DeviceName3+":BAR:M4");
    pstrip.qestripchart->setPvName(8,DeviceName3+":BAR:M16");
    pstrip.qestripchart->setPvName(9,DeviceName4+":BAR:M2");
    pstrip.qestripchart->setPvName(10,DeviceName4+":BAR:M4");
    pstrip.qestripchart->setPvName(11,DeviceName4+":BAR:M16");
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
