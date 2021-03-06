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
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <QMainWindow>
#include <QString>
#include <QList>
#include <QWidget>
#include <QTabWidget>

//UI screens
#include "ui_mv2_epicsDisplay_v2.h"
#include "ui_mv2_rgaDisplay.h"
#include "ui_barchart.h"
#include "ui_mv2_main_bar.h"
#include "ui_mv2_stripchart.h"

//Values
#define MIN_YPRESSURE 1e-13
#define MAX_YPRESSURE 0.1
#define DEVICES 6

//RGA List
/*
#define ARCHNAME "CLA-SRV-VAC-RGA"

#define RGA1 "CLA-LLS-VAC-RGA1"
#define RGA2 "rga2"
#define RGA3 "rga3"
#define RGA4 "rga4"
#define RGA5 "rga5"
#define RGA6 "rga6"
*/

//SUMMARY_SIZE == Elements in SUMMARY_MASS_LIST
#define SUMMARY_SIZE 14
#define SUMMARY_MASS_LIST {2,4,12,14,15,16,18,28,32,40,44,55,57,69}

//STRIP_SIZE == Elements in STRIP_MASS_LIST
#define STRIP_SIZE 12
#define STRIP_MASS_LIST {2,12,14,15,16,18,28,32,40,44,55,69}

//QEString for manual CA to Signal/Slot
#include <QEString.h>   // Normal
#include <UserMessage.h>

//! [0]

class RGA : public QObject
{
    Q_OBJECT



public:

    RGA();
    ~RGA();
    void RGAMain();
public slots:
    void RGAFormShowAnaPlot();
    void RGAFormShowBarPlot();
    void RGAFormShowStripPlot(int);
    void RGAFormShowBarSummary(int);

private:
	
    QString ArchiverName;
    QTextStream* stream;
    std::vector<QString>        		DeviceName;	
    std::vector<QEString *>     		DeviceTitle;
    std::vector<QString>        		DynamicDeviceTitle;
	std::vector<UserMessage *>          Messages;
	std::vector<QEStringFormatting *>   StringFormat;
    std::vector<int>					summaryMasses;
	std::vector<int>				stripMasses;
    const char* varString(const char* varstring, char* pvar,  int i);
	template<class T>
    void updateObject(const char * catstring,const  char * varstring,const  char * property, int mode, int i, int j=0);

	
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
    QList<QMainWindow *> mystrip;

    //Overview barcharts
    QList<QMainWindow *> ov;


    //*****
    //Forms
    //*****
    Ui::mainWindow  pmain     ;
    Ui::rgaWindow   prga;
    Ui::barchart    pbar      ;
    Ui::barchart    pana      ;
	QList<Ui::stripWindow *> pstrip;
	QList<Ui::mainBar *>     pmainBar;

	
private slots:
    void connectionChanged( QCaConnectionInfo& );	
    void updateTitle( const QString& data, QCaAlarmInfo& alarmInfo, QCaDateTime& timeStamp, const unsigned int & );
};
//! [0]

#endif
