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
#include <QtWidgets/QHeaderView>
#include "QEGroupBox.h"
#include "QESimpleShape.h"
#include "QSimpleShape.h"

QT_BEGIN_NAMESPACE

class Ui_RgaLed
{
public:
    QESimpleShape *BAR200;
    QESimpleShape *SS;
    QESimpleShape *BAR50;
    QESimpleShape *STOP;
    QESimpleShape *ANA200;
    QESimpleShape *BAR100;

    void setupUi(QEGroupBox *RgaLed)
    {
        if (RgaLed->objectName().isEmpty())
            RgaLed->setObjectName(QStringLiteral("RgaLed"));
        RgaLed->resize(92, 200);
        BAR200 = new QESimpleShape(RgaLed);
        BAR200->setObjectName(QStringLiteral("BAR200"));
        BAR200->setGeometry(QRect(10, 100, 16, 16));
        BAR200->setShape(QSimpleShape::ellipse);
        BAR200->setProperty("colour7", QVariant(QColor(0, 200, 0)));
        BAR200->setProperty("visible", QVariant(true));
        BAR200->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        SS = new QESimpleShape(RgaLed);
        SS->setObjectName(QStringLiteral("SS"));
        SS->setGeometry(QRect(10, 170, 16, 16));
        SS->setShape(QSimpleShape::ellipse);
        SS->setProperty("colour0", QVariant(QColor(0, 200, 0)));
        SS->setProperty("colour1", QVariant(QColor(200, 200, 200)));
        SS->setProperty("flash0", QVariant(false));
        SS->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        BAR50 = new QESimpleShape(RgaLed);
        BAR50->setObjectName(QStringLiteral("BAR50"));
        BAR50->setGeometry(QRect(10, 60, 16, 16));
        BAR50->setShape(QSimpleShape::ellipse);
        BAR50->setProperty("colour3", QVariant(QColor(200, 200, 200)));
        BAR50->setProperty("colour4", QVariant(QColor(200, 200, 200)));
        BAR50->setProperty("colour5", QVariant(QColor(0, 200, 0)));
        BAR50->setProperty("flash0", QVariant(false));
        BAR50->setProperty("flash1", QVariant(false));
        BAR50->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        STOP = new QESimpleShape(RgaLed);
        STOP->setObjectName(QStringLiteral("STOP"));
        STOP->setGeometry(QRect(10, 20, 16, 16));
        STOP->setFocusPolicy(Qt::NoFocus);
        STOP->setContextMenuPolicy(Qt::CustomContextMenu);
        STOP->setShape(QSimpleShape::ellipse);
        STOP->setProperty("colour0", QVariant(QColor(255, 255, 0)));
        STOP->setProperty("colour1", QVariant(QColor(255, 0, 0)));
        STOP->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        ANA200 = new QESimpleShape(RgaLed);
        ANA200->setObjectName(QStringLiteral("ANA200"));
        ANA200->setGeometry(QRect(10, 140, 16, 16));
        ANA200->setShape(QSimpleShape::ellipse);
        ANA200->setProperty("colour7", QVariant(QColor(200, 200, 200)));
        ANA200->setProperty("colour8", QVariant(QColor(0, 200, 0)));
        ANA200->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));
        BAR100 = new QESimpleShape(RgaLed);
        BAR100->setObjectName(QStringLiteral("BAR100"));
        BAR100->setGeometry(QRect(10, 80, 16, 16));
        BAR100->setShape(QSimpleShape::ellipse);
        BAR100->setProperty("colour6", QVariant(QColor(0, 200, 0)));
        BAR100->setProperty("displayAlarmStateOption", QVariant(QESimpleShape::Never));

        retranslateUi(RgaLed);

        QMetaObject::connectSlotsByName(RgaLed);
    } // setupUi

    void retranslateUi(QEGroupBox *RgaLed)
    {
        RgaLed->setWindowTitle(QApplication::translate("RgaLed", "EGroupBox", 0));
        RgaLed->setTitle(QApplication::translate("RgaLed", "RGA", 0));
        BAR200->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):HEADSTA", 0)));
        SS->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):SCAN", 0)));
        BAR50->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):HEADSTA", 0)));
        STOP->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):HEADSTA", 0)));
        STOP->setProperty("variableSubstitutions", QVariant(QString()));
        ANA200->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):HEADSTA", 0)));
        BAR100->setProperty("variable", QVariant(QApplication::translate("RgaLed", "$(RGA1):HEADSTA", 0)));
    } // retranslateUi

};

namespace Ui {
    class RgaLed: public Ui_RgaLed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV2_WIDGET_LED_H
