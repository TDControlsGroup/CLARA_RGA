/********************************************************************************
** Form generated from reading UI file 'barchart.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARCHART_H
#define UI_BARCHART_H

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
#include "QEAnalogIndicator.h"
#include "QEAnalogProgressBar.h"
#include "QEFrame.h"
#include "QEPlotter.h"
#include "QEPushButton.h"

QT_BEGIN_NAMESPACE

class Ui_barchart
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
    QLabel *label_26;
    QEAnalogProgressBar *qeanalogprogressbar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *barchart)
    {
        if (barchart->objectName().isEmpty())
            barchart->setObjectName(QStringLiteral("barchart"));
        barchart->resize(1218, 1000);
        actionClose = new QAction(barchart);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionClose_Window = new QAction(barchart);
        actionClose_Window->setObjectName(QStringLiteral("actionClose_Window"));
        centralwidget = new QWidget(barchart);
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
        label_3->setGeometry(QRect(610, 50, 241, 16));
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(370, 50, 91, 21));
        QFont font;
        font.setPointSize(8);
        label_26->setFont(font);
        qeanalogprogressbar = new QEAnalogProgressBar(centralwidget);
        qeanalogprogressbar->setObjectName(QStringLiteral("qeanalogprogressbar"));
        qeanalogprogressbar->setGeometry(QRect(460, 50, 131, 21));
        barchart->setCentralWidget(centralwidget);
        menubar = new QMenuBar(barchart);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1218, 21));
        barchart->setMenuBar(menubar);
        statusbar = new QStatusBar(barchart);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        barchart->setStatusBar(statusbar);

        retranslateUi(barchart);
        QObject::connect(qeplotter, SIGNAL(yCoordinateSelected(double)), lcdNumber_2, SLOT(display(double)));
        QObject::connect(qeplotter, SIGNAL(xCoordinateSelected(double)), lcdNumber, SLOT(display(double)));

        QMetaObject::connectSlotsByName(barchart);
    } // setupUi

    void retranslateUi(QMainWindow *barchart)
    {
        barchart->setWindowTitle(QApplication::translate("barchart", "MainWindow", 0));
        actionClose->setText(QApplication::translate("barchart", " Open as Window", 0));
        actionClose_Window->setText(QApplication::translate("barchart", "Close Tab", 0));
        qeplotter->setProperty("contextMenuEmitText", QVariant(QApplication::translate("barchart", "Export mass and pressure", 0)));
        qeplotter->setProperty("DataVariableX", QVariant(QApplication::translate("barchart", "=S-0.5", 0)));
        qeplotter->setProperty("DataVariableA", QVariant(QApplication::translate("barchart", "chas:BAR", 0)));
        qeplotter->setProperty("DataVariableB", QVariant(QApplication::translate("barchart", "chas:ANA", 0)));
        qeplotter->setProperty("DataVariableC", QVariant(QApplication::translate("barchart", "chcs:BAR", 0)));
        qeplotter->setProperty("DataVariableD", QVariant(QApplication::translate("barchart", "chds:BAR", 0)));
        qeplotter->setProperty("SizeVariableX", QVariant(QString()));
        qeplotter->setProperty("SizeVariableA", QVariant(QString()));
        qeplotter->setProperty("AliasNameX", QVariant(QApplication::translate("barchart", "Mass", 0)));
        qeplotter->setProperty("AliasNameA", QVariant(QApplication::translate("barchart", "RGA1", 0)));
        qeplotter->setProperty("AliasNameB", QVariant(QApplication::translate("barchart", "RGA2", 0)));
        qeplotter->setProperty("AliasNameC", QVariant(QApplication::translate("barchart", "RGA3", 0)));
        qeplotter->setProperty("AliasNameD", QVariant(QApplication::translate("barchart", "RGA4", 0)));
        qeplotter->setProperty("AliasNameE", QVariant(QString()));
        qepushbutton_27->setText(QApplication::translate("barchart", "RGA 50", 0));
        qepushbutton_27->setProperty("variable", QVariant(QString()));
        qepushbutton_27->setProperty("altReadbackVariable", QVariant(QString()));
        qepushbutton_27->setPressText(QApplication::translate("barchart", "1", 0));
        qepushbutton_27->setProperty("guiFile", QVariant(QApplication::translate("barchart", "barchart.ui", 0)));
        groupBox->setTitle(QApplication::translate("barchart", "Right click to read mass and pressure", 0));
        label->setText(QApplication::translate("barchart", "Mass (X axis)", 0));
        label_2->setText(QApplication::translate("barchart", "Pressure (Y axis)", 0));
        label_3->setText(QApplication::translate("barchart", "Note: Drag and click to zoom axis. Dx to reset.", 0));
        label_26->setText(QApplication::translate("barchart", "Percent scanned:", 0));
        qeanalogprogressbar->setProperty("variable", QVariant(QApplication::translate("barchart", "chas:PERSCANNED", 0)));
    } // retranslateUi

};

namespace Ui {
    class barchart: public Ui_barchart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARCHART_H
