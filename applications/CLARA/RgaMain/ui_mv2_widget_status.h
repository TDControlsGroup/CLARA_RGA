/********************************************************************************
** Form generated from reading UI file 'mv2_widget_status.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MV2_WIDGET_STATUS_H
#define UI_MV2_WIDGET_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "QBitStatus.h"
#include "QEBitStatus.h"
#include "QELabel.h"
#include "QEPushButton.h"
#include "QESimpleShape.h"
#include "QSimpleShape.h"

QT_BEGIN_NAMESPACE

class Ui_RgaStatus
{
public:
    QGroupBox *Filament_2;
    QEBitStatus *LEDFAIL;
    QLabel *label_6;
    QEBitStatus *LEDFIL;
    QLabel *label_3;
    QEBitStatus *LEDCOOL;
    QELabel *STATE;
    QEPushButton *FILSEL;
    QEPushButton *FILON;
    QEPushButton *FILOFF;
    QGroupBox *RGAstat_2;
    QEBitStatus *IMG;
    QLabel *label_9;
    QLabel *label_26;
    QELabel *RGASTAT;
    QGroupBox *Mode_4;
    QEPushButton *M1;
    QEPushButton *M3;
    QEPushButton *M2;
    QEPushButton *FARA;
    QESimpleShape *FMLED4;
    QESimpleShape *FMLED1;
    QESimpleShape *FMLED3;
    QESimpleShape *FMLED2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QELabel *FDFACT;
    QELabel *FDVOLT;
    QELabel *MU1DFACT;
    QELabel *MU1DVOLT;
    QELabel *MU2DFACT;
    QELabel *MU2DVOLT;
    QELabel *MU3DFACT;
    QELabel *MU3DVOLT;
    QGroupBox *Mode_5;
    QLabel *label_10;
    QEPushButton *ANA;
    QEPushButton *M50;
    QEPushButton *M200;
    QLabel *label_11;
    QEPushButton *M100;
    QEPushButton *STOP;
    QESimpleShape *LEDSS;
    QEPushButton *SS_ON;
    QEPushButton *SS_OFF;
    QLabel *label_12;

    void setupUi(QGroupBox *RgaStatus)
    {
        if (RgaStatus->objectName().isEmpty())
            RgaStatus->setObjectName(QStringLiteral("RgaStatus"));
        RgaStatus->resize(579, 201);
        Filament_2 = new QGroupBox(RgaStatus);
        Filament_2->setObjectName(QStringLiteral("Filament_2"));
        Filament_2->setGeometry(QRect(0, 20, 181, 111));
        LEDFAIL = new QEBitStatus(Filament_2);
        LEDFAIL->setObjectName(QStringLiteral("LEDFAIL"));
        LEDFAIL->setGeometry(QRect(150, 30, 31, 21));
        LEDFAIL->setNumberOfBits(1);
        LEDFAIL->setShift(3);
        LEDFAIL->setShape(QBitStatus::Circle);
        LEDFAIL->setInvalidColour(QColor(255, 0, 0));
        LEDFAIL->setOnColour(QColor(255, 0, 4));
        LEDFAIL->setOffColour(QColor(255, 255, 255));
        label_6 = new QLabel(Filament_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 10, 16, 21));
        QFont font;
        font.setPointSize(6);
        label_6->setFont(font);
        LEDFIL = new QEBitStatus(Filament_2);
        LEDFIL->setObjectName(QStringLiteral("LEDFIL"));
        LEDFIL->setGeometry(QRect(90, 30, 31, 21));
        LEDFIL->setNumberOfBits(1);
        LEDFIL->setShape(QBitStatus::Circle);
        LEDFIL->setInvalidColour(QColor(255, 0, 0));
        LEDFIL->setOffColour(QColor(255, 255, 255));
        label_3 = new QLabel(Filament_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 10, 41, 21));
        label_3->setFont(font);
        LEDCOOL = new QEBitStatus(Filament_2);
        LEDCOOL->setObjectName(QStringLiteral("LEDCOOL"));
        LEDCOOL->setGeometry(QRect(120, 30, 31, 21));
        LEDCOOL->setNumberOfBits(1);
        LEDCOOL->setShift(1);
        LEDCOOL->setShape(QBitStatus::Circle);
        LEDCOOL->setInvalidColour(QColor(255, 0, 0));
        LEDCOOL->setOnColour(QColor(255, 255, 0));
        LEDCOOL->setOffColour(QColor(255, 255, 255));
        STATE = new QELabel(Filament_2);
        STATE->setObjectName(QStringLiteral("STATE"));
        STATE->setGeometry(QRect(100, 60, 61, 16));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        STATE->setFont(font1);
        FILSEL = new QEPushButton(Filament_2);
        FILSEL->setObjectName(QStringLiteral("FILSEL"));
        FILSEL->setGeometry(QRect(10, 50, 81, 23));
        FILSEL->setCheckable(true);
        FILON = new QEPushButton(Filament_2);
        FILON->setObjectName(QStringLiteral("FILON"));
        FILON->setGeometry(QRect(10, 30, 41, 21));
        FILON->setCheckable(false);
        FILON->setProperty("format", QVariant(QEPushButton::Integer));
        FILON->setWriteOnPress(false);
        FILON->setWriteOnRelease(false);
        FILON->setWriteOnClick(true);
        FILOFF = new QEPushButton(Filament_2);
        FILOFF->setObjectName(QStringLiteral("FILOFF"));
        FILOFF->setGeometry(QRect(50, 30, 41, 21));
        FILOFF->setCheckable(false);
        FILOFF->setProperty("format", QVariant(QEPushButton::Integer));
        FILOFF->setWriteOnPress(false);
        FILOFF->setWriteOnClick(true);
        RGAstat_2 = new QGroupBox(RgaStatus);
        RGAstat_2->setObjectName(QStringLiteral("RGAstat_2"));
        RGAstat_2->setGeometry(QRect(0, 130, 181, 61));
        IMG = new QEBitStatus(RGAstat_2);
        IMG->setObjectName(QStringLiteral("IMG"));
        IMG->setGeometry(QRect(20, 30, 31, 21));
        IMG->setNumberOfBits(1);
        IMG->setShape(QBitStatus::Circle);
        IMG->setInvalidColour(QColor(255, 0, 0));
        IMG->setOnColour(QColor(255, 0, 0));
        IMG->setOffColour(QColor(0, 255, 0));
        label_9 = new QLabel(RGAstat_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 10, 51, 21));
        label_9->setFont(font);
        label_26 = new QLabel(RGAstat_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(80, 10, 31, 21));
        label_26->setFont(font);
        RGASTAT = new QELabel(RGAstat_2);
        RGASTAT->setObjectName(QStringLiteral("RGASTAT"));
        RGASTAT->setGeometry(QRect(70, 30, 111, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        RGASTAT->setFont(font2);
        Mode_4 = new QGroupBox(RgaStatus);
        Mode_4->setObjectName(QStringLiteral("Mode_4"));
        Mode_4->setGeometry(QRect(300, 20, 271, 171));
        M1 = new QEPushButton(Mode_4);
        M1->setObjectName(QStringLiteral("M1"));
        M1->setGeometry(QRect(10, 100, 41, 20));
        M1->setProperty("format", QVariant(QEPushButton::Integer));
        M3 = new QEPushButton(Mode_4);
        M3->setObjectName(QStringLiteral("M3"));
        M3->setGeometry(QRect(10, 140, 41, 20));
        M3->setProperty("format", QVariant(QEPushButton::Integer));
        M2 = new QEPushButton(Mode_4);
        M2->setObjectName(QStringLiteral("M2"));
        M2->setGeometry(QRect(10, 120, 41, 20));
        M2->setProperty("format", QVariant(QEPushButton::Integer));
        FARA = new QEPushButton(Mode_4);
        FARA->setObjectName(QStringLiteral("FARA"));
        FARA->setGeometry(QRect(10, 60, 61, 21));
        FARA->setProperty("format", QVariant(QEPushButton::Integer));
        FMLED4 = new QESimpleShape(Mode_4);
        FMLED4->setObjectName(QStringLiteral("FMLED4"));
        FMLED4->setGeometry(QRect(90, 140, 16, 16));
        FMLED4->setShape(QSimpleShape::ellipse);
        FMLED4->setProperty("colour3", QVariant(QColor(0, 255, 0)));
        FMLED4->setProperty("colour7", QVariant(QColor(200, 200, 200)));
        FMLED4->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        FMLED1 = new QESimpleShape(Mode_4);
        FMLED1->setObjectName(QStringLiteral("FMLED1"));
        FMLED1->setGeometry(QRect(90, 60, 16, 16));
        FMLED1->setFocusPolicy(Qt::NoFocus);
        FMLED1->setContextMenuPolicy(Qt::CustomContextMenu);
        FMLED1->setShape(QSimpleShape::ellipse);
        FMLED1->setProperty("colour0", QVariant(QColor(0, 255, 0)));
        FMLED1->setProperty("colour1", QVariant(QColor(200, 200, 200)));
        FMLED1->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        FMLED3 = new QESimpleShape(Mode_4);
        FMLED3->setObjectName(QStringLiteral("FMLED3"));
        FMLED3->setGeometry(QRect(90, 120, 16, 16));
        FMLED3->setShape(QSimpleShape::ellipse);
        FMLED3->setProperty("colour2", QVariant(QColor(0, 255, 0)));
        FMLED3->setProperty("colour6", QVariant(QColor(200, 200, 200)));
        FMLED3->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        FMLED2 = new QESimpleShape(Mode_4);
        FMLED2->setObjectName(QStringLiteral("FMLED2"));
        FMLED2->setGeometry(QRect(90, 100, 16, 16));
        FMLED2->setShape(QSimpleShape::ellipse);
        FMLED2->setProperty("colour1", QVariant(QColor(0, 255, 0)));
        FMLED2->setProperty("colour3", QVariant(QColor(200, 200, 200)));
        FMLED2->setProperty("colour4", QVariant(QColor(200, 200, 200)));
        FMLED2->setProperty("colour5", QVariant(QColor(200, 200, 200)));
        FMLED2->setProperty("flash0", QVariant(false));
        FMLED2->setProperty("flash1", QVariant(false));
        FMLED2->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        label_15 = new QLabel(Mode_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(120, 10, 61, 21));
        QFont font3;
        font3.setPointSize(8);
        label_15->setFont(font3);
        label_16 = new QLabel(Mode_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(110, 30, 101, 21));
        label_16->setFont(font3);
        label_16->setScaledContents(false);
        label_17 = new QLabel(Mode_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(210, 30, 61, 21));
        label_17->setFont(font3);
        FDFACT = new QELabel(Mode_4);
        FDFACT->setObjectName(QStringLiteral("FDFACT"));
        FDFACT->setGeometry(QRect(110, 60, 91, 16));
        FDFACT->setFont(font1);
        FDFACT->setScaledContents(false);
        FDFACT->setWordWrap(false);
        FDFACT->setPrecision(6);
        FDFACT->setUseDbPrecision(false);
        FDFACT->setLeadingZero(true);
        FDFACT->setTrailingZeros(false);
        FDFACT->setAddUnits(true);
        FDVOLT = new QELabel(Mode_4);
        FDVOLT->setObjectName(QStringLiteral("FDVOLT"));
        FDVOLT->setGeometry(QRect(210, 60, 61, 16));
        FDVOLT->setFont(font1);
        MU1DFACT = new QELabel(Mode_4);
        MU1DFACT->setObjectName(QStringLiteral("MU1DFACT"));
        MU1DFACT->setGeometry(QRect(110, 100, 91, 16));
        MU1DFACT->setFont(font1);
        MU1DVOLT = new QELabel(Mode_4);
        MU1DVOLT->setObjectName(QStringLiteral("MU1DVOLT"));
        MU1DVOLT->setGeometry(QRect(210, 100, 61, 16));
        MU1DVOLT->setFont(font1);
        MU2DFACT = new QELabel(Mode_4);
        MU2DFACT->setObjectName(QStringLiteral("MU2DFACT"));
        MU2DFACT->setGeometry(QRect(110, 120, 91, 16));
        MU2DFACT->setFont(font1);
        MU2DVOLT = new QELabel(Mode_4);
        MU2DVOLT->setObjectName(QStringLiteral("MU2DVOLT"));
        MU2DVOLT->setGeometry(QRect(210, 120, 61, 16));
        MU2DVOLT->setFont(font1);
        MU3DFACT = new QELabel(Mode_4);
        MU3DFACT->setObjectName(QStringLiteral("MU3DFACT"));
        MU3DFACT->setGeometry(QRect(110, 140, 91, 16));
        MU3DFACT->setFont(font1);
        MU3DVOLT = new QELabel(Mode_4);
        MU3DVOLT->setObjectName(QStringLiteral("MU3DVOLT"));
        MU3DVOLT->setGeometry(QRect(210, 140, 61, 16));
        MU3DVOLT->setFont(font1);
        Mode_5 = new QGroupBox(RgaStatus);
        Mode_5->setObjectName(QStringLiteral("Mode_5"));
        Mode_5->setGeometry(QRect(180, 20, 121, 171));
        label_10 = new QLabel(Mode_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 40, 47, 13));
        ANA = new QEPushButton(Mode_5);
        ANA->setObjectName(QStringLiteral("ANA"));
        ANA->setGeometry(QRect(60, 60, 41, 20));
        M50 = new QEPushButton(Mode_5);
        M50->setObjectName(QStringLiteral("M50"));
        M50->setGeometry(QRect(10, 60, 41, 20));
        M200 = new QEPushButton(Mode_5);
        M200->setObjectName(QStringLiteral("M200"));
        M200->setGeometry(QRect(10, 100, 41, 20));
        label_11 = new QLabel(Mode_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 40, 41, 16));
        M100 = new QEPushButton(Mode_5);
        M100->setObjectName(QStringLiteral("M100"));
        M100->setGeometry(QRect(10, 80, 41, 20));
        STOP = new QEPushButton(Mode_5);
        STOP->setObjectName(QStringLiteral("STOP"));
        STOP->setGeometry(QRect(10, 20, 41, 21));
        LEDSS = new QESimpleShape(Mode_5);
        LEDSS->setObjectName(QStringLiteral("LEDSS"));
        LEDSS->setGeometry(QRect(90, 120, 16, 16));
        LEDSS->setShape(QSimpleShape::ellipse);
        LEDSS->setProperty("colour0", QVariant(QColor(0, 255, 0)));
        LEDSS->setProperty("colour1", QVariant(QColor(200, 200, 200)));
        LEDSS->setProperty("flash0", QVariant(false));
        LEDSS->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        SS_ON = new QEPushButton(Mode_5);
        SS_ON->setObjectName(QStringLiteral("SS_ON"));
        SS_ON->setGeometry(QRect(10, 120, 41, 16));
        SS_ON->setFont(font);
        SS_ON->setCheckable(false);
        SS_ON->setProperty("format", QVariant(QEPushButton::Integer));
        SS_ON->setWriteOnPress(false);
        SS_ON->setWriteOnRelease(false);
        SS_ON->setWriteOnClick(true);
        SS_OFF = new QEPushButton(Mode_5);
        SS_OFF->setObjectName(QStringLiteral("SS_OFF"));
        SS_OFF->setGeometry(QRect(50, 120, 31, 16));
        SS_OFF->setFont(font);
        SS_OFF->setCheckable(false);
        SS_OFF->setProperty("format", QVariant(QEPushButton::Integer));
        SS_OFF->setWriteOnPress(false);
        SS_OFF->setWriteOnClick(true);
        label_12 = new QLabel(Mode_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(80, 100, 31, 21));
        label_12->setFont(font);
        label_12->setWordWrap(true);

        retranslateUi(RgaStatus);

        QMetaObject::connectSlotsByName(RgaStatus);
    } // setupUi

    void retranslateUi(QGroupBox *RgaStatus)
    {
        RgaStatus->setWindowTitle(QApplication::translate("RgaStatus", "GroupBox", 0));
        RgaStatus->setTitle(QApplication::translate("RgaStatus", "RgaStatus", 0));
        Filament_2->setTitle(QApplication::translate("RgaStatus", "Filament Status", 0));
        LEDFAIL->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FILSTA", 0)));
        label_6->setText(QApplication::translate("RgaStatus", "Fail", 0));
        LEDFIL->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FILSTA", 0)));
        label_3->setText(QApplication::translate("RgaStatus", "Cool/Warm", 0));
        LEDCOOL->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FILSTA", 0)));
        STATE->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FIL", 0)));
        FILSEL->setText(QApplication::translate("RgaStatus", "Filament select", 0));
        FILSEL->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):SETFIL", 0)));
        FILSEL->setProperty("altReadbackVariable", QVariant(QString()));
        FILSEL->setPressText(QApplication::translate("RgaStatus", "1", 0));
        FILON->setText(QApplication::translate("RgaStatus", "On", 0));
        FILON->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FILCON", 0)));
        FILON->setProperty("altReadbackVariable", QVariant(QString()));
        FILON->setPressText(QApplication::translate("RgaStatus", "1", 0));
        FILON->setReleaseText(QApplication::translate("RgaStatus", "0", 0));
        FILON->setClickText(QApplication::translate("RgaStatus", "1", 0));
        FILON->setClickCheckedText(QApplication::translate("RgaStatus", "1", 0));
        FILOFF->setText(QApplication::translate("RgaStatus", "Off", 0));
        FILOFF->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FILCON", 0)));
        FILOFF->setProperty("altReadbackVariable", QVariant(QString()));
        FILOFF->setPressText(QApplication::translate("RgaStatus", "Off", 0));
        FILOFF->setClickText(QApplication::translate("RgaStatus", "0", 0));
        FILOFF->setClickCheckedText(QApplication::translate("RgaStatus", "Off", 0));
        RGAstat_2->setTitle(QApplication::translate("RgaStatus", "RGA Status", 0));
        IMG->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):ILK", 0)));
        label_9->setText(QApplication::translate("RgaStatus", "IMG Interlock", 0));
        label_26->setText(QApplication::translate("RgaStatus", "Control", 0));
        RGASTAT->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):HEADSTA", 0)));
        RGASTAT->setText(QApplication::translate("RgaStatus", "Analog 1-200", 0));
        Mode_4->setTitle(QApplication::translate("RgaStatus", "Faraday/Mult: status and calibration", 0));
        M1->setText(QApplication::translate("RgaStatus", "M1", 0));
        M1->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):MLTCON", 0)));
        M1->setProperty("altReadbackVariable", QVariant(QString()));
        M1->setProperty("variableSubstitutions", QVariant(QString()));
        M1->setClickText(QApplication::translate("RgaStatus", "1", 0));
        M1->setClickCheckedText(QApplication::translate("RgaStatus", "1", 0));
        M3->setText(QApplication::translate("RgaStatus", "M3", 0));
        M3->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):MLTCON", 0)));
        M3->setProperty("altReadbackVariable", QVariant(QString()));
        M3->setProperty("variableSubstitutions", QVariant(QString()));
        M3->setClickText(QApplication::translate("RgaStatus", "3", 0));
        M3->setClickCheckedText(QApplication::translate("RgaStatus", "3", 0));
        M2->setText(QApplication::translate("RgaStatus", "M2", 0));
        M2->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):MLTCON", 0)));
        M2->setProperty("altReadbackVariable", QVariant(QString()));
        M2->setProperty("variableSubstitutions", QVariant(QString()));
        M2->setClickText(QApplication::translate("RgaStatus", "2", 0));
        M2->setClickCheckedText(QApplication::translate("RgaStatus", "2", 0));
        FARA->setText(QApplication::translate("RgaStatus", "Faraday", 0));
        FARA->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):MLTCON", 0)));
        FARA->setProperty("altReadbackVariable", QVariant(QString()));
        FARA->setProperty("variableSubstitutions", QVariant(QString()));
        FARA->setClickText(QApplication::translate("RgaStatus", "0", 0));
        FARA->setClickCheckedText(QApplication::translate("RgaStatus", "0", 0));
        FMLED4->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):MLTSTA", 0)));
        FMLED1->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):MLTSTA", 0)));
        FMLED1->setProperty("variableSubstitutions", QVariant(QString()));
        FMLED3->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):MLTSTA", 0)));
        FMLED2->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):MLTSTA", 0)));
        label_15->setText(QApplication::translate("RgaStatus", "Calibration", 0));
        label_16->setText(QApplication::translate("RgaStatus", "Sensitivity: A/mBar", 0));
        label_17->setText(QApplication::translate("RgaStatus", " Voltage", 0));
        FDFACT->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "rga1:FDFACT", 0)));
        FDVOLT->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FIL", 0)));
        MU1DFACT->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FIL", 0)));
        MU1DVOLT->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FIL", 0)));
        MU2DFACT->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FIL", 0)));
        MU2DVOLT->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FIL", 0)));
        MU3DFACT->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FIL", 0)));
        MU3DVOLT->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):FIL", 0)));
        Mode_5->setTitle(QApplication::translate("RgaStatus", "Mode", 0));
        label_10->setText(QApplication::translate("RgaStatus", "Bar Chart", 0));
        ANA->setText(QApplication::translate("RgaStatus", "1-200", 0));
        ANA->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):CON", 0)));
        ANA->setProperty("altReadbackVariable", QVariant(QString()));
        ANA->setProperty("variableSubstitutions", QVariant(QString()));
        ANA->setClickText(QApplication::translate("RgaStatus", "8", 0));
        ANA->setClickCheckedText(QString());
        M50->setText(QApplication::translate("RgaStatus", "1-50", 0));
        M50->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):CON", 0)));
        M50->setProperty("altReadbackVariable", QVariant(QString()));
        M50->setProperty("variableSubstitutions", QVariant(QString()));
        M50->setClickText(QApplication::translate("RgaStatus", "5", 0));
        M50->setClickCheckedText(QString());
        M200->setText(QApplication::translate("RgaStatus", "1-200", 0));
        M200->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):CON", 0)));
        M200->setProperty("altReadbackVariable", QVariant(QString()));
        M200->setProperty("variableSubstitutions", QVariant(QString()));
        M200->setClickText(QApplication::translate("RgaStatus", "7", 0));
        M200->setClickCheckedText(QString());
        label_11->setText(QApplication::translate("RgaStatus", "Ana", 0));
        M100->setText(QApplication::translate("RgaStatus", "1-100", 0));
        M100->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):CON", 0)));
        M100->setProperty("altReadbackVariable", QVariant(QString()));
        M100->setProperty("variableSubstitutions", QVariant(QString()));
        M100->setClickText(QApplication::translate("RgaStatus", "6", 0));
        M100->setClickCheckedText(QString());
        STOP->setText(QApplication::translate("RgaStatus", "Stop", 0));
        STOP->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):CON", 0)));
        STOP->setProperty("altReadbackVariable", QVariant(QString()));
        STOP->setProperty("variableSubstitutions", QVariant(QString()));
        STOP->setClickText(QApplication::translate("RgaStatus", "Stop", 0));
        STOP->setClickCheckedText(QString());
        LEDSS->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):SCAN", 0)));
        SS_ON->setText(QApplication::translate("RgaStatus", "On", 0));
        SS_ON->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):SETSCAN", 0)));
        SS_ON->setProperty("altReadbackVariable", QVariant(QString()));
        SS_ON->setPressText(QApplication::translate("RgaStatus", "1", 0));
        SS_ON->setReleaseText(QApplication::translate("RgaStatus", "0", 0));
        SS_ON->setClickText(QApplication::translate("RgaStatus", "0", 0));
        SS_ON->setClickCheckedText(QApplication::translate("RgaStatus", "1", 0));
        SS_OFF->setText(QApplication::translate("RgaStatus", "Off", 0));
        SS_OFF->setProperty("variable", QVariant(QApplication::translate("RgaStatus", "$(RGA1):SETSCAN", 0)));
        SS_OFF->setProperty("altReadbackVariable", QVariant(QString()));
        SS_OFF->setPressText(QApplication::translate("RgaStatus", "Off", 0));
        SS_OFF->setClickText(QApplication::translate("RgaStatus", "1", 0));
        SS_OFF->setClickCheckedText(QApplication::translate("RgaStatus", "Off", 0));
        label_12->setText(QApplication::translate("RgaStatus", "Single S.", 0));
    } // retranslateUi

};

namespace Ui {
    class RgaStatus: public Ui_RgaStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV2_WIDGET_STATUS_H
