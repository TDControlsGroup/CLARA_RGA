/********************************************************************************
** Form generated from reading UI file 'QEWidgetDisplayDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEWIDGETDISPLAYDIALOG_H
#define UI_QEWIDGETDISPLAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "QESubstitutedLabel.h"

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QESubstitutedLabel *qesubstitutedlabel;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(400, 102);
        qesubstitutedlabel = new QESubstitutedLabel(Form);
        qesubstitutedlabel->setObjectName(QStringLiteral("qesubstitutedlabel"));
        qesubstitutedlabel->setGeometry(QRect(10, 20, 368, 41));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        qesubstitutedlabel->setText(QApplication::translate("Form", "---", 0));
        qesubstitutedlabel->setProperty("labelText", QVariant(QApplication::translate("Form", "Macros:  APPL = $(APPL)   BTN = $(BTN)", 0)));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEWIDGETDISPLAYDIALOG_H
