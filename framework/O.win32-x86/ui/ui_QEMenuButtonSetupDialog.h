/********************************************************************************
** Form generated from reading UI file 'QEMenuButtonSetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEMENUBUTTONSETUPDIALOG_H
#define UI_QEMENUBUTTONSETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QEMenuButtonSetupDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFrame *propertyFrame;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLineEdit *menuItemName;
    QPushButton *pushButton_01;
    QLabel *label_16;
    QCheckBox *useSeperator;
    QPushButton *pushButton_12;
    QLabel *label_13;
    QLabel *label_7;
    QLineEdit *programName;
    QPushButton *pushButton_02;
    QLabel *label_6;
    QLineEdit *programArguments;
    QPushButton *pushButton_03;
    QLabel *label_5;
    QLineEdit *variableValue;
    QComboBox *programOptions;
    QPushButton *pushButton_04;
    QLabel *label_15;
    QLabel *label_8;
    QLineEdit *openUiFilename;
    QPushButton *pushButton_05;
    QLabel *label_9;
    QComboBox *openCreateOption;
    QPushButton *pushButton_06;
    QLabel *label_10;
    QLineEdit *openPrioritySubstitutions;
    QPushButton *pushButton_07;
    QLabel *label_11;
    QLineEdit *openCustomisationName;
    QPushButton *pushButton_08;
    QLabel *label_14;
    QLabel *label_1;
    QLineEdit *variableName;
    QPushButton *pushButton_09;
    QLabel *label_2;
    QPushButton *pushButton_10;
    QLabel *label_3;
    QComboBox *variableFormat;
    QPushButton *pushButton_11;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QEMenuButtonSetupDialog)
    {
        if (QEMenuButtonSetupDialog->objectName().isEmpty())
            QEMenuButtonSetupDialog->setObjectName(QStringLiteral("QEMenuButtonSetupDialog"));
        QEMenuButtonSetupDialog->resize(832, 480);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QEMenuButtonSetupDialog->sizePolicy().hasHeightForWidth());
        QEMenuButtonSetupDialog->setSizePolicy(sizePolicy);
        QEMenuButtonSetupDialog->setMinimumSize(QSize(740, 480));
        horizontalLayout = new QHBoxLayout(QEMenuButtonSetupDialog);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeView = new QTreeView(QEMenuButtonSetupDialog);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setMinimumSize(QSize(260, 460));
        treeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout->addWidget(treeView);

        widget = new QWidget(QEMenuButtonSetupDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 440));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        propertyFrame = new QFrame(widget);
        propertyFrame->setObjectName(QStringLiteral("propertyFrame"));
        propertyFrame->setEnabled(true);
        propertyFrame->setMinimumSize(QSize(412, 412));
        propertyFrame->setFrameShape(QFrame::StyledPanel);
        propertyFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(propertyFrame);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_12 = new QLabel(propertyFrame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(142, 17));
        label_12->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_12, 0, 0, 1, 1);

        menuItemName = new QLineEdit(propertyFrame);
        menuItemName->setObjectName(QStringLiteral("menuItemName"));
        menuItemName->setMinimumSize(QSize(172, 23));
        menuItemName->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(menuItemName, 0, 1, 1, 1);

        pushButton_01 = new QPushButton(propertyFrame);
        pushButton_01->setObjectName(QStringLiteral("pushButton_01"));
        pushButton_01->setMinimumSize(QSize(27, 23));
        pushButton_01->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_01, 0, 2, 1, 1);

        label_16 = new QLabel(propertyFrame);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(142, 17));
        label_16->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        useSeperator = new QCheckBox(propertyFrame);
        useSeperator->setObjectName(QStringLiteral("useSeperator"));
        useSeperator->setMinimumSize(QSize(166, 22));

        gridLayout->addWidget(useSeperator, 1, 1, 1, 1);

        pushButton_12 = new QPushButton(propertyFrame);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(27, 23));
        pushButton_12->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_12, 1, 2, 1, 1);

        label_13 = new QLabel(propertyFrame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(400, 20));
        label_13->setMaximumSize(QSize(16777215, 20));
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 2, 0, 1, 3);

        label_7 = new QLabel(propertyFrame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(142, 17));
        label_7->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        programName = new QLineEdit(propertyFrame);
        programName->setObjectName(QStringLiteral("programName"));
        programName->setMinimumSize(QSize(172, 23));
        programName->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(programName, 3, 1, 1, 1);

        pushButton_02 = new QPushButton(propertyFrame);
        pushButton_02->setObjectName(QStringLiteral("pushButton_02"));
        pushButton_02->setMinimumSize(QSize(27, 23));
        pushButton_02->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_02, 3, 2, 1, 1);

        label_6 = new QLabel(propertyFrame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(142, 17));
        label_6->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        programArguments = new QLineEdit(propertyFrame);
        programArguments->setObjectName(QStringLiteral("programArguments"));
        programArguments->setMinimumSize(QSize(172, 23));
        programArguments->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(programArguments, 4, 1, 1, 1);

        pushButton_03 = new QPushButton(propertyFrame);
        pushButton_03->setObjectName(QStringLiteral("pushButton_03"));
        pushButton_03->setMinimumSize(QSize(27, 23));
        pushButton_03->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_03, 4, 2, 1, 1);

        label_5 = new QLabel(propertyFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(142, 17));
        label_5->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        variableValue = new QLineEdit(propertyFrame);
        variableValue->setObjectName(QStringLiteral("variableValue"));
        variableValue->setMinimumSize(QSize(172, 23));
        variableValue->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(variableValue, 13, 1, 1, 1);

        programOptions = new QComboBox(propertyFrame);
        programOptions->setObjectName(QStringLiteral("programOptions"));
        programOptions->setMinimumSize(QSize(172, 23));
        programOptions->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(programOptions, 5, 1, 1, 1);

        pushButton_04 = new QPushButton(propertyFrame);
        pushButton_04->setObjectName(QStringLiteral("pushButton_04"));
        pushButton_04->setMinimumSize(QSize(27, 23));
        pushButton_04->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_04, 5, 2, 1, 1);

        label_15 = new QLabel(propertyFrame);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(400, 20));
        label_15->setMaximumSize(QSize(16777215, 20));
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_15, 6, 0, 1, 3);

        label_8 = new QLabel(propertyFrame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(142, 17));
        label_8->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        openUiFilename = new QLineEdit(propertyFrame);
        openUiFilename->setObjectName(QStringLiteral("openUiFilename"));
        openUiFilename->setMinimumSize(QSize(172, 23));
        openUiFilename->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(openUiFilename, 7, 1, 1, 1);

        pushButton_05 = new QPushButton(propertyFrame);
        pushButton_05->setObjectName(QStringLiteral("pushButton_05"));
        pushButton_05->setMinimumSize(QSize(27, 23));
        pushButton_05->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_05, 7, 2, 1, 1);

        label_9 = new QLabel(propertyFrame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(142, 17));
        label_9->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        openCreateOption = new QComboBox(propertyFrame);
        openCreateOption->setObjectName(QStringLiteral("openCreateOption"));
        openCreateOption->setMinimumSize(QSize(172, 23));
        openCreateOption->setMaximumSize(QSize(16777215, 23));
        openCreateOption->setMaxVisibleItems(20);
        openCreateOption->setMaxCount(200);

        gridLayout->addWidget(openCreateOption, 8, 1, 1, 1);

        pushButton_06 = new QPushButton(propertyFrame);
        pushButton_06->setObjectName(QStringLiteral("pushButton_06"));
        pushButton_06->setMinimumSize(QSize(27, 23));
        pushButton_06->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_06, 8, 2, 1, 1);

        label_10 = new QLabel(propertyFrame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(142, 17));
        label_10->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        openPrioritySubstitutions = new QLineEdit(propertyFrame);
        openPrioritySubstitutions->setObjectName(QStringLiteral("openPrioritySubstitutions"));
        openPrioritySubstitutions->setMinimumSize(QSize(172, 23));
        openPrioritySubstitutions->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(openPrioritySubstitutions, 9, 1, 1, 1);

        pushButton_07 = new QPushButton(propertyFrame);
        pushButton_07->setObjectName(QStringLiteral("pushButton_07"));
        pushButton_07->setMinimumSize(QSize(27, 23));
        pushButton_07->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_07, 9, 2, 1, 1);

        label_11 = new QLabel(propertyFrame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(142, 17));
        label_11->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_11, 10, 0, 1, 1);

        openCustomisationName = new QLineEdit(propertyFrame);
        openCustomisationName->setObjectName(QStringLiteral("openCustomisationName"));
        openCustomisationName->setMinimumSize(QSize(172, 23));
        openCustomisationName->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(openCustomisationName, 10, 1, 1, 1);

        pushButton_08 = new QPushButton(propertyFrame);
        pushButton_08->setObjectName(QStringLiteral("pushButton_08"));
        pushButton_08->setMinimumSize(QSize(27, 23));
        pushButton_08->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_08, 10, 2, 1, 1);

        label_14 = new QLabel(propertyFrame);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(400, 20));
        label_14->setMaximumSize(QSize(16777215, 20));
        label_14->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 11, 0, 1, 3);

        label_1 = new QLabel(propertyFrame);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setMinimumSize(QSize(142, 17));
        label_1->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_1, 12, 0, 1, 1);

        variableName = new QLineEdit(propertyFrame);
        variableName->setObjectName(QStringLiteral("variableName"));
        variableName->setMinimumSize(QSize(172, 23));
        variableName->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(variableName, 12, 1, 1, 1);

        pushButton_09 = new QPushButton(propertyFrame);
        pushButton_09->setObjectName(QStringLiteral("pushButton_09"));
        pushButton_09->setMinimumSize(QSize(27, 23));
        pushButton_09->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_09, 12, 2, 1, 1);

        label_2 = new QLabel(propertyFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(142, 17));
        label_2->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_2, 13, 0, 1, 1);

        pushButton_10 = new QPushButton(propertyFrame);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(27, 23));
        pushButton_10->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_10, 13, 2, 1, 1);

        label_3 = new QLabel(propertyFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(142, 17));
        label_3->setMaximumSize(QSize(16777215, 17));

        gridLayout->addWidget(label_3, 14, 0, 1, 1);

        variableFormat = new QComboBox(propertyFrame);
        variableFormat->setObjectName(QStringLiteral("variableFormat"));
        variableFormat->setMinimumSize(QSize(172, 23));
        variableFormat->setMaximumSize(QSize(16777215, 23));

        gridLayout->addWidget(variableFormat, 14, 1, 1, 1);

        pushButton_11 = new QPushButton(propertyFrame);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(27, 23));
        pushButton_11->setMaximumSize(QSize(27, 23));

        gridLayout->addWidget(pushButton_11, 14, 2, 1, 1);


        verticalLayout->addWidget(propertyFrame);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setMinimumSize(QSize(168, 0));
        buttonBox->setMaximumSize(QSize(168, 16777215));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_14->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_14);


        horizontalLayout->addWidget(widget);


        retranslateUi(QEMenuButtonSetupDialog);

        QMetaObject::connectSlotsByName(QEMenuButtonSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *QEMenuButtonSetupDialog)
    {
        QEMenuButtonSetupDialog->setWindowTitle(QApplication::translate("QEMenuButtonSetupDialog", "Menu Button Setup", 0));
#ifndef QT_NO_TOOLTIP
        QEMenuButtonSetupDialog->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", "Element configuration", 0));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("QEMenuButtonSetupDialog", "name", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_01->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_01->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_16->setText(QString());
        useSeperator->setText(QApplication::translate("QEMenuButtonSetupDialog", "Preceeding Separator", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_12->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_12->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_13->setText(QApplication::translate("QEMenuButtonSetupDialog", "Run Command", 0));
        label_7->setText(QApplication::translate("QEMenuButtonSetupDialog", "program", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_02->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_02->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_6->setText(QApplication::translate("QEMenuButtonSetupDialog", "arguments", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_03->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_03->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_5->setText(QApplication::translate("QEMenuButtonSetupDialog", "start options", 0));
        programOptions->clear();
        programOptions->insertItems(0, QStringList()
         << QApplication::translate("QEMenuButtonSetupDialog", "None", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Terminal", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "LogOutput", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "StdOutput", 0)
        );
#ifndef QT_NO_TOOLTIP
        pushButton_04->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_04->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_15->setText(QApplication::translate("QEMenuButtonSetupDialog", "Open Related Display", 0));
        label_8->setText(QApplication::translate("QEMenuButtonSetupDialog", "gui File", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_05->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_05->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_9->setText(QApplication::translate("QEMenuButtonSetupDialog", "create option", 0));
        openCreateOption->clear();
        openCreateOption->insertItems(0, QStringList()
         << QApplication::translate("QEMenuButtonSetupDialog", "Open", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "New Tab", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "New Window", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Dock Top", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Dock Bottom", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Dock Left", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Dock Right", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Dock Top Tabbled", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Dock Bottom Tabbled", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Dock Left Tabbed", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Dock Right Tabbled", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Dock Floating", 0)
        );
#ifndef QT_NO_TOOLTIP
        pushButton_06->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_06->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_10->setText(QApplication::translate("QEMenuButtonSetupDialog", "priority substitutions", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_07->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_07->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_11->setText(QApplication::translate("QEMenuButtonSetupDialog", "custiomisation name", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_08->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_08->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_14->setText(QApplication::translate("QEMenuButtonSetupDialog", "Process Variable", 0));
        label_1->setText(QApplication::translate("QEMenuButtonSetupDialog", "variable", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_09->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_09->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_2->setText(QApplication::translate("QEMenuButtonSetupDialog", "click text", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_10->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_10->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
        label_3->setText(QApplication::translate("QEMenuButtonSetupDialog", "format", 0));
        variableFormat->clear();
        variableFormat->insertItems(0, QStringList()
         << QApplication::translate("QEMenuButtonSetupDialog", "Default", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Floating", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Integer", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "UnsignedInteger", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "Time", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "LocalEnumeraion", 0)
         << QApplication::translate("QEMenuButtonSetupDialog", "String", 0)
        );
#ifndef QT_NO_TOOLTIP
        pushButton_11->setToolTip(QApplication::translate("QEMenuButtonSetupDialog", " Reset ", 0));
#endif // QT_NO_TOOLTIP
        pushButton_11->setText(QApplication::translate("QEMenuButtonSetupDialog", "r", 0));
    } // retranslateUi

};

namespace Ui {
    class QEMenuButtonSetupDialog: public Ui_QEMenuButtonSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEMENUBUTTONSETUPDIALOG_H
