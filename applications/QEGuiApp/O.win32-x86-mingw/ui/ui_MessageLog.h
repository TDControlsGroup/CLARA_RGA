/********************************************************************************
** Form generated from reading UI file 'MessageLog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGELOG_H
#define UI_MESSAGELOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QELogManager.h"

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QELog *qelog;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(697, 383);
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        qelog = new QELog(Form);
        qelog->setObjectName(QStringLiteral("qelog"));
        qelog->setMessageFormFilter(QELog::Any);
        qelog->setMessageSourceFilter(QELog::Any);

        verticalLayout->addWidget(qelog);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Message Log", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGELOG_H
