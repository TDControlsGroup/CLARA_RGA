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


//! [0]


#include "RGA.h"

//! [1]
RGA::RGA()
{
//Setup Main UI
 QString applicationMacros[4];

 //Macro substitutions in the Ui files
 applicationMacros[0]="CHD=test1";
 applicationMacros[1]="CHD=test2";
 applicationMacros[2]="CHD=test3";
 applicationMacros[3]="CHD=test4";

 pmain.setupUi(&mymain);
 ContainerProfile profile;

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

void  RGA::RGAMain(){
    //Seupup slots for main UI: Make buttons work
    QObject::connect (pmain.anascan,  SIGNAL( clicked() ), this, SLOT( RGAFormShowAnaPlot() ) );
    QObject::connect (pmain.barscan,  SIGNAL( clicked() ), this, SLOT( RGAFormShowBarPlot() ) );
    QObject::connect (pmain.summary1, SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    QObject::connect (pmain.summary2, SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    QObject::connect (pmain.summary3, SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    QObject::connect (pmain.summary4, SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
   //Add main ui to a tabbed window
    mytabs.setFixedSize(mymain.geometry().width(),mymain.geometry().height());
    mytabs.addTab(&mymain, tr ("RGA Overview"));
    mytabs.show();
   //Title the overview barcharts
    ov1.setWindowTitle("RGA 1");
    ov2.setWindowTitle("RGA 2");
    ov3.setWindowTitle("RGA 3");
    ov4.setWindowTitle("RGA 4");
 }
void  RGA::RGAFormShowAnaPlot(){
 //   if (pWinAnachart == NULL) {pWinAnachart = new QMainWindow;}
 //   if (panachart    == NULL) {panachart = new Ui_anachart; panachart->setupUi(pWinAnachart); }
    //Alter Y range
 //   panachart->qeplotter->setYRange(1e-12,0.1);
//    panachart->qeplotter->setXRange(0,200);
//    pWinAnachart->show();
 }
void  RGA::RGAFormShowBarPlot(){

 }
void  RGA::RGAFormShowBarSummary(int rga){
    switch(rga) {
        case 1 : ov1.show(); break; // Show Bar1
        case 2 : ov2.show(); break; // Show Bar2
        case 3 : ov3.show(); break; // Show Bar3
        case 4 : ov4.show(); break; // Show Bar4

    }
 }

void RGA::requestAction( const QEActionRequests& request )
{

    /*
        There are two ways to handle signals in EpicsQt
        Through Qt Signal/Slots or through EpicsQt ContainerProfile.
        I used ContainerProfile for macros not for signals
        but this is here to stop runtime warnings and incasae I do
        decide to use this method (for example, use EpicsQt to open a Gui using a macro)
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
