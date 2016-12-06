/********************************************************************************
** Form generated from reading UI file 'QEPvLoadSaveValueEditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEPVLOADSAVEVALUEEDITDIALOG_H
#define UI_QEPVLOADSAVEVALUEEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QEPvLoadSaveValueEditDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *fixed_label_3;
    QSpinBox *elementIndexEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *fixed_label_4;
    QSpinBox *numberElementsEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *fixed_label_2;
    QLineEdit *valueEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *QEPvLoadSaveValueEditDialog)
    {
        if (QEPvLoadSaveValueEditDialog->objectName().isEmpty())
            QEPvLoadSaveValueEditDialog->setObjectName(QStringLiteral("QEPvLoadSaveValueEditDialog"));
        QEPvLoadSaveValueEditDialog->resize(488, 125);
        QEPvLoadSaveValueEditDialog->setMaximumSize(QSize(600, 140));
        verticalLayout_2 = new QVBoxLayout(QEPvLoadSaveValueEditDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 2, 6, 6);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLabel = new QLabel(QEPvLoadSaveValueEditDialog);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(400, 0));
        QFont font;
        font.setPointSize(12);
        nameLabel->setFont(font);
        nameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(nameLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        fixed_label_3 = new QLabel(QEPvLoadSaveValueEditDialog);
        fixed_label_3->setObjectName(QStringLiteral("fixed_label_3"));
        fixed_label_3->setMinimumSize(QSize(132, 0));
        fixed_label_3->setMaximumSize(QSize(132, 16777215));
        fixed_label_3->setIndent(0);

        horizontalLayout_3->addWidget(fixed_label_3);

        elementIndexEdit = new QSpinBox(QEPvLoadSaveValueEditDialog);
        elementIndexEdit->setObjectName(QStringLiteral("elementIndexEdit"));
        elementIndexEdit->setMinimumSize(QSize(69, 0));
        elementIndexEdit->setMaximumSize(QSize(68, 16777215));
        elementIndexEdit->setMinimum(1);
        elementIndexEdit->setMaximum(10000);

        horizontalLayout_3->addWidget(elementIndexEdit);

        horizontalSpacer_2 = new QSpacerItem(400, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        fixed_label_4 = new QLabel(QEPvLoadSaveValueEditDialog);
        fixed_label_4->setObjectName(QStringLiteral("fixed_label_4"));
        fixed_label_4->setMinimumSize(QSize(148, 0));
        fixed_label_4->setMaximumSize(QSize(148, 16777215));
        fixed_label_4->setIndent(0);

        horizontalLayout_3->addWidget(fixed_label_4);

        numberElementsEdit = new QSpinBox(QEPvLoadSaveValueEditDialog);
        numberElementsEdit->setObjectName(QStringLiteral("numberElementsEdit"));
        numberElementsEdit->setMinimumSize(QSize(68, 0));
        numberElementsEdit->setMaximumSize(QSize(68, 16777215));
        numberElementsEdit->setMinimum(1);
        numberElementsEdit->setMaximum(10000);
        numberElementsEdit->setValue(1);

        horizontalLayout_3->addWidget(numberElementsEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        fixed_label_2 = new QLabel(QEPvLoadSaveValueEditDialog);
        fixed_label_2->setObjectName(QStringLiteral("fixed_label_2"));
        fixed_label_2->setMinimumSize(QSize(44, 0));
        fixed_label_2->setMaximumSize(QSize(44, 16777215));
        fixed_label_2->setIndent(0);

        horizontalLayout_2->addWidget(fixed_label_2);

        valueEdit = new QLineEdit(QEPvLoadSaveValueEditDialog);
        valueEdit->setObjectName(QStringLiteral("valueEdit"));
        valueEdit->setMinimumSize(QSize(400, 0));

        horizontalLayout_2->addWidget(valueEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(600, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(QEPvLoadSaveValueEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setMinimumSize(QSize(162, 0));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(QEPvLoadSaveValueEditDialog);

        QMetaObject::connectSlotsByName(QEPvLoadSaveValueEditDialog);
    } // setupUi

    void retranslateUi(QWidget *QEPvLoadSaveValueEditDialog)
    {
        QEPvLoadSaveValueEditDialog->setWindowTitle(QApplication::translate("QEPvLoadSaveValueEditDialog", "QEPvLoadSave - Value Edit", 0));
        nameLabel->setText(QApplication::translate("QEPvLoadSaveValueEditDialog", "PV Name...", 0));
        fixed_label_3->setText(QApplication::translate("QEPvLoadSaveValueEditDialog", "Selected Element:", 0));
        fixed_label_4->setText(QApplication::translate("QEPvLoadSaveValueEditDialog", "Number of elements:", 0));
        fixed_label_2->setText(QApplication::translate("QEPvLoadSaveValueEditDialog", "Value", 0));
        valueEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QEPvLoadSaveValueEditDialog: public Ui_QEPvLoadSaveValueEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEPVLOADSAVEVALUEEDITDIALOG_H
