/********************************************************************************
** Form generated from reading UI file 'mv2_main_bar.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MV2_MAIN_BAR_H
#define UI_MV2_MAIN_BAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QEAnalogIndicator.h"
#include "QEAnalogProgressBar.h"
#include "QELabel.h"

QT_BEGIN_NAMESPACE

class Ui_mainBar
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_14;
    QELabel *name_01;
    QELabel *name_02;
    QELabel *name_03;
    QELabel *name_04;
    QELabel *name_05;
    QELabel *name_06;
    QELabel *name_07;
    QELabel *name_08;
    QELabel *name_09;
    QELabel *name_10;
    QELabel *name_11;
    QELabel *name_12;
    QELabel *name_13;
    QELabel *name_14;
    QVBoxLayout *verticalLayout_15;
    QELabel *pres_01;
    QELabel *pres_02;
    QELabel *pres_03;
    QELabel *pres_04;
    QELabel *pres_05;
    QELabel *pres_06;
    QELabel *pres_07;
    QELabel *pres_08;
    QELabel *pres_09;
    QELabel *pres_10;
    QELabel *pres_11;
    QELabel *pres_12;
    QELabel *pres_13;
    QELabel *pres_14;
    QVBoxLayout *verticalLayout_16;
    QEAnalogProgressBar *bar_01;
    QEAnalogProgressBar *bar_02;
    QEAnalogProgressBar *bar_03;
    QEAnalogProgressBar *bar_04;
    QEAnalogProgressBar *bar_05;
    QEAnalogProgressBar *bar_06;
    QEAnalogProgressBar *bar_07;
    QEAnalogProgressBar *bar_08;
    QEAnalogProgressBar *bar_09;
    QEAnalogProgressBar *bar_10;
    QEAnalogProgressBar *bar_11;
    QEAnalogProgressBar *bar_12;
    QEAnalogProgressBar *bar_13;
    QEAnalogProgressBar *bar_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainBar)
    {
        if (mainBar->objectName().isEmpty())
            mainBar->setObjectName(QStringLiteral("mainBar"));
        mainBar->resize(1017, 847);
        centralwidget = new QWidget(mainBar);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget_6 = new QWidget(centralwidget);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(30, 60, 933, 642));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        name_01 = new QELabel(layoutWidget_6);
        name_01->setObjectName(QStringLiteral("name_01"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        name_01->setFont(font);
        name_01->setTextFormat(Qt::AutoText);
        name_01->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_01);

        name_02 = new QELabel(layoutWidget_6);
        name_02->setObjectName(QStringLiteral("name_02"));
        name_02->setFont(font);
        name_02->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_02);

        name_03 = new QELabel(layoutWidget_6);
        name_03->setObjectName(QStringLiteral("name_03"));
        name_03->setFont(font);
        name_03->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_03);

        name_04 = new QELabel(layoutWidget_6);
        name_04->setObjectName(QStringLiteral("name_04"));
        name_04->setFont(font);
        name_04->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_04);

        name_05 = new QELabel(layoutWidget_6);
        name_05->setObjectName(QStringLiteral("name_05"));
        name_05->setFont(font);
        name_05->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_05);

        name_06 = new QELabel(layoutWidget_6);
        name_06->setObjectName(QStringLiteral("name_06"));
        name_06->setFont(font);
        name_06->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_06);

        name_07 = new QELabel(layoutWidget_6);
        name_07->setObjectName(QStringLiteral("name_07"));
        name_07->setFont(font);
        name_07->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_07);

        name_08 = new QELabel(layoutWidget_6);
        name_08->setObjectName(QStringLiteral("name_08"));
        name_08->setFont(font);
        name_08->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_08);

        name_09 = new QELabel(layoutWidget_6);
        name_09->setObjectName(QStringLiteral("name_09"));
        name_09->setFont(font);
        name_09->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_09);

        name_10 = new QELabel(layoutWidget_6);
        name_10->setObjectName(QStringLiteral("name_10"));
        name_10->setFont(font);
        name_10->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_10);

        name_11 = new QELabel(layoutWidget_6);
        name_11->setObjectName(QStringLiteral("name_11"));
        name_11->setFont(font);
        name_11->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_11);

        name_12 = new QELabel(layoutWidget_6);
        name_12->setObjectName(QStringLiteral("name_12"));
        name_12->setFont(font);
        name_12->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_12);

        name_13 = new QELabel(layoutWidget_6);
        name_13->setObjectName(QStringLiteral("name_13"));
        name_13->setFont(font);
        name_13->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_13);

        name_14 = new QELabel(layoutWidget_6);
        name_14->setObjectName(QStringLiteral("name_14"));
        name_14->setFont(font);
        name_14->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(name_14);


        horizontalLayout_5->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setSizeConstraint(QLayout::SetDefaultConstraint);
        pres_01 = new QELabel(layoutWidget_6);
        pres_01->setObjectName(QStringLiteral("pres_01"));
        pres_01->setFont(font);
        pres_01->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_01);

        pres_02 = new QELabel(layoutWidget_6);
        pres_02->setObjectName(QStringLiteral("pres_02"));
        pres_02->setFont(font);
        pres_02->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_02);

        pres_03 = new QELabel(layoutWidget_6);
        pres_03->setObjectName(QStringLiteral("pres_03"));
        pres_03->setFont(font);
        pres_03->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_03);

        pres_04 = new QELabel(layoutWidget_6);
        pres_04->setObjectName(QStringLiteral("pres_04"));
        pres_04->setFont(font);
        pres_04->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_04);

        pres_05 = new QELabel(layoutWidget_6);
        pres_05->setObjectName(QStringLiteral("pres_05"));
        pres_05->setFont(font);
        pres_05->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_05);

        pres_06 = new QELabel(layoutWidget_6);
        pres_06->setObjectName(QStringLiteral("pres_06"));
        pres_06->setFont(font);
        pres_06->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_06);

        pres_07 = new QELabel(layoutWidget_6);
        pres_07->setObjectName(QStringLiteral("pres_07"));
        pres_07->setFont(font);
        pres_07->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_07);

        pres_08 = new QELabel(layoutWidget_6);
        pres_08->setObjectName(QStringLiteral("pres_08"));
        pres_08->setFont(font);
        pres_08->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_08);

        pres_09 = new QELabel(layoutWidget_6);
        pres_09->setObjectName(QStringLiteral("pres_09"));
        pres_09->setFont(font);
        pres_09->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_09);

        pres_10 = new QELabel(layoutWidget_6);
        pres_10->setObjectName(QStringLiteral("pres_10"));
        pres_10->setFont(font);
        pres_10->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_10);

        pres_11 = new QELabel(layoutWidget_6);
        pres_11->setObjectName(QStringLiteral("pres_11"));
        pres_11->setFont(font);
        pres_11->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_11);

        pres_12 = new QELabel(layoutWidget_6);
        pres_12->setObjectName(QStringLiteral("pres_12"));
        pres_12->setFont(font);
        pres_12->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_12);

        pres_13 = new QELabel(layoutWidget_6);
        pres_13->setObjectName(QStringLiteral("pres_13"));
        pres_13->setFont(font);
        pres_13->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_13);

        pres_14 = new QELabel(layoutWidget_6);
        pres_14->setObjectName(QStringLiteral("pres_14"));
        pres_14->setFont(font);
        pres_14->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(pres_14);


        horizontalLayout_5->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setSizeConstraint(QLayout::SetMinimumSize);
        bar_01 = new QEAnalogProgressBar(layoutWidget_6);
        bar_01->setObjectName(QStringLiteral("bar_01"));
        bar_01->setMinimumSize(QSize(700, 40));
        bar_01->setMaximum(0.01);
        bar_01->setShowText(false);
        bar_01->setShowScale(true);
        bar_01->setLogScale(true);
        bar_01->setOrientation(QEAnalogIndicator::Left_To_Right);
        bar_01->setUseDbDisplayLimits(true);
        bar_01->setPrecision(3);
        bar_01->setUseDbPrecision(true);
        bar_01->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_01);

        bar_02 = new QEAnalogProgressBar(layoutWidget_6);
        bar_02->setObjectName(QStringLiteral("bar_02"));
        bar_02->setMinimumSize(QSize(700, 40));
        bar_02->setMaximum(0.01);
        bar_02->setShowText(false);
        bar_02->setShowScale(true);
        bar_02->setLogScale(true);
        bar_02->setUseDbDisplayLimits(true);
        bar_02->setPrecision(11);
        bar_02->setUseDbPrecision(true);
        bar_02->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_02);

        bar_03 = new QEAnalogProgressBar(layoutWidget_6);
        bar_03->setObjectName(QStringLiteral("bar_03"));
        bar_03->setMinimumSize(QSize(700, 40));
        bar_03->setMaximum(0.01);
        bar_03->setShowText(false);
        bar_03->setShowScale(true);
        bar_03->setLogScale(true);
        bar_03->setUseDbDisplayLimits(true);
        bar_03->setPrecision(11);
        bar_03->setUseDbPrecision(true);
        bar_03->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_03);

        bar_04 = new QEAnalogProgressBar(layoutWidget_6);
        bar_04->setObjectName(QStringLiteral("bar_04"));
        bar_04->setMinimumSize(QSize(700, 40));
        bar_04->setMaximum(0.01);
        bar_04->setShowText(false);
        bar_04->setShowScale(true);
        bar_04->setLogScale(true);
        bar_04->setUseDbDisplayLimits(true);
        bar_04->setPrecision(11);
        bar_04->setUseDbPrecision(true);
        bar_04->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_04);

        bar_05 = new QEAnalogProgressBar(layoutWidget_6);
        bar_05->setObjectName(QStringLiteral("bar_05"));
        bar_05->setMinimumSize(QSize(700, 40));
        bar_05->setMaximum(0.01);
        bar_05->setShowText(false);
        bar_05->setShowScale(true);
        bar_05->setLogScale(true);
        bar_05->setUseDbDisplayLimits(true);
        bar_05->setPrecision(11);
        bar_05->setUseDbPrecision(true);
        bar_05->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_05);

        bar_06 = new QEAnalogProgressBar(layoutWidget_6);
        bar_06->setObjectName(QStringLiteral("bar_06"));
        bar_06->setMinimumSize(QSize(700, 40));
        bar_06->setMaximum(0.01);
        bar_06->setShowText(false);
        bar_06->setShowScale(true);
        bar_06->setLogScale(true);
        bar_06->setUseDbDisplayLimits(true);
        bar_06->setPrecision(11);
        bar_06->setUseDbPrecision(true);
        bar_06->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_06);

        bar_07 = new QEAnalogProgressBar(layoutWidget_6);
        bar_07->setObjectName(QStringLiteral("bar_07"));
        bar_07->setMinimumSize(QSize(700, 40));
        bar_07->setMaximum(0.01);
        bar_07->setShowText(false);
        bar_07->setShowScale(true);
        bar_07->setLogScale(true);
        bar_07->setUseDbDisplayLimits(true);
        bar_07->setPrecision(11);
        bar_07->setUseDbPrecision(true);
        bar_07->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_07);

        bar_08 = new QEAnalogProgressBar(layoutWidget_6);
        bar_08->setObjectName(QStringLiteral("bar_08"));
        bar_08->setMinimumSize(QSize(700, 40));
        bar_08->setMaximum(0.01);
        bar_08->setShowText(false);
        bar_08->setShowScale(true);
        bar_08->setLogScale(true);
        bar_08->setUseDbDisplayLimits(true);
        bar_08->setPrecision(11);
        bar_08->setUseDbPrecision(true);
        bar_08->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_08);

        bar_09 = new QEAnalogProgressBar(layoutWidget_6);
        bar_09->setObjectName(QStringLiteral("bar_09"));
        bar_09->setMinimumSize(QSize(700, 40));
        bar_09->setMaximum(0.01);
        bar_09->setShowText(false);
        bar_09->setShowScale(true);
        bar_09->setLogScale(true);
        bar_09->setUseDbDisplayLimits(true);
        bar_09->setPrecision(11);
        bar_09->setUseDbPrecision(true);
        bar_09->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_09);

        bar_10 = new QEAnalogProgressBar(layoutWidget_6);
        bar_10->setObjectName(QStringLiteral("bar_10"));
        bar_10->setMinimumSize(QSize(700, 40));
        bar_10->setMaximum(0.01);
        bar_10->setShowText(false);
        bar_10->setShowScale(true);
        bar_10->setLogScale(true);
        bar_10->setUseDbDisplayLimits(true);
        bar_10->setPrecision(11);
        bar_10->setUseDbPrecision(true);
        bar_10->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_10);

        bar_11 = new QEAnalogProgressBar(layoutWidget_6);
        bar_11->setObjectName(QStringLiteral("bar_11"));
        bar_11->setMinimumSize(QSize(700, 40));
        bar_11->setMaximum(0.01);
        bar_11->setShowText(false);
        bar_11->setShowScale(true);
        bar_11->setLogScale(true);
        bar_11->setUseDbDisplayLimits(true);
        bar_11->setPrecision(11);
        bar_11->setUseDbPrecision(true);
        bar_11->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_11);

        bar_12 = new QEAnalogProgressBar(layoutWidget_6);
        bar_12->setObjectName(QStringLiteral("bar_12"));
        bar_12->setMinimumSize(QSize(700, 40));
        bar_12->setMaximum(0.01);
        bar_12->setShowText(false);
        bar_12->setShowScale(true);
        bar_12->setLogScale(true);
        bar_12->setUseDbDisplayLimits(true);
        bar_12->setPrecision(11);
        bar_12->setUseDbPrecision(true);
        bar_12->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_12);

        bar_13 = new QEAnalogProgressBar(layoutWidget_6);
        bar_13->setObjectName(QStringLiteral("bar_13"));
        bar_13->setMinimumSize(QSize(700, 40));
        bar_13->setMaximum(0.01);
        bar_13->setShowText(false);
        bar_13->setShowScale(true);
        bar_13->setLogScale(true);
        bar_13->setUseDbDisplayLimits(true);
        bar_13->setPrecision(11);
        bar_13->setUseDbPrecision(true);
        bar_13->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_13);

        bar_14 = new QEAnalogProgressBar(layoutWidget_6);
        bar_14->setObjectName(QStringLiteral("bar_14"));
        bar_14->setMinimumSize(QSize(700, 40));
        bar_14->setMaximum(0.01);
        bar_14->setShowText(false);
        bar_14->setShowScale(true);
        bar_14->setLogScale(true);
        bar_14->setUseDbDisplayLimits(true);
        bar_14->setPrecision(11);
        bar_14->setUseDbPrecision(true);
        bar_14->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(bar_14);


        horizontalLayout_5->addLayout(verticalLayout_16);

        mainBar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainBar);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1017, 21));
        mainBar->setMenuBar(menubar);
        statusbar = new QStatusBar(mainBar);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        mainBar->setStatusBar(statusbar);

        retranslateUi(mainBar);

        QMetaObject::connectSlotsByName(mainBar);
    } // setupUi

    void retranslateUi(QMainWindow *mainBar)
    {
        mainBar->setWindowTitle(QApplication::translate("mainBar", "MainWindow", 0));
        name_01->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M2.DESC", 0)));
        name_01->setText(QApplication::translate("mainBar", "H2", 0));
        name_02->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M4.DESC", 0)));
        name_02->setText(QApplication::translate("mainBar", "HE", 0));
        name_03->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M6.DESC", 0)));
        name_03->setProperty("variableSubstitutions", QVariant(QString()));
        name_03->setText(QApplication::translate("mainBar", "CARBON", 0));
        name_04->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M14.DESC", 0)));
        name_04->setText(QApplication::translate("mainBar", "CH2/N2++", 0));
        name_05->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M15.DESC", 0)));
        name_05->setText(QApplication::translate("mainBar", "CH3", 0));
        name_06->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M16.DESC", 0)));
        name_06->setText(QApplication::translate("mainBar", "CH4", 0));
        name_07->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M18.DESC", 0)));
        name_07->setText(QApplication::translate("mainBar", "H2O", 0));
        name_08->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M28.DESC", 0)));
        name_08->setText(QApplication::translate("mainBar", "N2/CO", 0));
        name_09->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M32.DESC", 0)));
        name_09->setText(QApplication::translate("mainBar", "O2", 0));
        name_10->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M40.DESC", 0)));
        name_10->setText(QApplication::translate("mainBar", "AR", 0));
        name_11->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M44.DESC", 0)));
        name_11->setText(QApplication::translate("mainBar", "CO2", 0));
        name_12->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M55.DESC", 0)));
        name_12->setText(QApplication::translate("mainBar", "CO2", 0));
        name_13->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M57.DESC", 0)));
        name_13->setText(QApplication::translate("mainBar", "CO2", 0));
        name_14->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M69.DESC", 0)));
        name_14->setText(QApplication::translate("mainBar", "CF3/C5H9", 0));
        pres_01->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M2", 0)));
        pres_01->setText(QApplication::translate("mainBar", "4.599e-10 mbar", 0));
        pres_02->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M4", 0)));
        pres_02->setText(QApplication::translate("mainBar", "8.045e-11 mbar", 0));
        pres_03->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M12", 0)));
        pres_03->setText(QApplication::translate("mainBar", "8.045e-11 mbar", 0));
        pres_04->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M14", 0)));
        pres_04->setText(QApplication::translate("mainBar", "5.282e-11 mbar", 0));
        pres_05->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M15", 0)));
        pres_05->setText(QApplication::translate("mainBar", "1.000e-14 mbar", 0));
        pres_06->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M16", 0)));
        pres_06->setText(QApplication::translate("mainBar", "1.000e-14 mbar", 0));
        pres_07->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M18", 0)));
        pres_07->setText(QApplication::translate("mainBar", "2.925e-11 mbar", 0));
        pres_08->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M28", 0)));
        pres_08->setText(QApplication::translate("mainBar", "2.032e-11 mbar", 0));
        pres_09->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M32", 0)));
        pres_09->setText(QApplication::translate("mainBar", "4.469e-11 mbar", 0));
        pres_10->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M40", 0)));
        pres_10->setText(QApplication::translate("mainBar", "1.000e-14 mbar", 0));
        pres_11->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M44", 0)));
        pres_11->setText(QApplication::translate("mainBar", "7.313e-12 mbar", 0));
        pres_12->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M55", 0)));
        pres_12->setText(QApplication::translate("mainBar", "7.313e-12 mbar", 0));
        pres_13->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M57", 0)));
        pres_13->setText(QApplication::translate("mainBar", "7.313e-12 mbar", 0));
        pres_14->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M69", 0)));
        pres_14->setText(QApplication::translate("mainBar", "1.000e-14 mbar", 0));
        bar_01->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M2", 0)));
        bar_01->setProperty("variableSubstitutions", QVariant(QString()));
        bar_02->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M4", 0)));
        bar_03->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M12", 0)));
        bar_04->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M14", 0)));
        bar_05->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M15", 0)));
        bar_06->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M16", 0)));
        bar_07->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M18", 0)));
        bar_08->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M28", 0)));
        bar_09->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M32", 0)));
        bar_10->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M40", 0)));
        bar_11->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M44", 0)));
        bar_12->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M55", 0)));
        bar_13->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M57", 0)));
        bar_14->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M69", 0)));
    } // retranslateUi

};

namespace Ui {
    class mainBar: public Ui_mainBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV2_MAIN_BAR_H
