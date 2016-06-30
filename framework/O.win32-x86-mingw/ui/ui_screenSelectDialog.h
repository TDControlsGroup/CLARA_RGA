/********************************************************************************
** Form generated from reading UI file 'screenSelectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSELECTDIALOG_H
#define UI_SCREENSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_screenSelectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *screenSelectDialog)
    {
        if (screenSelectDialog->objectName().isEmpty())
            screenSelectDialog->setObjectName(QStringLiteral("screenSelectDialog"));
        screenSelectDialog->resize(292, 121);
        verticalLayout = new QVBoxLayout(screenSelectDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(screenSelectDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(screenSelectDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        buttonBox = new QDialogButtonBox(screenSelectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(screenSelectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), screenSelectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), screenSelectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(screenSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *screenSelectDialog)
    {
        screenSelectDialog->setWindowTitle(QApplication::translate("screenSelectDialog", "Screen Selection", 0));
        label->setText(QApplication::translate("screenSelectDialog", "There is more than one screen available.\n"
"What would you like to do?", 0));
    } // retranslateUi

};

namespace Ui {
    class screenSelectDialog: public Ui_screenSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSELECTDIALOG_H
