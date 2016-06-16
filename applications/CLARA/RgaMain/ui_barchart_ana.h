/********************************************************************************
** Form generated from reading UI file 'barchart_ana.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARCHART_ANA_H
#define UI_BARCHART_ANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "QEFrame.h"
#include "QEPlotter.h"
#include "QEPushButton.h"

QT_BEGIN_NAMESPACE

class Ui_anachart
{
public:
    QAction *actionClose;
    QAction *actionClose_Window;
    QWidget *centralwidget;
    QEPlotter *qeplotter;
    QEPushButton *qepushbutton_27;
    QGroupBox *groupBox;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *anachart)
    {
        if (anachart->objectName().isEmpty())
            anachart->setObjectName(QStringLiteral("anachart"));
        anachart->resize(1218, 1000);
        actionClose = new QAction(anachart);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionClose_Window = new QAction(anachart);
        actionClose_Window->setObjectName(QStringLiteral("actionClose_Window"));
        centralwidget = new QWidget(anachart);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        qeplotter = new QEPlotter(centralwidget);
        qeplotter->setObjectName(QStringLiteral("qeplotter"));
        qeplotter->setGeometry(QRect(40, 40, 1151, 721));
        qeplotter->setProperty("enableContextMenu", QVariant(true));
        qeplotter->setToolBarVisible(true);
        qeplotter->setPvItemsVisible(true);
        qeplotter->setStatusVisible(false);
        qeplotter->setYLogarithmic(true);
        qepushbutton_27 = new QEPushButton(centralwidget);
        qepushbutton_27->setObjectName(QStringLiteral("qepushbutton_27"));
        qepushbutton_27->setGeometry(QRect(40, 770, 81, 20));
        qepushbutton_27->setCheckable(false);
        qepushbutton_27->setProperty("creationOption", QVariant(QEPushButton::NewTab));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 800, 251, 111));
        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 50, 111, 51));
        lcdNumber->setDigitCount(3);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber_2 = new QLCDNumber(groupBox);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(130, 50, 111, 51));
        lcdNumber_2->setDigitCount(8);
        lcdNumber_2->setMode(QLCDNumber::Dec);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 71, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 30, 101, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 50, 241, 16));
        anachart->setCentralWidget(centralwidget);
        menubar = new QMenuBar(anachart);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1218, 21));
        anachart->setMenuBar(menubar);
        statusbar = new QStatusBar(anachart);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        anachart->setStatusBar(statusbar);

        retranslateUi(anachart);
        QObject::connect(qeplotter, SIGNAL(yCoordinateSelected(double)), lcdNumber_2, SLOT(display(double)));
        QObject::connect(qeplotter, SIGNAL(xCoordinateSelected(double)), lcdNumber, SLOT(display(double)));

        QMetaObject::connectSlotsByName(anachart);
    } // setupUi

    void retranslateUi(QMainWindow *anachart)
    {
        anachart->setWindowTitle(QApplication::translate("anachart", "MainWindow", 0));
        actionClose->setText(QApplication::translate("anachart", " Open as Window", 0));
        actionClose_Window->setText(QApplication::translate("anachart", "Close Tab", 0));
        qeplotter->setProperty("contextMenuEmitText", QVariant(QApplication::translate("anachart", "Export mass and pressure", 0)));
        qeplotter->setProperty("DataVariableX", QVariant(QApplication::translate("anachart", "=(S-0.5)/32", 0)));
        qeplotter->setProperty("DataVariableA", QVariant(QApplication::translate("anachart", "$(RGA1):ANA", 0)));
        qeplotter->setProperty("DataVariableB", QVariant(QApplication::translate("anachart", "$(RGA2):ANA", 0)));
        qeplotter->setProperty("DataVariableC", QVariant(QApplication::translate("anachart", "$(RGA3):ANA", 0)));
        qeplotter->setProperty("DataVariableD", QVariant(QApplication::translate("anachart", "$(RGA4):ANA", 0)));
        qeplotter->setProperty("DataVariableE", QVariant(QString()));
        qeplotter->setProperty("SizeVariableX", QVariant(QString()));
        qeplotter->setProperty("SizeVariableA", QVariant(QString()));
        qeplotter->setProperty("AliasNameX", QVariant(QApplication::translate("anachart", "Mass", 0)));
        qeplotter->setProperty("AliasNameA", QVariant(QApplication::translate("anachart", "$(RGANAME1)", 0)));
        qeplotter->setProperty("AliasNameB", QVariant(QApplication::translate("anachart", "$(RGANAME2)", 0)));
        qeplotter->setProperty("AliasNameC", QVariant(QApplication::translate("anachart", "$(RGANAME3)", 0)));
        qeplotter->setProperty("AliasNameD", QVariant(QApplication::translate("anachart", "$(RGANAME4)", 0)));
        qeplotter->setProperty("AliasNameE", QVariant(QString()));
        qepushbutton_27->setText(QApplication::translate("anachart", "RGA 50", 0));
        qepushbutton_27->setProperty("variable", QVariant(QString()));
        qepushbutton_27->setProperty("altReadbackVariable", QVariant(QString()));
        qepushbutton_27->setPressText(QApplication::translate("anachart", "1", 0));
        qepushbutton_27->setProperty("guiFile", QVariant(QApplication::translate("anachart", "barchart.ui", 0)));
        groupBox->setTitle(QApplication::translate("anachart", "Right click to read mass and pressure", 0));
        label->setText(QApplication::translate("anachart", "Mass (X axis)", 0));
        label_2->setText(QApplication::translate("anachart", "Pressure (Y axis)", 0));
        label_3->setText(QApplication::translate("anachart", "Note: Drag and click to zoom axis. Dx to reset.", 0));
    } // retranslateUi

};

namespace Ui {
    class anachart: public Ui_anachart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARCHART_ANA_H
