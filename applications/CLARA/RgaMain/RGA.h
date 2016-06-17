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

#ifndef RGAFORM_H
#define RGAFORM_H
#include <stdio.h>
#include <QMainWindow>
#include <QWidget>
#include <QTabWidget>
#include "QEActionRequests.h"
#include "ui_mv2_epicsDisplay.h"
#include "ui_mv2_rgaDisplay.h"
#include "ui_barchart.h"
#include "ui_mv2_main_bar.h"
#include "ui_mv2_stripchart.h"

//! [0]

class RGA : public QObject
{
    Q_OBJECT

    //Windows
    // QMainWindow pWinMain ;

    //Forms from designer used in the windows


    // Ui::barchart    pbarchart  ;
    // Ui::mainBar     pmainbar[3];

public:

    RGA();
    ~RGA();
    void RGAMain();
public slots:
    void RGAFormShowAnaPlot();
    void RGAFormShowBarPlot();
    void RGAFormShowStripPlot();
    void RGAFormShowBarSummary(int);
    void requestAction( const QEActionRequests& requests );
private:
    QString DeviceName1;
    QString DeviceName2;
    QString DeviceName3;
    QString DeviceName4;

    QString DeviceTitle1;
    QString DeviceTitle2;
    QString DeviceTitle3;
    QString DeviceTitle4;

    //*******
    //Windows
    //*******

    //Tab box
    QTabWidget  mytabs;

    //Main GUI
    QMainWindow mymain;
    QMainWindow rgamain;

    //Barchart RGA overview
    QMainWindow mybar;
    QMainWindow myana;

    //Live stripchart tool
    QMainWindow mystrip;

    //Overview barcharts
    QMainWindow ov1;
    QMainWindow ov2;
    QMainWindow ov3;
    QMainWindow ov4;

    //*****
    //Forms
    //*****
    Ui::mainWindow  pmain     ;
    Ui::rgaWindow   prga;
    Ui::barchart    pbar      ;
    Ui::barchart    pana      ;
    Ui::stripWindow pstrip    ;
    Ui::mainBar     poverview1;
    Ui::mainBar     poverview2;
    Ui::mainBar     poverview3;
    Ui::mainBar     poverview4;
};
//! [0]

#endif
