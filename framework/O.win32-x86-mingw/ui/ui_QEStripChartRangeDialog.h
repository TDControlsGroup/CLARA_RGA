/********************************************************************************
** Form generated from reading UI file 'QEStripChartRangeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QESTRIPCHARTRANGEDIALOG_H
#define UI_QESTRIPCHARTRANGEDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QEStripChartRangeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *minimumEdit;
    QLineEdit *maximumEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *QEStripChartRangeDialog)
    {
        if (QEStripChartRangeDialog->objectName().isEmpty())
            QEStripChartRangeDialog->setObjectName(QStringLiteral("QEStripChartRangeDialog"));
        QEStripChartRangeDialog->resize(411, 100);
        verticalLayout = new QVBoxLayout(QEStripChartRangeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QEStripChartRangeDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(QEStripChartRangeDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minimumEdit = new QLineEdit(QEStripChartRangeDialog);
        minimumEdit->setObjectName(QStringLiteral("minimumEdit"));
        minimumEdit->setMaxLength(22);

        horizontalLayout_2->addWidget(minimumEdit);

        maximumEdit = new QLineEdit(QEStripChartRangeDialog);
        maximumEdit->setObjectName(QStringLiteral("maximumEdit"));
        maximumEdit->setMaxLength(22);

        horizontalLayout_2->addWidget(maximumEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(QEStripChartRangeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(QEStripChartRangeDialog);

        QMetaObject::connectSlotsByName(QEStripChartRangeDialog);
    } // setupUi

    void retranslateUi(QWidget *QEStripChartRangeDialog)
    {
        QEStripChartRangeDialog->setWindowTitle(QApplication::translate("QEStripChartRangeDialog", "Strip Chart Range", 0));
        label->setText(QApplication::translate("QEStripChartRangeDialog", "Minimum", 0));
        label_2->setText(QApplication::translate("QEStripChartRangeDialog", "Maximum", 0));
    } // retranslateUi

};

namespace Ui {
    class QEStripChartRangeDialog: public Ui_QEStripChartRangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QESTRIPCHARTRANGEDIALOG_H
