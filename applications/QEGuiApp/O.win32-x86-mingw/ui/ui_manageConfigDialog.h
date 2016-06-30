/********************************************************************************
** Form generated from reading UI file 'manageConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGECONFIGDIALOG_H
#define UI_MANAGECONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_manageConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteDefaultPushButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *namesListWidget;
    QPushButton *deletePushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *manageConfigDialog)
    {
        if (manageConfigDialog->objectName().isEmpty())
            manageConfigDialog->setObjectName(QStringLiteral("manageConfigDialog"));
        manageConfigDialog->resize(314, 360);
        verticalLayout = new QVBoxLayout(manageConfigDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(manageConfigDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        deleteDefaultPushButton = new QPushButton(groupBox_2);
        deleteDefaultPushButton->setObjectName(QStringLiteral("deleteDefaultPushButton"));

        horizontalLayout_2->addWidget(deleteDefaultPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(manageConfigDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        namesListWidget = new QListWidget(groupBox);
        namesListWidget->setObjectName(QStringLiteral("namesListWidget"));
        namesListWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

        horizontalLayout->addWidget(namesListWidget);

        deletePushButton = new QPushButton(groupBox);
        deletePushButton->setObjectName(QStringLiteral("deletePushButton"));

        horizontalLayout->addWidget(deletePushButton);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(manageConfigDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(manageConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), manageConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), manageConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(manageConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *manageConfigDialog)
    {
        manageConfigDialog->setWindowTitle(QApplication::translate("manageConfigDialog", "Manage Configurations", 0));
        groupBox_2->setTitle(QApplication::translate("manageConfigDialog", "Default configuration", 0));
        deleteDefaultPushButton->setText(QApplication::translate("manageConfigDialog", "Delete", 0));
        groupBox->setTitle(QApplication::translate("manageConfigDialog", "Named configurations", 0));
        deletePushButton->setText(QApplication::translate("manageConfigDialog", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class manageConfigDialog: public Ui_manageConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGECONFIGDIALOG_H
