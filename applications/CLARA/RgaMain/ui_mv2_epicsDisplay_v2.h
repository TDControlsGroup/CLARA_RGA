/********************************************************************************
** Form generated from reading UI file 'mv2_epicsDisplay_v2.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MV2_EPICSDISPLAY_V2_H
#define UI_MV2_EPICSDISPLAY_V2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "QEAnalogIndicator.h"
#include "QEAnalogProgressBar.h"
#include "QELabel.h"
#include "QELineEdit.h"
#include "QEPushButton.h"
#include "RgaLed.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *scan;
    QGroupBox *Mode;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QFrame *line;
    QLabel *label_13;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    RgaLed *box_1;
    QGroupBox *scan_2;
    QEPushButton *archStop;
    QLabel *label_7;
    QELineEdit *archDT;
    QEPushButton *archStart;
    QEPushButton *resetTO;
    QLabel *label_9;
    RgaLed *box_2;
    RgaLed *box_3;
    RgaLed *box_4;
    RgaLed *box_5;
    RgaLed *box_6;
    QGroupBox *percentBox;
    QEAnalogProgressBar *per1;
    QEAnalogProgressBar *per2;
    QEAnalogProgressBar *per3;
    QEAnalogProgressBar *per4;
    QEAnalogProgressBar *per5;
    QEAnalogProgressBar *per6;
    QGroupBox *IdSerial;
    QLabel *name1_4;
    QLabel *name1_5;
    QELabel *id_1;
    QELabel *id_2;
    QELabel *id_3;
    QELabel *id_4;
    QELabel *id_5;
    QELabel *id_6;
    QELabel *sn_1;
    QELabel *sn_4;
    QELabel *sn_6;
    QELabel *sn_5;
    QELabel *sn_2;
    QELabel *sn_3;
    QEPushButton *summary5;
    QEPushButton *summary1;
    QEPushButton *summary3;
    QEPushButton *barstrip6;
    QEPushButton *barstrip2;
    QEPushButton *barstrip4;
    QEPushButton *summary4;
    QEPushButton *summary6;
    QEPushButton *barstrip3;
    QEPushButton *barstrip5;
    QEPushButton *barscan;
    QEPushButton *anascan;
    QEPushButton *barstrip1;
    QEPushButton *summary2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QStringLiteral("mainWindow"));
        mainWindow->resize(719, 737);
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        scan = new QGroupBox(centralwidget);
        scan->setObjectName(QStringLiteral("scan"));
        scan->setGeometry(QRect(10, 180, 701, 401));
        Mode = new QGroupBox(scan);
        Mode->setObjectName(QStringLiteral("Mode"));
        Mode->setGeometry(QRect(10, 20, 81, 371));
        label_3 = new QLabel(Mode);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 40, 47, 13));
        label_6 = new QLabel(Mode);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 120, 61, 16));
        label_4 = new QLabel(Mode);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 47, 13));
        label_5 = new QLabel(Mode);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 80, 47, 13));
        label_8 = new QLabel(Mode);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 100, 47, 13));
        label_10 = new QLabel(Mode);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 140, 47, 13));
        label_11 = new QLabel(Mode);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 170, 61, 16));
        label_12 = new QLabel(Mode);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 20, 47, 13));
        line = new QFrame(Mode);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 200, 71, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(Mode);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 220, 61, 16));
        label_18 = new QLabel(Mode);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 250, 41, 16));
        label_19 = new QLabel(Mode);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 290, 51, 20));
        label_20 = new QLabel(Mode);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 320, 51, 20));
        label_21 = new QLabel(Mode);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 340, 51, 20));
        box_1 = new RgaLed(scan);
        box_1->setObjectName(QStringLiteral("box_1"));
        box_1->setGeometry(QRect(100, 20, 71, 371));
        scan_2 = new QGroupBox(scan);
        scan_2->setObjectName(QStringLiteral("scan_2"));
        scan_2->setGeometry(QRect(530, 260, 161, 131));
        archStop = new QEPushButton(scan_2);
        archStop->setObjectName(QStringLiteral("archStop"));
        archStop->setGeometry(QRect(10, 50, 81, 20));
        label_7 = new QLabel(scan_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 70, 101, 16));
        archDT = new QELineEdit(scan_2);
        archDT->setObjectName(QStringLiteral("archDT"));
        archDT->setGeometry(QRect(10, 90, 141, 20));
        archDT->setProperty("format", QVariant(QELineEdit::Default));
        archStart = new QEPushButton(scan_2);
        archStart->setObjectName(QStringLiteral("archStart"));
        archStart->setGeometry(QRect(10, 20, 81, 31));
        resetTO = new QEPushButton(scan_2);
        resetTO->setObjectName(QStringLiteral("resetTO"));
        resetTO->setGeometry(QRect(100, 30, 41, 21));
        label_9 = new QLabel(scan_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 10, 51, 16));
        box_2 = new RgaLed(scan);
        box_2->setObjectName(QStringLiteral("box_2"));
        box_2->setGeometry(QRect(170, 20, 71, 371));
        box_3 = new RgaLed(scan);
        box_3->setObjectName(QStringLiteral("box_3"));
        box_3->setGeometry(QRect(240, 20, 71, 371));
        box_4 = new RgaLed(scan);
        box_4->setObjectName(QStringLiteral("box_4"));
        box_4->setGeometry(QRect(310, 20, 71, 371));
        box_5 = new RgaLed(scan);
        box_5->setObjectName(QStringLiteral("box_5"));
        box_5->setGeometry(QRect(380, 20, 71, 371));
        box_6 = new RgaLed(scan);
        box_6->setObjectName(QStringLiteral("box_6"));
        box_6->setGeometry(QRect(450, 20, 71, 371));
        percentBox = new QGroupBox(centralwidget);
        percentBox->setObjectName(QStringLiteral("percentBox"));
        percentBox->setGeometry(QRect(540, 230, 161, 211));
        per1 = new QEAnalogProgressBar(percentBox);
        per1->setObjectName(QStringLiteral("per1"));
        per1->setGeometry(QRect(20, 20, 16, 171));
        per1->setOrientation(QEAnalogIndicator::Bottom_To_Top);
        per2 = new QEAnalogProgressBar(percentBox);
        per2->setObjectName(QStringLiteral("per2"));
        per2->setGeometry(QRect(40, 20, 16, 171));
        per2->setOrientation(QEAnalogIndicator::Bottom_To_Top);
        per3 = new QEAnalogProgressBar(percentBox);
        per3->setObjectName(QStringLiteral("per3"));
        per3->setGeometry(QRect(60, 20, 16, 171));
        per3->setOrientation(QEAnalogIndicator::Bottom_To_Top);
        per4 = new QEAnalogProgressBar(percentBox);
        per4->setObjectName(QStringLiteral("per4"));
        per4->setGeometry(QRect(80, 20, 16, 171));
        per4->setOrientation(QEAnalogIndicator::Bottom_To_Top);
        per5 = new QEAnalogProgressBar(percentBox);
        per5->setObjectName(QStringLiteral("per5"));
        per5->setGeometry(QRect(100, 20, 16, 171));
        per5->setOrientation(QEAnalogIndicator::Bottom_To_Top);
        per6 = new QEAnalogProgressBar(percentBox);
        per6->setObjectName(QStringLiteral("per6"));
        per6->setGeometry(QRect(120, 20, 16, 171));
        per6->setOrientation(QEAnalogIndicator::Bottom_To_Top);
        per2->raise();
        per3->raise();
        per4->raise();
        per5->raise();
        per1->raise();
        per6->raise();
        IdSerial = new QGroupBox(centralwidget);
        IdSerial->setObjectName(QStringLiteral("IdSerial"));
        IdSerial->setGeometry(QRect(20, 10, 691, 171));
        name1_4 = new QLabel(IdSerial);
        name1_4->setObjectName(QStringLiteral("name1_4"));
        name1_4->setGeometry(QRect(20, 10, 91, 21));
        name1_5 = new QLabel(IdSerial);
        name1_5->setObjectName(QStringLiteral("name1_5"));
        name1_5->setGeometry(QRect(160, 10, 91, 21));
        id_1 = new QELabel(IdSerial);
        id_1->setObjectName(QStringLiteral("id_1"));
        id_1->setGeometry(QRect(20, 40, 111, 16));
        id_2 = new QELabel(IdSerial);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(20, 60, 111, 16));
        id_3 = new QELabel(IdSerial);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(20, 80, 111, 16));
        id_4 = new QELabel(IdSerial);
        id_4->setObjectName(QStringLiteral("id_4"));
        id_4->setGeometry(QRect(20, 100, 111, 16));
        id_5 = new QELabel(IdSerial);
        id_5->setObjectName(QStringLiteral("id_5"));
        id_5->setGeometry(QRect(20, 120, 111, 16));
        id_6 = new QELabel(IdSerial);
        id_6->setObjectName(QStringLiteral("id_6"));
        id_6->setGeometry(QRect(20, 140, 111, 16));
        sn_1 = new QELabel(IdSerial);
        sn_1->setObjectName(QStringLiteral("sn_1"));
        sn_1->setGeometry(QRect(160, 40, 100, 16));
        sn_4 = new QELabel(IdSerial);
        sn_4->setObjectName(QStringLiteral("sn_4"));
        sn_4->setGeometry(QRect(160, 100, 100, 16));
        sn_6 = new QELabel(IdSerial);
        sn_6->setObjectName(QStringLiteral("sn_6"));
        sn_6->setGeometry(QRect(160, 140, 100, 16));
        sn_5 = new QELabel(IdSerial);
        sn_5->setObjectName(QStringLiteral("sn_5"));
        sn_5->setGeometry(QRect(160, 120, 100, 16));
        sn_2 = new QELabel(IdSerial);
        sn_2->setObjectName(QStringLiteral("sn_2"));
        sn_2->setGeometry(QRect(160, 60, 100, 16));
        sn_3 = new QELabel(IdSerial);
        sn_3->setObjectName(QStringLiteral("sn_3"));
        sn_3->setGeometry(QRect(160, 80, 100, 16));
        summary5 = new QEPushButton(IdSerial);
        summary5->setObjectName(QStringLiteral("summary5"));
        summary5->setGeometry(QRect(280, 120, 61, 20));
        summary5->setCheckable(false);
        summary1 = new QEPushButton(IdSerial);
        summary1->setObjectName(QStringLiteral("summary1"));
        summary1->setGeometry(QRect(280, 40, 61, 20));
        summary1->setCheckable(false);
        summary3 = new QEPushButton(IdSerial);
        summary3->setObjectName(QStringLiteral("summary3"));
        summary3->setGeometry(QRect(280, 80, 61, 20));
        summary3->setCheckable(false);
        barstrip6 = new QEPushButton(IdSerial);
        barstrip6->setObjectName(QStringLiteral("barstrip6"));
        barstrip6->setGeometry(QRect(350, 140, 61, 20));
        barstrip6->setCheckable(false);
        barstrip2 = new QEPushButton(IdSerial);
        barstrip2->setObjectName(QStringLiteral("barstrip2"));
        barstrip2->setGeometry(QRect(350, 60, 61, 20));
        barstrip2->setCheckable(false);
        barstrip4 = new QEPushButton(IdSerial);
        barstrip4->setObjectName(QStringLiteral("barstrip4"));
        barstrip4->setGeometry(QRect(350, 100, 61, 20));
        barstrip4->setCheckable(false);
        summary4 = new QEPushButton(IdSerial);
        summary4->setObjectName(QStringLiteral("summary4"));
        summary4->setGeometry(QRect(280, 100, 61, 20));
        summary4->setCheckable(false);
        summary6 = new QEPushButton(IdSerial);
        summary6->setObjectName(QStringLiteral("summary6"));
        summary6->setGeometry(QRect(280, 140, 61, 20));
        summary6->setCheckable(false);
        barstrip3 = new QEPushButton(IdSerial);
        barstrip3->setObjectName(QStringLiteral("barstrip3"));
        barstrip3->setGeometry(QRect(350, 80, 61, 20));
        barstrip3->setCheckable(false);
        barstrip5 = new QEPushButton(IdSerial);
        barstrip5->setObjectName(QStringLiteral("barstrip5"));
        barstrip5->setGeometry(QRect(350, 120, 61, 20));
        barstrip5->setCheckable(false);
        barscan = new QEPushButton(IdSerial);
        barscan->setObjectName(QStringLiteral("barscan"));
        barscan->setGeometry(QRect(430, 40, 121, 20));
        barscan->setCheckable(false);
        anascan = new QEPushButton(IdSerial);
        anascan->setObjectName(QStringLiteral("anascan"));
        anascan->setGeometry(QRect(430, 60, 121, 21));
        anascan->setCheckable(false);
        barstrip1 = new QEPushButton(IdSerial);
        barstrip1->setObjectName(QStringLiteral("barstrip1"));
        barstrip1->setGeometry(QRect(350, 40, 61, 20));
        barstrip1->setCheckable(false);
        summary2 = new QEPushButton(IdSerial);
        summary2->setObjectName(QStringLiteral("summary2"));
        summary2->setGeometry(QRect(280, 60, 61, 20));
        summary2->setCheckable(false);
        mainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 719, 21));
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        mainWindow->setStatusBar(statusbar);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "MainWindow", 0));
        scan->setTitle(QApplication::translate("mainWindow", "Scan", 0));
        Mode->setTitle(QApplication::translate("mainWindow", "Set All:", 0));
        label_3->setText(QApplication::translate("mainWindow", "Bar Chart", 0));
        label_6->setText(QApplication::translate("mainWindow", "Analog Scan", 0));
        label_4->setText(QApplication::translate("mainWindow", "1-50", 0));
        label_5->setText(QApplication::translate("mainWindow", "1-100", 0));
        label_8->setText(QApplication::translate("mainWindow", "1-200", 0));
        label_10->setText(QApplication::translate("mainWindow", "1-200", 0));
        label_11->setText(QApplication::translate("mainWindow", "Single Scan", 0));
        label_12->setText(QApplication::translate("mainWindow", "STOP", 0));
        label_13->setText(QApplication::translate("mainWindow", "Archive On", 0));
        label_18->setText(QApplication::translate("mainWindow", "Mode", 0));
        label_19->setText(QApplication::translate("mainWindow", "Tiimouts", 0));
        label_20->setText(QApplication::translate("mainWindow", "Next ANA", 0));
        label_21->setText(QApplication::translate("mainWindow", "seconds", 0));
        box_1->setTitle(QApplication::translate("mainWindow", "RGA", 0));
        scan_2->setTitle(QApplication::translate("mainWindow", "Archiver", 0));
        archStop->setText(QApplication::translate("mainWindow", "Stop", 0));
        archStop->setProperty("variable", QVariant(QApplication::translate("mainWindow", "$(GRGA):ARCH", 0)));
        archStop->setProperty("altReadbackVariable", QVariant(QString()));
        archStop->setProperty("variableSubstitutions", QVariant(QString()));
        archStop->setClickText(QApplication::translate("mainWindow", "0", 0));
        archStop->setClickCheckedText(QString());
        label_7->setText(QApplication::translate("mainWindow", "Archiver start time", 0));
        archStart->setText(QApplication::translate("mainWindow", "Start", 0));
        archStart->setProperty("variable", QVariant(QApplication::translate("mainWindow", "$(GRGA):ARCH", 0)));
        archStart->setProperty("altReadbackVariable", QVariant(QString()));
        archStart->setProperty("variableSubstitutions", QVariant(QString()));
        archStart->setClickText(QApplication::translate("mainWindow", "1", 0));
        archStart->setClickCheckedText(QString());
        resetTO->setText(QApplication::translate("mainWindow", "Rst", 0));
        resetTO->setProperty("variable", QVariant(QApplication::translate("mainWindow", "$(GRGA):ARCH", 0)));
        resetTO->setProperty("altReadbackVariable", QVariant(QString()));
        resetTO->setProperty("variableSubstitutions", QVariant(QString()));
        resetTO->setClickText(QApplication::translate("mainWindow", "1", 0));
        resetTO->setClickCheckedText(QString());
        label_9->setText(QApplication::translate("mainWindow", "Timeout:", 0));
        box_2->setTitle(QApplication::translate("mainWindow", "RGA", 0));
        box_3->setTitle(QApplication::translate("mainWindow", "RGA", 0));
        box_4->setTitle(QApplication::translate("mainWindow", "RGA", 0));
        box_5->setTitle(QApplication::translate("mainWindow", "RGA", 0));
        box_6->setTitle(QApplication::translate("mainWindow", "RGA", 0));
        percentBox->setTitle(QApplication::translate("mainWindow", "Percent Scanned: 1-6", 0));
        per1->setProperty("variable", QVariant(QApplication::translate("mainWindow", "$(RGA1):PERSCANNED", 0)));
        per2->setProperty("variable", QVariant(QApplication::translate("mainWindow", "$(RGA2):PERSCANNED", 0)));
        per3->setProperty("variable", QVariant(QApplication::translate("mainWindow", "$(RGA3):PERSCANNED", 0)));
        per4->setProperty("variable", QVariant(QApplication::translate("mainWindow", "$(RGA4):PERSCANNED", 0)));
        per5->setProperty("variable", QVariant(QApplication::translate("mainWindow", "$(RGA5):PERSCANNED", 0)));
        per6->setProperty("variable", QVariant(QApplication::translate("mainWindow", "$(RGA6):PERSCANNED", 0)));
        IdSerial->setTitle(QApplication::translate("mainWindow", "Device information and plots", 0));
        name1_4->setText(QApplication::translate("mainWindow", "Device name:", 0));
        name1_5->setText(QApplication::translate("mainWindow", "Serial number:", 0));
        id_1->setProperty("variable", QVariant(QApplication::translate("mainWindow", "$(MYTEST)", 0)));
        summary5->setText(QApplication::translate("mainWindow", "summary", 0));
        summary5->setProperty("variable", QVariant(QString()));
        summary5->setProperty("altReadbackVariable", QVariant(QString()));
        summary5->setProperty("variableSubstitutions", QVariant(QString()));
        summary5->setPressText(QApplication::translate("mainWindow", "1", 0));
        summary5->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        summary1->setText(QApplication::translate("mainWindow", "summary", 0));
        summary1->setProperty("variable", QVariant(QString()));
        summary1->setProperty("altReadbackVariable", QVariant(QString()));
        summary1->setProperty("variableSubstitutions", QVariant(QString()));
        summary1->setPressText(QApplication::translate("mainWindow", "1", 0));
        summary1->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        summary3->setText(QApplication::translate("mainWindow", "summary", 0));
        summary3->setProperty("variable", QVariant(QString()));
        summary3->setProperty("altReadbackVariable", QVariant(QString()));
        summary3->setProperty("variableSubstitutions", QVariant(QString()));
        summary3->setPressText(QApplication::translate("mainWindow", "1", 0));
        summary3->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        barstrip6->setText(QApplication::translate("mainWindow", "Strip chart", 0));
        barstrip6->setProperty("variable", QVariant(QString()));
        barstrip6->setProperty("altReadbackVariable", QVariant(QString()));
        barstrip6->setProperty("variableSubstitutions", QVariant(QString()));
        barstrip6->setPressText(QApplication::translate("mainWindow", "1", 0));
        barstrip6->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        barstrip2->setText(QApplication::translate("mainWindow", "Strip chart", 0));
        barstrip2->setProperty("variable", QVariant(QString()));
        barstrip2->setProperty("altReadbackVariable", QVariant(QString()));
        barstrip2->setProperty("variableSubstitutions", QVariant(QString()));
        barstrip2->setPressText(QApplication::translate("mainWindow", "1", 0));
        barstrip2->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        barstrip4->setText(QApplication::translate("mainWindow", "Strip chart", 0));
        barstrip4->setProperty("variable", QVariant(QString()));
        barstrip4->setProperty("altReadbackVariable", QVariant(QString()));
        barstrip4->setProperty("variableSubstitutions", QVariant(QString()));
        barstrip4->setPressText(QApplication::translate("mainWindow", "1", 0));
        barstrip4->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        summary4->setText(QApplication::translate("mainWindow", "summary", 0));
        summary4->setProperty("variable", QVariant(QString()));
        summary4->setProperty("altReadbackVariable", QVariant(QString()));
        summary4->setProperty("variableSubstitutions", QVariant(QString()));
        summary4->setPressText(QApplication::translate("mainWindow", "1", 0));
        summary4->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        summary6->setText(QApplication::translate("mainWindow", "summary", 0));
        summary6->setProperty("variable", QVariant(QString()));
        summary6->setProperty("altReadbackVariable", QVariant(QString()));
        summary6->setProperty("variableSubstitutions", QVariant(QString()));
        summary6->setPressText(QApplication::translate("mainWindow", "1", 0));
        summary6->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        barstrip3->setText(QApplication::translate("mainWindow", "Strip chart", 0));
        barstrip3->setProperty("variable", QVariant(QString()));
        barstrip3->setProperty("altReadbackVariable", QVariant(QString()));
        barstrip3->setProperty("variableSubstitutions", QVariant(QString()));
        barstrip3->setPressText(QApplication::translate("mainWindow", "1", 0));
        barstrip3->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        barstrip5->setText(QApplication::translate("mainWindow", "Strip chart", 0));
        barstrip5->setProperty("variable", QVariant(QString()));
        barstrip5->setProperty("altReadbackVariable", QVariant(QString()));
        barstrip5->setProperty("variableSubstitutions", QVariant(QString()));
        barstrip5->setPressText(QApplication::translate("mainWindow", "1", 0));
        barstrip5->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        barscan->setText(QApplication::translate("mainWindow", "All RGA Bar Chart", 0));
        barscan->setProperty("variable", QVariant(QString()));
        barscan->setProperty("altReadbackVariable", QVariant(QString()));
        barscan->setPressText(QApplication::translate("mainWindow", "1", 0));
        barscan->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "barchart.ui", 0)));
        anascan->setText(QApplication::translate("mainWindow", "All RGA Analog Scan", 0));
        anascan->setProperty("variable", QVariant(QString()));
        anascan->setProperty("altReadbackVariable", QVariant(QString()));
        anascan->setPressText(QApplication::translate("mainWindow", "1", 0));
        anascan->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "barchart_ana.ui", 0)));
        barstrip1->setText(QApplication::translate("mainWindow", "Strip chart", 0));
        barstrip1->setProperty("variable", QVariant(QString()));
        barstrip1->setProperty("altReadbackVariable", QVariant(QString()));
        barstrip1->setProperty("variableSubstitutions", QVariant(QString()));
        barstrip1->setPressText(QApplication::translate("mainWindow", "1", 0));
        barstrip1->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
        summary2->setText(QApplication::translate("mainWindow", "summary", 0));
        summary2->setProperty("variable", QVariant(QString()));
        summary2->setProperty("altReadbackVariable", QVariant(QString()));
        summary2->setProperty("variableSubstitutions", QVariant(QString()));
        summary2->setPressText(QApplication::translate("mainWindow", "1", 0));
        summary2->setProperty("guiFile", QVariant(QApplication::translate("mainWindow", "mv2_main_bar.ui", 0)));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV2_EPICSDISPLAY_V2_H
