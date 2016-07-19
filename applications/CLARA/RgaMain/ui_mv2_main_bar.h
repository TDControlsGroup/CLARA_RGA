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
#include <QtWidgets/QLabel>
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
    QELabel *qelabel_51;
    QELabel *qelabel_53;
    QLabel *label;
    QELabel *qelabel_54;
    QELabel *qelabel_55;
    QELabel *qelabel_56;
    QELabel *qelabel_57;
    QELabel *qelabel_58;
    QELabel *qelabel_59;
    QELabel *qelabel_109;
    QELabel *qelabel_110;
    QELabel *qelabel_126;
    QELabel *qelabel_127;
    QELabel *qelabel_111;
    QVBoxLayout *verticalLayout_15;
    QELabel *qelabel_112;
    QELabel *qelabel_113;
    QELabel *qelabel_123;
    QELabel *qelabel_114;
    QELabel *qelabel_115;
    QELabel *qelabel_116;
    QELabel *qelabel_117;
    QELabel *qelabel_118;
    QELabel *qelabel_119;
    QELabel *qelabel_120;
    QELabel *qelabel_121;
    QELabel *qelabel_124;
    QELabel *qelabel_125;
    QELabel *qelabel_122;
    QVBoxLayout *verticalLayout_16;
    QEAnalogProgressBar *qeanalogprogressbar_56;
    QEAnalogProgressBar *qeanalogprogressbar_57;
    QEAnalogProgressBar *qeanalogprogressbar_67;
    QEAnalogProgressBar *qeanalogprogressbar_58;
    QEAnalogProgressBar *qeanalogprogressbar_59;
    QEAnalogProgressBar *qeanalogprogressbar_60;
    QEAnalogProgressBar *qeanalogprogressbar_61;
    QEAnalogProgressBar *qeanalogprogressbar_62;
    QEAnalogProgressBar *qeanalogprogressbar_63;
    QEAnalogProgressBar *qeanalogprogressbar_64;
    QEAnalogProgressBar *qeanalogprogressbar_65;
    QEAnalogProgressBar *qeanalogprogressbar_68;
    QEAnalogProgressBar *qeanalogprogressbar_69;
    QEAnalogProgressBar *qeanalogprogressbar_66;
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
        qelabel_51 = new QELabel(layoutWidget_6);
        qelabel_51->setObjectName(QStringLiteral("qelabel_51"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        qelabel_51->setFont(font);
        qelabel_51->setTextFormat(Qt::AutoText);
        qelabel_51->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_51);

        qelabel_53 = new QELabel(layoutWidget_6);
        qelabel_53->setObjectName(QStringLiteral("qelabel_53"));
        qelabel_53->setFont(font);
        qelabel_53->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_53);

        label = new QLabel(layoutWidget_6);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        verticalLayout_14->addWidget(label);

        qelabel_54 = new QELabel(layoutWidget_6);
        qelabel_54->setObjectName(QStringLiteral("qelabel_54"));
        qelabel_54->setFont(font);
        qelabel_54->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_54);

        qelabel_55 = new QELabel(layoutWidget_6);
        qelabel_55->setObjectName(QStringLiteral("qelabel_55"));
        qelabel_55->setFont(font);
        qelabel_55->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_55);

        qelabel_56 = new QELabel(layoutWidget_6);
        qelabel_56->setObjectName(QStringLiteral("qelabel_56"));
        qelabel_56->setFont(font);
        qelabel_56->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_56);

        qelabel_57 = new QELabel(layoutWidget_6);
        qelabel_57->setObjectName(QStringLiteral("qelabel_57"));
        qelabel_57->setFont(font);
        qelabel_57->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_57);

        qelabel_58 = new QELabel(layoutWidget_6);
        qelabel_58->setObjectName(QStringLiteral("qelabel_58"));
        qelabel_58->setFont(font);
        qelabel_58->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_58);

        qelabel_59 = new QELabel(layoutWidget_6);
        qelabel_59->setObjectName(QStringLiteral("qelabel_59"));
        qelabel_59->setFont(font);
        qelabel_59->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_59);

        qelabel_109 = new QELabel(layoutWidget_6);
        qelabel_109->setObjectName(QStringLiteral("qelabel_109"));
        qelabel_109->setFont(font);
        qelabel_109->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_109);

        qelabel_110 = new QELabel(layoutWidget_6);
        qelabel_110->setObjectName(QStringLiteral("qelabel_110"));
        qelabel_110->setFont(font);
        qelabel_110->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_110);

        qelabel_126 = new QELabel(layoutWidget_6);
        qelabel_126->setObjectName(QStringLiteral("qelabel_126"));
        qelabel_126->setFont(font);
        qelabel_126->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_126);

        qelabel_127 = new QELabel(layoutWidget_6);
        qelabel_127->setObjectName(QStringLiteral("qelabel_127"));
        qelabel_127->setFont(font);
        qelabel_127->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_127);

        qelabel_111 = new QELabel(layoutWidget_6);
        qelabel_111->setObjectName(QStringLiteral("qelabel_111"));
        qelabel_111->setFont(font);
        qelabel_111->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_14->addWidget(qelabel_111);


        horizontalLayout_5->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setSizeConstraint(QLayout::SetDefaultConstraint);
        qelabel_112 = new QELabel(layoutWidget_6);
        qelabel_112->setObjectName(QStringLiteral("qelabel_112"));
        qelabel_112->setFont(font);
        qelabel_112->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_112);

        qelabel_113 = new QELabel(layoutWidget_6);
        qelabel_113->setObjectName(QStringLiteral("qelabel_113"));
        qelabel_113->setFont(font);
        qelabel_113->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_113);

        qelabel_123 = new QELabel(layoutWidget_6);
        qelabel_123->setObjectName(QStringLiteral("qelabel_123"));
        qelabel_123->setFont(font);
        qelabel_123->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_123);

        qelabel_114 = new QELabel(layoutWidget_6);
        qelabel_114->setObjectName(QStringLiteral("qelabel_114"));
        qelabel_114->setFont(font);
        qelabel_114->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_114);

        qelabel_115 = new QELabel(layoutWidget_6);
        qelabel_115->setObjectName(QStringLiteral("qelabel_115"));
        qelabel_115->setFont(font);
        qelabel_115->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_115);

        qelabel_116 = new QELabel(layoutWidget_6);
        qelabel_116->setObjectName(QStringLiteral("qelabel_116"));
        qelabel_116->setFont(font);
        qelabel_116->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_116);

        qelabel_117 = new QELabel(layoutWidget_6);
        qelabel_117->setObjectName(QStringLiteral("qelabel_117"));
        qelabel_117->setFont(font);
        qelabel_117->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_117);

        qelabel_118 = new QELabel(layoutWidget_6);
        qelabel_118->setObjectName(QStringLiteral("qelabel_118"));
        qelabel_118->setFont(font);
        qelabel_118->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_118);

        qelabel_119 = new QELabel(layoutWidget_6);
        qelabel_119->setObjectName(QStringLiteral("qelabel_119"));
        qelabel_119->setFont(font);
        qelabel_119->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_119);

        qelabel_120 = new QELabel(layoutWidget_6);
        qelabel_120->setObjectName(QStringLiteral("qelabel_120"));
        qelabel_120->setFont(font);
        qelabel_120->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_120);

        qelabel_121 = new QELabel(layoutWidget_6);
        qelabel_121->setObjectName(QStringLiteral("qelabel_121"));
        qelabel_121->setFont(font);
        qelabel_121->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_121);

        qelabel_124 = new QELabel(layoutWidget_6);
        qelabel_124->setObjectName(QStringLiteral("qelabel_124"));
        qelabel_124->setFont(font);
        qelabel_124->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_124);

        qelabel_125 = new QELabel(layoutWidget_6);
        qelabel_125->setObjectName(QStringLiteral("qelabel_125"));
        qelabel_125->setFont(font);
        qelabel_125->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_125);

        qelabel_122 = new QELabel(layoutWidget_6);
        qelabel_122->setObjectName(QStringLiteral("qelabel_122"));
        qelabel_122->setFont(font);
        qelabel_122->setProperty("notation", QVariant(QELabel::Scientific));

        verticalLayout_15->addWidget(qelabel_122);


        horizontalLayout_5->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setSizeConstraint(QLayout::SetMinimumSize);
        qeanalogprogressbar_56 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_56->setObjectName(QStringLiteral("qeanalogprogressbar_56"));
        qeanalogprogressbar_56->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_56->setMaximum(0.01);
        qeanalogprogressbar_56->setShowText(false);
        qeanalogprogressbar_56->setShowScale(true);
        qeanalogprogressbar_56->setLogScale(true);
        qeanalogprogressbar_56->setOrientation(QEAnalogIndicator::Left_To_Right);
        qeanalogprogressbar_56->setUseDbDisplayLimits(true);
        qeanalogprogressbar_56->setPrecision(3);
        qeanalogprogressbar_56->setUseDbPrecision(true);
        qeanalogprogressbar_56->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_56);

        qeanalogprogressbar_57 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_57->setObjectName(QStringLiteral("qeanalogprogressbar_57"));
        qeanalogprogressbar_57->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_57->setMaximum(0.01);
        qeanalogprogressbar_57->setShowText(false);
        qeanalogprogressbar_57->setShowScale(true);
        qeanalogprogressbar_57->setLogScale(true);
        qeanalogprogressbar_57->setUseDbDisplayLimits(true);
        qeanalogprogressbar_57->setPrecision(11);
        qeanalogprogressbar_57->setUseDbPrecision(true);
        qeanalogprogressbar_57->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_57);

        qeanalogprogressbar_67 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_67->setObjectName(QStringLiteral("qeanalogprogressbar_67"));
        qeanalogprogressbar_67->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_67->setMaximum(0.01);
        qeanalogprogressbar_67->setShowText(false);
        qeanalogprogressbar_67->setShowScale(true);
        qeanalogprogressbar_67->setLogScale(true);
        qeanalogprogressbar_67->setUseDbDisplayLimits(true);
        qeanalogprogressbar_67->setPrecision(11);
        qeanalogprogressbar_67->setUseDbPrecision(true);
        qeanalogprogressbar_67->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_67);

        qeanalogprogressbar_58 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_58->setObjectName(QStringLiteral("qeanalogprogressbar_58"));
        qeanalogprogressbar_58->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_58->setMaximum(0.01);
        qeanalogprogressbar_58->setShowText(false);
        qeanalogprogressbar_58->setShowScale(true);
        qeanalogprogressbar_58->setLogScale(true);
        qeanalogprogressbar_58->setUseDbDisplayLimits(true);
        qeanalogprogressbar_58->setPrecision(11);
        qeanalogprogressbar_58->setUseDbPrecision(true);
        qeanalogprogressbar_58->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_58);

        qeanalogprogressbar_59 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_59->setObjectName(QStringLiteral("qeanalogprogressbar_59"));
        qeanalogprogressbar_59->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_59->setMaximum(0.01);
        qeanalogprogressbar_59->setShowText(false);
        qeanalogprogressbar_59->setShowScale(true);
        qeanalogprogressbar_59->setLogScale(true);
        qeanalogprogressbar_59->setUseDbDisplayLimits(true);
        qeanalogprogressbar_59->setPrecision(11);
        qeanalogprogressbar_59->setUseDbPrecision(true);
        qeanalogprogressbar_59->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_59);

        qeanalogprogressbar_60 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_60->setObjectName(QStringLiteral("qeanalogprogressbar_60"));
        qeanalogprogressbar_60->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_60->setMaximum(0.01);
        qeanalogprogressbar_60->setShowText(false);
        qeanalogprogressbar_60->setShowScale(true);
        qeanalogprogressbar_60->setLogScale(true);
        qeanalogprogressbar_60->setUseDbDisplayLimits(true);
        qeanalogprogressbar_60->setPrecision(11);
        qeanalogprogressbar_60->setUseDbPrecision(true);
        qeanalogprogressbar_60->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_60);

        qeanalogprogressbar_61 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_61->setObjectName(QStringLiteral("qeanalogprogressbar_61"));
        qeanalogprogressbar_61->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_61->setMaximum(0.01);
        qeanalogprogressbar_61->setShowText(false);
        qeanalogprogressbar_61->setShowScale(true);
        qeanalogprogressbar_61->setLogScale(true);
        qeanalogprogressbar_61->setUseDbDisplayLimits(true);
        qeanalogprogressbar_61->setPrecision(11);
        qeanalogprogressbar_61->setUseDbPrecision(true);
        qeanalogprogressbar_61->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_61);

        qeanalogprogressbar_62 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_62->setObjectName(QStringLiteral("qeanalogprogressbar_62"));
        qeanalogprogressbar_62->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_62->setMaximum(0.01);
        qeanalogprogressbar_62->setShowText(false);
        qeanalogprogressbar_62->setShowScale(true);
        qeanalogprogressbar_62->setLogScale(true);
        qeanalogprogressbar_62->setUseDbDisplayLimits(true);
        qeanalogprogressbar_62->setPrecision(11);
        qeanalogprogressbar_62->setUseDbPrecision(true);
        qeanalogprogressbar_62->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_62);

        qeanalogprogressbar_63 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_63->setObjectName(QStringLiteral("qeanalogprogressbar_63"));
        qeanalogprogressbar_63->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_63->setMaximum(0.01);
        qeanalogprogressbar_63->setShowText(false);
        qeanalogprogressbar_63->setShowScale(true);
        qeanalogprogressbar_63->setLogScale(true);
        qeanalogprogressbar_63->setUseDbDisplayLimits(true);
        qeanalogprogressbar_63->setPrecision(11);
        qeanalogprogressbar_63->setUseDbPrecision(true);
        qeanalogprogressbar_63->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_63);

        qeanalogprogressbar_64 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_64->setObjectName(QStringLiteral("qeanalogprogressbar_64"));
        qeanalogprogressbar_64->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_64->setMaximum(0.01);
        qeanalogprogressbar_64->setShowText(false);
        qeanalogprogressbar_64->setShowScale(true);
        qeanalogprogressbar_64->setLogScale(true);
        qeanalogprogressbar_64->setUseDbDisplayLimits(true);
        qeanalogprogressbar_64->setPrecision(11);
        qeanalogprogressbar_64->setUseDbPrecision(true);
        qeanalogprogressbar_64->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_64);

        qeanalogprogressbar_65 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_65->setObjectName(QStringLiteral("qeanalogprogressbar_65"));
        qeanalogprogressbar_65->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_65->setMaximum(0.01);
        qeanalogprogressbar_65->setShowText(false);
        qeanalogprogressbar_65->setShowScale(true);
        qeanalogprogressbar_65->setLogScale(true);
        qeanalogprogressbar_65->setUseDbDisplayLimits(true);
        qeanalogprogressbar_65->setPrecision(11);
        qeanalogprogressbar_65->setUseDbPrecision(true);
        qeanalogprogressbar_65->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_65);

        qeanalogprogressbar_68 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_68->setObjectName(QStringLiteral("qeanalogprogressbar_68"));
        qeanalogprogressbar_68->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_68->setMaximum(0.01);
        qeanalogprogressbar_68->setShowText(false);
        qeanalogprogressbar_68->setShowScale(true);
        qeanalogprogressbar_68->setLogScale(true);
        qeanalogprogressbar_68->setUseDbDisplayLimits(true);
        qeanalogprogressbar_68->setPrecision(11);
        qeanalogprogressbar_68->setUseDbPrecision(true);
        qeanalogprogressbar_68->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_68);

        qeanalogprogressbar_69 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_69->setObjectName(QStringLiteral("qeanalogprogressbar_69"));
        qeanalogprogressbar_69->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_69->setMaximum(0.01);
        qeanalogprogressbar_69->setShowText(false);
        qeanalogprogressbar_69->setShowScale(true);
        qeanalogprogressbar_69->setLogScale(true);
        qeanalogprogressbar_69->setUseDbDisplayLimits(true);
        qeanalogprogressbar_69->setPrecision(11);
        qeanalogprogressbar_69->setUseDbPrecision(true);
        qeanalogprogressbar_69->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_69);

        qeanalogprogressbar_66 = new QEAnalogProgressBar(layoutWidget_6);
        qeanalogprogressbar_66->setObjectName(QStringLiteral("qeanalogprogressbar_66"));
        qeanalogprogressbar_66->setMinimumSize(QSize(700, 40));
        qeanalogprogressbar_66->setMaximum(0.01);
        qeanalogprogressbar_66->setShowText(false);
        qeanalogprogressbar_66->setShowScale(true);
        qeanalogprogressbar_66->setLogScale(true);
        qeanalogprogressbar_66->setUseDbDisplayLimits(true);
        qeanalogprogressbar_66->setPrecision(11);
        qeanalogprogressbar_66->setUseDbPrecision(true);
        qeanalogprogressbar_66->setProperty("minimum", QVariant(1e-11));

        verticalLayout_16->addWidget(qeanalogprogressbar_66);


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
        qelabel_51->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M2.DESC", 0)));
        qelabel_51->setText(QApplication::translate("mainBar", "H2", 0));
        qelabel_53->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M4.DESC", 0)));
        qelabel_53->setText(QApplication::translate("mainBar", "HE", 0));
        label->setText(QApplication::translate("mainBar", " Carbon", 0));
        qelabel_54->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M14.DESC", 0)));
        qelabel_54->setText(QApplication::translate("mainBar", "CH2/N2++", 0));
        qelabel_55->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M15.DESC", 0)));
        qelabel_55->setText(QApplication::translate("mainBar", "CH3", 0));
        qelabel_56->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M16.DESC", 0)));
        qelabel_56->setText(QApplication::translate("mainBar", "CH4", 0));
        qelabel_57->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M18.DESC", 0)));
        qelabel_57->setText(QApplication::translate("mainBar", "H2O", 0));
        qelabel_58->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M28.DESC", 0)));
        qelabel_58->setText(QApplication::translate("mainBar", "N2/CO", 0));
        qelabel_59->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M32.DESC", 0)));
        qelabel_59->setText(QApplication::translate("mainBar", "O2", 0));
        qelabel_109->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M40.DESC", 0)));
        qelabel_109->setText(QApplication::translate("mainBar", "AR", 0));
        qelabel_110->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M44.DESC", 0)));
        qelabel_110->setText(QApplication::translate("mainBar", "CO2", 0));
        qelabel_126->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M55.DESC", 0)));
        qelabel_126->setText(QApplication::translate("mainBar", "CO2", 0));
        qelabel_127->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M57.DESC", 0)));
        qelabel_127->setText(QApplication::translate("mainBar", "CO2", 0));
        qelabel_111->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M69.DESC", 0)));
        qelabel_111->setText(QApplication::translate("mainBar", "CF3/C5H9", 0));
        qelabel_112->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M2", 0)));
        qelabel_112->setText(QApplication::translate("mainBar", "4.599e-10 mbar", 0));
        qelabel_113->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M4", 0)));
        qelabel_113->setText(QApplication::translate("mainBar", "8.045e-11 mbar", 0));
        qelabel_123->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M12", 0)));
        qelabel_123->setText(QApplication::translate("mainBar", "8.045e-11 mbar", 0));
        qelabel_114->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M14", 0)));
        qelabel_114->setText(QApplication::translate("mainBar", "5.282e-11 mbar", 0));
        qelabel_115->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M15", 0)));
        qelabel_115->setText(QApplication::translate("mainBar", "1.000e-14 mbar", 0));
        qelabel_116->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M16", 0)));
        qelabel_116->setText(QApplication::translate("mainBar", "1.000e-14 mbar", 0));
        qelabel_117->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M18", 0)));
        qelabel_117->setText(QApplication::translate("mainBar", "2.925e-11 mbar", 0));
        qelabel_118->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M28", 0)));
        qelabel_118->setText(QApplication::translate("mainBar", "2.032e-11 mbar", 0));
        qelabel_119->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M32", 0)));
        qelabel_119->setText(QApplication::translate("mainBar", "4.469e-11 mbar", 0));
        qelabel_120->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M40", 0)));
        qelabel_120->setText(QApplication::translate("mainBar", "1.000e-14 mbar", 0));
        qelabel_121->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M44", 0)));
        qelabel_121->setText(QApplication::translate("mainBar", "7.313e-12 mbar", 0));
        qelabel_124->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M55", 0)));
        qelabel_124->setText(QApplication::translate("mainBar", "7.313e-12 mbar", 0));
        qelabel_125->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M57", 0)));
        qelabel_125->setText(QApplication::translate("mainBar", "7.313e-12 mbar", 0));
        qelabel_122->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M69", 0)));
        qelabel_122->setText(QApplication::translate("mainBar", "1.000e-14 mbar", 0));
        qeanalogprogressbar_56->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M2", 0)));
        qeanalogprogressbar_56->setProperty("variableSubstitutions", QVariant(QString()));
        qeanalogprogressbar_57->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M4", 0)));
        qeanalogprogressbar_67->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M12", 0)));
        qeanalogprogressbar_58->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M14", 0)));
        qeanalogprogressbar_59->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M15", 0)));
        qeanalogprogressbar_60->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M16", 0)));
        qeanalogprogressbar_61->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M18", 0)));
        qeanalogprogressbar_62->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M28", 0)));
        qeanalogprogressbar_63->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M32", 0)));
        qeanalogprogressbar_64->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M40", 0)));
        qeanalogprogressbar_65->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M44", 0)));
        qeanalogprogressbar_68->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M55", 0)));
        qeanalogprogressbar_69->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M57", 0)));
        qeanalogprogressbar_66->setProperty("variable", QVariant(QApplication::translate("mainBar", "$(RGA):BAR:M69", 0)));
    } // retranslateUi

};

namespace Ui {
    class mainBar: public Ui_mainBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV2_MAIN_BAR_H
