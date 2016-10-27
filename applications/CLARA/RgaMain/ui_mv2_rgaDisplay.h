/********************************************************************************
** Form generated from reading UI file 'mv2_rgaDisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MV2_RGADISPLAY_H
#define UI_MV2_RGADISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "RgaStatus.h"

QT_BEGIN_NAMESPACE

class Ui_rgaWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *status;
    RgaStatus *status_1;
    RgaStatus *status_4;
    RgaStatus *status_2;
    RgaStatus *status_5;
    RgaStatus *status_3;
    RgaStatus *status_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *rgaWindow)
    {
        if (rgaWindow->objectName().isEmpty())
            rgaWindow->setObjectName(QStringLiteral("rgaWindow"));
        rgaWindow->resize(1212, 707);
        centralwidget = new QWidget(rgaWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        status = new QGroupBox(centralwidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(0, 0, 1191, 631));
        status_1 = new RgaStatus(status);
        status_1->setObjectName(QStringLiteral("status_1"));
        status_1->setGeometry(QRect(10, 20, 579, 201));
        status_4 = new RgaStatus(status);
        status_4->setObjectName(QStringLiteral("status_4"));
        status_4->setGeometry(QRect(600, 20, 579, 201));
        status_2 = new RgaStatus(status);
        status_2->setObjectName(QStringLiteral("status_2"));
        status_2->setGeometry(QRect(10, 220, 579, 201));
        status_5 = new RgaStatus(status);
        status_5->setObjectName(QStringLiteral("status_5"));
        status_5->setGeometry(QRect(600, 220, 579, 201));
        status_3 = new RgaStatus(status);
        status_3->setObjectName(QStringLiteral("status_3"));
        status_3->setGeometry(QRect(10, 420, 579, 201));
        status_6 = new RgaStatus(status);
        status_6->setObjectName(QStringLiteral("status_6"));
        status_6->setGeometry(QRect(600, 420, 579, 201));
        rgaWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(rgaWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1212, 21));
        rgaWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(rgaWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        rgaWindow->setStatusBar(statusbar);

        retranslateUi(rgaWindow);

        QMetaObject::connectSlotsByName(rgaWindow);
    } // setupUi

    void retranslateUi(QMainWindow *rgaWindow)
    {
        rgaWindow->setWindowTitle(QApplication::translate("rgaWindow", "MainWindow", 0));
        status->setTitle(QApplication::translate("rgaWindow", "RGA Status:", 0));
        status_1->setTitle(QApplication::translate("rgaWindow", "status_1", 0));
        status_4->setTitle(QApplication::translate("rgaWindow", "status_4", 0));
        status_2->setTitle(QApplication::translate("rgaWindow", "status_2", 0));
        status_5->setTitle(QApplication::translate("rgaWindow", "status_5", 0));
        status_3->setTitle(QApplication::translate("rgaWindow", "status_3", 0));
        status_6->setTitle(QApplication::translate("rgaWindow", "status_6", 0));
    } // retranslateUi

};

namespace Ui {
    class rgaWindow: public Ui_rgaWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV2_RGADISPLAY_H
