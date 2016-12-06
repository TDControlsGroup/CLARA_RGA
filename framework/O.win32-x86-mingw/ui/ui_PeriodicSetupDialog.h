/********************************************************************************
** Form generated from reading UI file 'PeriodicSetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERIODICSETUPDIALOG_H
#define UI_PERIODICSETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PeriodicSetupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *periodicGridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PeriodicSetupDialog)
    {
        if (PeriodicSetupDialog->objectName().isEmpty())
            PeriodicSetupDialog->setObjectName(QStringLiteral("PeriodicSetupDialog"));
        PeriodicSetupDialog->resize(1300, 950);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PeriodicSetupDialog->sizePolicy().hasHeightForWidth());
        PeriodicSetupDialog->setSizePolicy(sizePolicy);
        PeriodicSetupDialog->setMinimumSize(QSize(1300, 950));
        verticalLayout = new QVBoxLayout(PeriodicSetupDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        periodicGridLayout = new QGridLayout();
        periodicGridLayout->setObjectName(QStringLiteral("periodicGridLayout"));
        periodicGridLayout->setSizeConstraint(QLayout::SetNoConstraint);

        verticalLayout->addLayout(periodicGridLayout);

        buttonBox = new QDialogButtonBox(PeriodicSetupDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PeriodicSetupDialog);

        QMetaObject::connectSlotsByName(PeriodicSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *PeriodicSetupDialog)
    {
        PeriodicSetupDialog->setWindowTitle(QApplication::translate("PeriodicSetupDialog", "QEPeriodic - Element configuration", 0));
#ifndef QT_NO_TOOLTIP
        PeriodicSetupDialog->setToolTip(QApplication::translate("PeriodicSetupDialog", "Element configuration", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PeriodicSetupDialog: public Ui_PeriodicSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERIODICSETUPDIALOG_H
