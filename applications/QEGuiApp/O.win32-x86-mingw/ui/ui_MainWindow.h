/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionOpen;
    QAction *actionAbout;
    QAction *actionNew_Window;
    QAction *actionNew_Tab;
    QAction *actionClose;
    QAction *actionDesigner;
    QAction *actionOpen_Current_Form_In_Designer;
    QAction *actionRefresh_Current_Form;
    QAction *actionPVProperties;
    QAction *actionStrip_Chart;
    QAction *actionUser_Level;
    QAction *actionMessage_Log;
    QAction *actionSave_Configuration;
    QAction *actionRestore_Configuration;
    QAction *actionExit;
    QAction *actionSet_Passwords;
    QAction *actionManage_Configurations;
    QAction *actionList;
    QAction *actionPlotter;
    QAction *actionScratch_Pad;
    QAction *actionArchive_Status;
    QAction *actionNew_Dock;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(487, 106);
        actionOpen = new QAction(MainWindowClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionAbout = new QAction(MainWindowClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionNew_Window = new QAction(MainWindowClass);
        actionNew_Window->setObjectName(QStringLiteral("actionNew_Window"));
        actionNew_Tab = new QAction(MainWindowClass);
        actionNew_Tab->setObjectName(QStringLiteral("actionNew_Tab"));
        actionClose = new QAction(MainWindowClass);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionDesigner = new QAction(MainWindowClass);
        actionDesigner->setObjectName(QStringLiteral("actionDesigner"));
        actionOpen_Current_Form_In_Designer = new QAction(MainWindowClass);
        actionOpen_Current_Form_In_Designer->setObjectName(QStringLiteral("actionOpen_Current_Form_In_Designer"));
        actionRefresh_Current_Form = new QAction(MainWindowClass);
        actionRefresh_Current_Form->setObjectName(QStringLiteral("actionRefresh_Current_Form"));
        actionPVProperties = new QAction(MainWindowClass);
        actionPVProperties->setObjectName(QStringLiteral("actionPVProperties"));
        actionStrip_Chart = new QAction(MainWindowClass);
        actionStrip_Chart->setObjectName(QStringLiteral("actionStrip_Chart"));
        actionUser_Level = new QAction(MainWindowClass);
        actionUser_Level->setObjectName(QStringLiteral("actionUser_Level"));
        actionMessage_Log = new QAction(MainWindowClass);
        actionMessage_Log->setObjectName(QStringLiteral("actionMessage_Log"));
        actionSave_Configuration = new QAction(MainWindowClass);
        actionSave_Configuration->setObjectName(QStringLiteral("actionSave_Configuration"));
        actionRestore_Configuration = new QAction(MainWindowClass);
        actionRestore_Configuration->setObjectName(QStringLiteral("actionRestore_Configuration"));
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSet_Passwords = new QAction(MainWindowClass);
        actionSet_Passwords->setObjectName(QStringLiteral("actionSet_Passwords"));
        actionManage_Configurations = new QAction(MainWindowClass);
        actionManage_Configurations->setObjectName(QStringLiteral("actionManage_Configurations"));
        actionList = new QAction(MainWindowClass);
        actionList->setObjectName(QStringLiteral("actionList"));
        actionPlotter = new QAction(MainWindowClass);
        actionPlotter->setObjectName(QStringLiteral("actionPlotter"));
        actionScratch_Pad = new QAction(MainWindowClass);
        actionScratch_Pad->setObjectName(QStringLiteral("actionScratch_Pad"));
        actionArchive_Status = new QAction(MainWindowClass);
        actionArchive_Status->setObjectName(QStringLiteral("actionArchive_Status"));
        actionNew_Dock = new QAction(MainWindowClass);
        actionNew_Dock->setObjectName(QStringLiteral("actionNew_Dock"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 487, 21));
        MainWindowClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("MainWindowClass", "&Open", 0));
        actionAbout->setText(QApplication::translate("MainWindowClass", "About", 0));
        actionNew_Window->setText(QApplication::translate("MainWindowClass", "New Window", 0));
        actionNew_Tab->setText(QApplication::translate("MainWindowClass", "New Tab", 0));
        actionClose->setText(QApplication::translate("MainWindowClass", "Close", 0));
        actionDesigner->setText(QApplication::translate("MainWindowClass", "Designer...", 0));
        actionOpen_Current_Form_In_Designer->setText(QApplication::translate("MainWindowClass", "Open CurrentForm In Designer...", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen_Current_Form_In_Designer->setToolTip(QApplication::translate("MainWindowClass", "Open Current Form In Designer", 0));
#endif // QT_NO_TOOLTIP
        actionRefresh_Current_Form->setText(QApplication::translate("MainWindowClass", "Refresh Current Form", 0));
        actionPVProperties->setText(QApplication::translate("MainWindowClass", "PV Properties", 0));
        actionStrip_Chart->setText(QApplication::translate("MainWindowClass", "Strip Chart", 0));
        actionUser_Level->setText(QApplication::translate("MainWindowClass", "User Level...", 0));
        actionMessage_Log->setText(QApplication::translate("MainWindowClass", "Message Log", 0));
        actionSave_Configuration->setText(QApplication::translate("MainWindowClass", "Save Configuration...", 0));
        actionRestore_Configuration->setText(QApplication::translate("MainWindowClass", "Restore Configuration", 0));
        actionExit->setText(QApplication::translate("MainWindowClass", "Exit", 0));
        actionSet_Passwords->setText(QApplication::translate("MainWindowClass", "Set Passwords...", 0));
        actionManage_Configurations->setText(QApplication::translate("MainWindowClass", "Manage Configurations", 0));
        actionList->setText(QApplication::translate("MainWindowClass", "List", 0));
        actionPlotter->setText(QApplication::translate("MainWindowClass", "Plotter", 0));
        actionScratch_Pad->setText(QApplication::translate("MainWindowClass", "Scratch Pad", 0));
        actionArchive_Status->setText(QApplication::translate("MainWindowClass", "Archive Status", 0));
        actionNew_Dock->setText(QApplication::translate("MainWindowClass", "New Dock", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
