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
#include <QtUiTools>
//! [0]


#include "RGA.h"

//! [1]
RGA::RGA()
{
 pWinMain = new QMainWindow;
 //Null pointer arrays
 for (int i= 0; i< 3; i++){pWinMainbar[i]=NULL;}
}

RGA::~RGA()
{
    //Delete all the windows
    delete pWinMain;
    delete pWinAnachart;
    delete pWinBarchart;
    delete pWinMainbar[0];
    delete pWinMainbar[1];
    delete pWinMainbar[2];

}

void  RGA::RGAMain(){
    pmain.setupUi(pWinMain);
    //Seupup slots: Make buttons work
    QObject::connect (pmain.anascan,  SIGNAL( clicked() ), this, SLOT( RGAFormShowAnaPlot() ) );
    QObject::connect (pmain.barscan,  SIGNAL( clicked() ), this, SLOT( RGAFormShowBarPlot() ) );
    QObject::connect (pmain.summary1, SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    QObject::connect (pmain.summary2, SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    QObject::connect (pmain.summary3, SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    QObject::connect (pmain.summary4, SIGNAL( clicked(int) ), this, SLOT( RGAFormShowBarSummary(int) ) );
    pWinMain->show();
 }
void  RGA::RGAFormShowAnaPlot(){
    if (pWinAnachart == NULL) {pWinAnachart = new QMainWindow;}
 //   if (panachart    == NULL) {panachart = new Ui_anachart; panachart->setupUi(pWinAnachart); }
    //Alter Y range
 //   panachart->qeplotter->setYRange(1e-12,0.1);
//    panachart->qeplotter->setXRange(0,200);
//    pWinAnachart->show();
 }
void  RGA::RGAFormShowBarPlot(){

 }
void  RGA::RGAFormShowBarSummary(int rga){
 printf("Selected:%d", rga);
 }

