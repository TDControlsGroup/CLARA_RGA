/********************************************************************************
** Form generated from reading UI file 'aboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *QEGuiVersionLabel;
    QLabel *label_3;
    QLabel *QEFrameworkVersionQEGuiLabel;
    QLabel *QEFrameworkVersionUILoaderLabel;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_17;
    QLabel *QtInstalledPluginsLabel;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QListWidget *pathParameterList;
    QListWidget *pathVariableList;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_9;
    QLabel *userLevelLabel;
    QLabel *label_16;
    QPlainTextEdit *currentPathTextEdit;
    QPlainTextEdit *macroSubstitutionsTextEdit;
    QPlainTextEdit *systemPathLabelTextEdit;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *windowsTable;
    QWidget *tab_4;
    QGridLayout *gridLayout_4;
    QLabel *label_13;
    QLabel *configurationFileLabel;
    QLabel *configurationNameLabel;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_6;
    QLabel *internalDefaultCustomisationLabel;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *defaultWindowCustomisationNameLabel;
    QLabel *label_12;
    QLabel *defaultWindowCustomisationFileLabel;
    QLabel *label_15;
    QLabel *startupWindowCustomisationNameLabel;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QLabel *windowCustomisationLoadLogLabel;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_7;
    QGridLayout *gridLayout_5;
    QLabel *label_19;
    QLabel *label_18;
    QSpacerItem *verticalSpacer_5;
    QLabel *disconnectedChannelsLabel;
    QLabel *connectedChannelsLabel;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *aboutDialog)
    {
        if (aboutDialog->objectName().isEmpty())
            aboutDialog->setObjectName(QStringLiteral("aboutDialog"));
        aboutDialog->resize(762, 598);
        verticalLayout = new QVBoxLayout(aboutDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(aboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/qe/gui/icons/QEGuiIcon.png")));

        verticalLayout->addWidget(label);

        tabWidget = new QTabWidget(aboutDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        QEGuiVersionLabel = new QLabel(tab);
        QEGuiVersionLabel->setObjectName(QStringLiteral("QEGuiVersionLabel"));
        QEGuiVersionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(QEGuiVersionLabel, 0, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        QEFrameworkVersionQEGuiLabel = new QLabel(tab);
        QEFrameworkVersionQEGuiLabel->setObjectName(QStringLiteral("QEFrameworkVersionQEGuiLabel"));
        QEFrameworkVersionQEGuiLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(QEFrameworkVersionQEGuiLabel, 2, 1, 1, 1);

        QEFrameworkVersionUILoaderLabel = new QLabel(tab);
        QEFrameworkVersionUILoaderLabel->setObjectName(QStringLiteral("QEFrameworkVersionUILoaderLabel"));
        QEFrameworkVersionUILoaderLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(QEFrameworkVersionUILoaderLabel, 3, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);

        gridLayout->addWidget(label_17, 1, 0, 1, 1);

        QtInstalledPluginsLabel = new QLabel(tab);
        QtInstalledPluginsLabel->setObjectName(QStringLiteral("QtInstalledPluginsLabel"));
        QtInstalledPluginsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(QtInstalledPluginsLabel, 1, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        pathParameterList = new QListWidget(tab_2);
        pathParameterList->setObjectName(QStringLiteral("pathParameterList"));
        pathParameterList->setDragEnabled(false);
        pathParameterList->setWordWrap(true);

        gridLayout_2->addWidget(pathParameterList, 5, 1, 1, 1);

        pathVariableList = new QListWidget(tab_2);
        pathVariableList->setObjectName(QStringLiteral("pathVariableList"));

        gridLayout_2->addWidget(pathVariableList, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 11, 0, 1, 1);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        userLevelLabel = new QLabel(tab_2);
        userLevelLabel->setObjectName(QStringLiteral("userLevelLabel"));
        userLevelLabel->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(userLevelLabel, 0, 1, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font);

        gridLayout_2->addWidget(label_16, 9, 0, 1, 1);

        currentPathTextEdit = new QPlainTextEdit(tab_2);
        currentPathTextEdit->setObjectName(QStringLiteral("currentPathTextEdit"));
        currentPathTextEdit->setReadOnly(true);

        gridLayout_2->addWidget(currentPathTextEdit, 4, 1, 1, 1);

        macroSubstitutionsTextEdit = new QPlainTextEdit(tab_2);
        macroSubstitutionsTextEdit->setObjectName(QStringLiteral("macroSubstitutionsTextEdit"));
        macroSubstitutionsTextEdit->setReadOnly(true);

        gridLayout_2->addWidget(macroSubstitutionsTextEdit, 1, 1, 1, 1);

        systemPathLabelTextEdit = new QPlainTextEdit(tab_2);
        systemPathLabelTextEdit->setObjectName(QStringLiteral("systemPathLabelTextEdit"));
        systemPathLabelTextEdit->setReadOnly(true);

        gridLayout_2->addWidget(systemPathLabelTextEdit, 9, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        windowsTable = new QTableWidget(tab_3);
        if (windowsTable->columnCount() < 3)
            windowsTable->setColumnCount(3);
        windowsTable->setObjectName(QStringLiteral("windowsTable"));
        windowsTable->setColumnCount(3);

        verticalLayout_2->addWidget(windowsTable);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_4 = new QGridLayout(tab_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        gridLayout_4->addWidget(label_13, 0, 0, 1, 1);

        configurationFileLabel = new QLabel(tab_4);
        configurationFileLabel->setObjectName(QStringLiteral("configurationFileLabel"));
        configurationFileLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(configurationFileLabel, 0, 1, 1, 1);

        configurationNameLabel = new QLabel(tab_4);
        configurationNameLabel->setObjectName(QStringLiteral("configurationNameLabel"));
        configurationNameLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(configurationNameLabel, 1, 1, 1, 1);

        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        gridLayout_4->addWidget(label_14, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 2, 0, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);
        tabWidget->addTab(tab_4, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        internalDefaultCustomisationLabel = new QLabel(widget);
        internalDefaultCustomisationLabel->setObjectName(QStringLiteral("internalDefaultCustomisationLabel"));
        internalDefaultCustomisationLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_6->addWidget(internalDefaultCustomisationLabel, 0, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        gridLayout_6->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        gridLayout_6->addWidget(label_11, 1, 0, 1, 1);

        defaultWindowCustomisationNameLabel = new QLabel(widget);
        defaultWindowCustomisationNameLabel->setObjectName(QStringLiteral("defaultWindowCustomisationNameLabel"));
        defaultWindowCustomisationNameLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_6->addWidget(defaultWindowCustomisationNameLabel, 1, 1, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        gridLayout_6->addWidget(label_12, 3, 0, 1, 1);

        defaultWindowCustomisationFileLabel = new QLabel(widget);
        defaultWindowCustomisationFileLabel->setObjectName(QStringLiteral("defaultWindowCustomisationFileLabel"));
        defaultWindowCustomisationFileLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_6->addWidget(defaultWindowCustomisationFileLabel, 3, 1, 1, 1);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);

        gridLayout_6->addWidget(label_15, 2, 0, 1, 1);

        startupWindowCustomisationNameLabel = new QLabel(widget);
        startupWindowCustomisationNameLabel->setObjectName(QStringLiteral("startupWindowCustomisationNameLabel"));
        startupWindowCustomisationNameLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_6->addWidget(startupWindowCustomisationNameLabel, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_6, 3, 0, 1, 1);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 718, 335));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        windowCustomisationLoadLogLabel = new QLabel(scrollAreaWidgetContents);
        windowCustomisationLoadLogLabel->setObjectName(QStringLiteral("windowCustomisationLoadLogLabel"));
        windowCustomisationLoadLogLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        windowCustomisationLoadLogLabel->setWordWrap(true);
        windowCustomisationLoadLogLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_6->addWidget(windowCustomisationLoadLogLabel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);


        gridLayout_3->addWidget(groupBox, 4, 0, 1, 1);

        tabWidget->addTab(widget, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gridLayout_5 = new QGridLayout(tab_7);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_19 = new QLabel(tab_7);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font);

        gridLayout_5->addWidget(label_19, 0, 0, 1, 1);

        label_18 = new QLabel(tab_7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font);

        gridLayout_5->addWidget(label_18, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 410, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 3, 0, 1, 1);

        disconnectedChannelsLabel = new QLabel(tab_7);
        disconnectedChannelsLabel->setObjectName(QStringLiteral("disconnectedChannelsLabel"));
        disconnectedChannelsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(disconnectedChannelsLabel, 0, 1, 1, 1);

        connectedChannelsLabel = new QLabel(tab_7);
        connectedChannelsLabel->setObjectName(QStringLiteral("connectedChannelsLabel"));
        connectedChannelsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(connectedChannelsLabel, 1, 1, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);
        tabWidget->addTab(tab_7, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_3 = new QVBoxLayout(tab_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textEdit = new QTextEdit(tab_5);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_4 = new QVBoxLayout(tab_6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        textEdit_2 = new QTextEdit(tab_6);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setReadOnly(true);

        verticalLayout_4->addWidget(textEdit_2);

        tabWidget->addTab(tab_6, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(aboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(aboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), aboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), aboutDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(aboutDialog);
    } // setupUi

    void retranslateUi(QDialog *aboutDialog)
    {
        aboutDialog->setWindowTitle(QApplication::translate("aboutDialog", "QEGui About", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("aboutDialog", "QEGui version:", 0));
        QEGuiVersionLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        label_3->setText(QApplication::translate("aboutDialog", "QE Framework version (loaded by QEGui):", 0));
        QEFrameworkVersionQEGuiLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        QEFrameworkVersionUILoaderLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        label_4->setText(QApplication::translate("aboutDialog", "QE Framework version (loaded by UI loader):", 0));
        label_17->setText(QApplication::translate("aboutDialog", "Qt Installed Plugin location:", 0));
        QtInstalledPluginsLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("aboutDialog", "Versions", 0));
        label_5->setText(QApplication::translate("aboutDialog", "Macro Substitutions:\n"
"(current window)", 0));
        label_6->setText(QApplication::translate("aboutDialog", "Current Path:", 0));
        label_7->setText(QApplication::translate("aboutDialog", "Path List (-p parameter):", 0));
        label_8->setText(QApplication::translate("aboutDialog", "Path List:\n"
"(QE_UI_PATH  environment variable)", 0));
        label_9->setText(QApplication::translate("aboutDialog", "User Level:", 0));
        userLevelLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        label_16->setText(QApplication::translate("aboutDialog", "System path environment variable:\n"
"(Relevent when launching commands)", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("aboutDialog", "Environment", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("aboutDialog", "Windows", 0));
        label_13->setText(QApplication::translate("aboutDialog", "Configuration file:", 0));
        configurationFileLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        configurationNameLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        label_14->setText(QApplication::translate("aboutDialog", "Configuration name:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("aboutDialog", "Configuration", 0));
        internalDefaultCustomisationLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        label_10->setText(QApplication::translate("aboutDialog", "Internal Default Customisation Name:", 0));
        label_11->setText(QApplication::translate("aboutDialog", "Default Customisation Name:", 0));
        defaultWindowCustomisationNameLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        label_12->setText(QApplication::translate("aboutDialog", "Customisation File:", 0));
        defaultWindowCustomisationFileLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        label_15->setText(QApplication::translate("aboutDialog", "Startup Customisation Name:", 0));
        startupWindowCustomisationNameLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        groupBox->setTitle(QApplication::translate("aboutDialog", "Customisation load log:", 0));
        windowCustomisationLoadLogLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("aboutDialog", "Customisation", 0));
        label_19->setText(QApplication::translate("aboutDialog", "Disconnected channels:", 0));
        label_18->setText(QApplication::translate("aboutDialog", "Connected Channels:", 0));
        disconnectedChannelsLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        connectedChannelsLabel->setText(QApplication::translate("aboutDialog", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("aboutDialog", "Connections", 0));
        textEdit->setHtml(QApplication::translate("aboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">QEGui is part of the epicsqt framework. <a href=\"http://sourceforge.net/projects/epicsqt/\"><span style=\" text-decoration: underline; color:#0057ae;\">http://sourceforge.net/projects/epicsqt/</span></a><br />Contributors include: Andrew Rhyder, Andrew Starritt, Anthony Owen, Anton Maksimenko, Glenn Jackson, Ricardo Fernandes</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px;\">The epicsqt framework relies on QWT for plotting. <a href=\"http://sourceforge.net/projects/qwt/\"><span style=\" text-decoration: underline; color:#0057ae;\">http://sourceforge.net/projects/qwt/</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans';\"></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">To access the Channel Archive data, the epicsqt framework relies on the maiaXmlRpcClient and support classes written by Frerich Raabe &lt;raabe@kde.org&gt;, Ian Reinhart Geiser &lt;geiseri@kde.org&gt;, Karl Glatz and Sebastian Wiedenroth &lt;wiedi@frubar.net&gt;.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:12px; mar"
                        "gin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">When built with MPEG support, the epicsqt framework relies on FFmpeg for reading MPEG image streams. <span style=\" text-decoration: underline; color:#0057ae;\">http://www.ffmpeg.org/</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The QEGui application can be built to support caQtDM widgets provided by The Paul Scherrer Institute. <a href=\"http://epics.web.psi.ch/software/caqtdm/\"><span style=\" text-decoration: underline; color:#0057ae;\">http://epics.web.psi.ch/software/caqtdm/</span></a></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("aboutDialog", "Credits", 0));
        textEdit_2->setHtml(QApplication::translate("aboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">QEGui is part of the </span>epicsqt<span style=\" color:#000000;\"> framework which is free software: you can redistribute it and/or modify </span><span style=\" font-family:'Courier New,courier'; color:#000000;\">it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
                        "style=\" font-family:'Courier New,courier'; color:#000000;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; color:#000000;\">The EPICS QT Framework is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; color:#000000;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; color:#000000;\">You should have received a copy of the GNU Lesser General Public License along with the EP"
                        "ICS QT Framework.  If not, see </span><a href=\"http://www.gnu.org/licenses/\"><span style=\" text-decoration: underline; color:#0057ae;\">http://www.gnu.org/licenses/</span></a><span style=\" font-family:'Courier New,courier'; color:#000000;\">.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; color:#000000;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; color:#000000;\">Copyright (c) 2015</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("aboutDialog", "Licence", 0));
    } // retranslateUi

};

namespace Ui {
    class aboutDialog: public Ui_aboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
