/********************************************************************************
** Form generated from reading UI file 'mv2_widget_led.ui'
**
** V1.1: setup runs from constructor
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MY_MV2_WIDGET_STATUS_H
#define MY_MV2_WIDGET_STATUS_H

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
#include "ui_mv2_widget_status.h"

QT_BEGIN_NAMESPACE


class RgaStatus: public Ui_RgaStatus, public QGroupBox
{
public:
    RgaStatus(QGroupBox *parent):QGroupBox(parent){
    RgaStatus::setupUi(this);
    }

 
	void setEPICS(const char * pv)
	{

		QString base=pv;

			FILSEL   ->setProperty ("variable", base+":SETFIL");

			FILON    ->setProperty ("variable", base+":FILCON");
			FILOFF   ->setProperty ("variable", base+":FILCON");		
			LEDFAIL  ->setProperty ("variable", base+":FILSTA");
			LEDFIL   ->setProperty ("variable", base+":FILSTA");
			LEDCOOL  ->setProperty ("variable", base+":FILSTA");
			STATE    ->setProperty ("variable", base+":FIL");

			IMG      ->setProperty ("variable", base+":ILK");
			RGASTAT  ->setProperty ("variable", base+":HEADSTA");
			
			FARA     ->setProperty ("variable", base+":MLTCON");
			M1       ->setProperty ("variable", base+":MLTCON");
			M3       ->setProperty ("variable", base+":MLTCON");
			M2       ->setProperty ("variable", base+":MLTCON");

			FMLED4   ->setProperty ("variable", base+":MLTSTA");
			FMLED1   ->setProperty ("variable", base+":MLTSTA");
			FMLED3   ->setProperty ("variable", base+":MLTSTA");
			FMLED2   ->setProperty ("variable", base+":MLTSTA");
			FDFACT   ->setProperty ("variable", base+":FDFACT");
			FDVOLT   ->setProperty ("variable", base+":FDVOLT");
			MU1DFACT ->setProperty ("variable", base+":MU1DFACT");
			MU1DVOLT ->setProperty ("variable", base+":MU1DVOLT");
			MU2DFACT ->setProperty ("variable", base+":MU2DFACT");
			MU2DVOLT ->setProperty ("variable", base+":MU2DVOLT");
			MU3DFACT ->setProperty ("variable", base+":MU3DFACT");
			MU3DVOLT ->setProperty ("variable", base+":MU3DVOLT");
			
			STOP     ->setProperty ("variable", base+":CON");
			M50      ->setProperty ("variable", base+":CON");
			M200     ->setProperty ("variable", base+":CON");
			M100     ->setProperty ("variable", base+":CON");
			ANA      ->setProperty ("variable", base+":CON");

			LEDSS    ->setProperty ("variable", base+":SCAN");
			SS_ON    ->setProperty ("variable", base+":SETSCAN");
			SS_OFF   ->setProperty ("variable", base+":SETSCAN");

		}

};
#endif