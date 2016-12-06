/********************************************************************************
** Form generated from reading UI file 'mv2_widget_led.ui'
**
** V1.1: setup runs from constructor
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MY_MV2_WIDGET_LED_H
#define MY_MV2_WIDGET_LED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include "QELabel.h"
#include "QESimpleShape.h"
#include "QSimpleShape.h"
#include "ui_mv2_widget_led.h"

QT_BEGIN_NAMESPACE


class RgaLed: public Ui_RgaLed, public QGroupBox
{
public:
    RgaLed(QGroupBox *parent):QGroupBox(parent){
    RgaLed::setupUi(this);
    }

    
	void setEPICS(const char * pv)
	{		
		QString base=pv;
		STOP_1      ->setProperty ("variable", base+":HEADSTA" );
		BAR50_1     ->setProperty ("variable", base+":HEADSTA" );
		BAR100_1    ->setProperty ("variable", base+":HEADSTA" );
		BAR200_1    ->setProperty ("variable", base+":HEADSTA" );
		ANA200_1    ->setProperty ("variable", base+":HEADSTA" );
		SS_1        ->setProperty ("variable", base+":SCAN" );
		ARMOD       ->setProperty ("variable", base+":ARMOD" );
		ARCSTA      ->setProperty ("variable", base+":ARCSTA" );
		ANATO       ->setProperty ("variable", base+":ANATO" );
		TIMER       ->setProperty ("variable", base+":USRTIMER" );
		
	}

};
#endif