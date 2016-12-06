/********************************************************************************
** Form generated from reading UI file 'mv2_stripchart.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MV2_STRIPCHART_H
#define UI_MV2_STRIPCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QEFrame.h"
#include "QEStripChart.h"

QT_BEGIN_NAMESPACE

class Ui_stripWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QEStripChart *qestripchart;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *stripWindow)
    {
        if (stripWindow->objectName().isEmpty())
            stripWindow->setObjectName(QStringLiteral("stripWindow"));
        stripWindow->setWindowModality(Qt::NonModal);
        stripWindow->resize(1237, 871);
        centralwidget = new QWidget(stripWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        qestripchart = new QEStripChart(centralwidget);
        qestripchart->setObjectName(QStringLiteral("qestripchart"));

        verticalLayout->addWidget(qestripchart);

        stripWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(stripWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1237, 21));
        stripWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(stripWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        stripWindow->setStatusBar(statusbar);

        retranslateUi(stripWindow);

        QMetaObject::connectSlotsByName(stripWindow);
    } // setupUi

    void retranslateUi(QMainWindow *stripWindow)
    {
        stripWindow->setWindowTitle(QApplication::translate("stripWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class stripWindow: public Ui_stripWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MV2_STRIPCHART_H
