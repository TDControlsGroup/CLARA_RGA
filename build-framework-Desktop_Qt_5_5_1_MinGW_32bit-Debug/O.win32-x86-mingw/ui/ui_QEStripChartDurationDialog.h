/********************************************************************************
** Form generated from reading UI file 'QEStripChartDurationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QESTRIPCHARTDURATIONDIALOG_H
#define UI_QESTRIPCHARTDURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QEStripChartDurationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_1;
    QSpinBox *spinBox;
    QTimeEdit *endTimeEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *duration;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *QEStripChartDurationDialog)
    {
        if (QEStripChartDurationDialog->objectName().isEmpty())
            QEStripChartDurationDialog->setObjectName(QStringLiteral("QEStripChartDurationDialog"));
        QEStripChartDurationDialog->resize(336, 60);
        QEStripChartDurationDialog->setMinimumSize(QSize(336, 60));
        verticalLayout = new QVBoxLayout(QEStripChartDurationDialog);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 4, 4, 4);
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        spinBox = new QSpinBox(QEStripChartDurationDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(9999);

        horizontalLayout_1->addWidget(spinBox);

        endTimeEdit = new QTimeEdit(QEStripChartDurationDialog);
        endTimeEdit->setObjectName(QStringLiteral("endTimeEdit"));

        horizontalLayout_1->addWidget(endTimeEdit);


        verticalLayout->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        duration = new QLabel(QEStripChartDurationDialog);
        duration->setObjectName(QStringLiteral("duration"));
        duration->setMinimumSize(QSize(129, 0));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        duration->setFont(font);
        duration->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        duration->setIndent(4);

        horizontalLayout_2->addWidget(duration);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(QEStripChartDurationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setMinimumSize(QSize(180, 0));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(QEStripChartDurationDialog);

        QMetaObject::connectSlotsByName(QEStripChartDurationDialog);
    } // setupUi

    void retranslateUi(QWidget *QEStripChartDurationDialog)
    {
        QEStripChartDurationDialog->setWindowTitle(QApplication::translate("QEStripChartDurationDialog", "Strip Chart Duration", 0));
        spinBox->setSuffix(QApplication::translate("QEStripChartDurationDialog", " days", 0));
        duration->setText(QApplication::translate("QEStripChartDurationDialog", "-00000 00:00:00", 0));
    } // retranslateUi

};

namespace Ui {
    class QEStripChartDurationDialog: public Ui_QEStripChartDurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QESTRIPCHARTDURATIONDIALOG_H
