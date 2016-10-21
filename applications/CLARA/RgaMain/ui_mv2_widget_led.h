/********************************************************************************
** Form generated from reading UI file 'mv2_widget_led.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MV2_WIDGET_LED_H
#define UI_MV2_WIDGET_LED_H

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

QT_BEGIN_NAMESPACE

class Ui_RgaLed
{
public:
    QESimpleShape *archOn_1;
    QESimpleShape *STOP_1;
    QELabel *archTO_1;
    QELabel *archTime_1;
    QESimpleShape *ANA200_1;
    QESimpleShape *BAR50_1;
    QELabel *mode_1;
    QESimpleShape *BAR200_1;
    QESimpleShape *BAR100_1;
    QFrame *line_2;
    QESimpleShape *SS_1;

    void setupUi(QGroupBox *RgaLed)
    {
        if (RgaLed->objectName().isEmpty())
            RgaLed->setObjectName(QStringLiteral("RgaLed"));
        RgaLed->resize(92, 367);
        archOn_1 = new QESimpleShape(RgaLed);
        archOn_1->setObjectName(QStringLiteral("archOn_1"));
        archOn_1->setGeometry(QRect(10, 220, 16, 16));
        archOn_1->setFocusPolicy(Qt::NoFocus);
        archOn_1->setContextMenuPolicy(Qt::CustomContextMenu);
        archOn_1->setShape(QSimpleShape::ellipse);
        archOn_1->setProperty("colour0", QVariant(QColor(200, 200, 200)));
        archOn_1->setProperty("colour1", QVariant(QColor(0, 255, 0)));
        archOn_1->setProperty("colour2", QVariant(QColor(255, 0, 0)));
        archOn_1->setProperty("colour3", QVariant(QColor(0, 255, 0)));
        archOn_1->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        STOP_1 = new QESimpleShape(RgaLed);
        STOP_1->setObjectName(QStringLiteral("STOP_1"));
        STOP_1->setGeometry(QRect(10, 20, 16, 16));
        STOP_1->setFocusPolicy(Qt::NoFocus);
        STOP_1->setContextMenuPolicy(Qt::CustomContextMenu);
        STOP_1->setShape(QSimpleShape::ellipse);
        STOP_1->setProperty("colour0", QVariant(QColor(255, 255, 0)));
        STOP_1->setProperty("colour1", QVariant(QColor(255, 0, 0)));
        STOP_1->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        archTO_1 = new QELabel(RgaLed);
        archTO_1->setObjectName(QStringLiteral("archTO_1"));
        archTO_1->setGeometry(QRect(10, 290, 31, 21));
        archTime_1 = new QELabel(RgaLed);
        archTime_1->setObjectName(QStringLiteral("archTime_1"));
        archTime_1->setGeometry(QRect(10, 330, 31, 21));
        ANA200_1 = new QESimpleShape(RgaLed);
        ANA200_1->setObjectName(QStringLiteral("ANA200_1"));
        ANA200_1->setGeometry(QRect(10, 140, 16, 16));
        ANA200_1->setShape(QSimpleShape::ellipse);
        ANA200_1->setProperty("colour7", QVariant(QColor(200, 200, 200)));
        ANA200_1->setProperty("colour8", QVariant(QColor(0, 200, 0)));
        ANA200_1->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        BAR50_1 = new QESimpleShape(RgaLed);
        BAR50_1->setObjectName(QStringLiteral("BAR50_1"));
        BAR50_1->setGeometry(QRect(10, 60, 16, 16));
        BAR50_1->setShape(QSimpleShape::ellipse);
        BAR50_1->setProperty("colour3", QVariant(QColor(200, 200, 200)));
        BAR50_1->setProperty("colour4", QVariant(QColor(200, 200, 200)));
        BAR50_1->setProperty("colour5", QVariant(QColor(0, 200, 0)));
        BAR50_1->setProperty("flash0", QVariant(false));
        BAR50_1->setProperty("flash1", QVariant(false));
        BAR50_1->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        mode_1 = new QELabel(RgaLed);
        mode_1->setObjectName(QStringLiteral("mode_1"));
        mode_1->setGeometry(QRect(10, 250, 60, 16));
        BAR200_1 = new QESimpleShape(RgaLed);
        BAR200_1->setObjectName(QStringLiteral("BAR200_1"));
        BAR200_1->setGeometry(QRect(10, 100, 16, 16));
        BAR200_1->setShape(QSimpleShape::ellipse);
        BAR200_1->setProperty("colour7", QVariant(QColor(0, 200, 0)));
        BAR200_1->setProperty("visible", QVariant(true));
        BAR200_1->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        BAR100_1 = new QESimpleShape(RgaLed);
        BAR100_1->setObjectName(QStringLiteral("BAR100_1"));
        BAR100_1->setGeometry(QRect(10, 80, 16, 16));
        BAR100_1->setShape(QSimpleShape::ellipse);
        BAR100_1->setProperty("colour6", QVariant(QColor(0, 200, 0)));
        BAR100_1->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        line_2 = new QFrame(RgaLed);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 200, 21, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        SS_1 = new QESimpleShape(RgaLed);
        SS_1->setObjectName(QStringLiteral("SS_1"));
        SS_1->setGeometry(QRect(10, 170, 16, 16));
        SS_1->setShape(QSimpleShape::ellipse);
        SS_1->setProperty("colour0", QVariant(QColor(0, 200, 0)));
        SS_1->setProperty("colour1", QVariant(QColor(200, 200, 200)));
        SS_1->setProperty("flash0", QVariant(false));
        SS_1->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));

        retranslateUi(RgaLed);

        QMetaObject::connectSlotsByName(RgaLed);
    } // setupUi

    void retranslateUi(QGroupBox *RgaLed)
    {
        RgaLed->setWindowTitle(QApplication::translate("RgaLed", "GroupBox", 0));
        RgaLed->setTitle(QApplication::translate("RgaLed", "RGA", 0));
        archOn_1->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(GRGA):MODE", 0)));
        archOn_1->setProperty("variableSubstitutions", QVariant(QString()));
        STOP_1->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):HEADSTA", 0)));
        STOP_1->setProperty("variableSubstitutions", QVariant(QString()));
        archTO_1->setProperty("variable", QVariant(QApplication::translate("RgaLed", "GRGA:ANAT", 0)));
        archTime_1->setProperty("variable", QVariant(QApplication::translate("RgaLed", "GRGA:ANAT", 0)));
        ANA200_1->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):HEADSTA", 0)));
        BAR50_1->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):HEADSTA", 0)));
        BAR200_1->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):HEADSTA", 0)));
        BAR100_1->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):HEADSTA", 0)));
        SS_1->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):SCAN", 0)));
    } // retranslateUi

};

namespace Ui {
    class RgaLed: public Ui_RgaLed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV2_WIDGET_LED_H
