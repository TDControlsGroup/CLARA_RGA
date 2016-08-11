/********************************************************************************
** Form generated from reading UI file 'QEStripChartAdjustPVDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QESTRIPCHARTADJUSTPVDIALOG_H
#define UI_QESTRIPCHARTADJUSTPVDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QEStripChartAdjustPVDialog
{
public:
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *originEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *slopeEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *offsetEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *loprHoprButton;
    QPushButton *plottedButton;
    QPushButton *bufferedButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *QEStripChartAdjustPVDialog)
    {
        if (QEStripChartAdjustPVDialog->objectName().isEmpty())
            QEStripChartAdjustPVDialog->setObjectName(QStringLiteral("QEStripChartAdjustPVDialog"));
        QEStripChartAdjustPVDialog->resize(418, 201);
        horizontalLayout_6 = new QHBoxLayout(QEStripChartAdjustPVDialog);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        title = new QLabel(QEStripChartAdjustPVDialog);
        title->setObjectName(QStringLiteral("title"));
        title->setMinimumSize(QSize(0, 18));
        title->setMaximumSize(QSize(16777215, 18));
        title->setStyleSheet(QStringLiteral("QWidget  { background-color: #a0e0ff; }"));
        title->setFrameShape(QFrame::Box);
        title->setFrameShadow(QFrame::Plain);
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QEStripChartAdjustPVDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setIndent(4);

        horizontalLayout->addWidget(label);

        originEdit = new QLineEdit(QEStripChartAdjustPVDialog);
        originEdit->setObjectName(QStringLiteral("originEdit"));
        originEdit->setMinimumSize(QSize(240, 0));
        originEdit->setMaxLength(22);

        horizontalLayout->addWidget(originEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(QEStripChartAdjustPVDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setIndent(4);

        horizontalLayout_2->addWidget(label_2);

        slopeEdit = new QLineEdit(QEStripChartAdjustPVDialog);
        slopeEdit->setObjectName(QStringLiteral("slopeEdit"));
        slopeEdit->setMinimumSize(QSize(240, 0));
        slopeEdit->setMaxLength(22);

        horizontalLayout_2->addWidget(slopeEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(QEStripChartAdjustPVDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setIndent(4);

        horizontalLayout_5->addWidget(label_3);

        offsetEdit = new QLineEdit(QEStripChartAdjustPVDialog);
        offsetEdit->setObjectName(QStringLiteral("offsetEdit"));
        offsetEdit->setMinimumSize(QSize(240, 0));
        offsetEdit->setMaxLength(22);

        horizontalLayout_5->addWidget(offsetEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        loprHoprButton = new QPushButton(QEStripChartAdjustPVDialog);
        loprHoprButton->setObjectName(QStringLiteral("loprHoprButton"));
        loprHoprButton->setMinimumSize(QSize(96, 0));
        loprHoprButton->setMaximumSize(QSize(96, 16777215));

        horizontalLayout_4->addWidget(loprHoprButton);

        plottedButton = new QPushButton(QEStripChartAdjustPVDialog);
        plottedButton->setObjectName(QStringLiteral("plottedButton"));
        plottedButton->setMinimumSize(QSize(96, 0));
        plottedButton->setMaximumSize(QSize(96, 16777215));

        horizontalLayout_4->addWidget(plottedButton);

        bufferedButton = new QPushButton(QEStripChartAdjustPVDialog);
        bufferedButton->setObjectName(QStringLiteral("bufferedButton"));
        bufferedButton->setMinimumSize(QSize(96, 0));
        bufferedButton->setMaximumSize(QSize(96, 16777215));

        horizontalLayout_4->addWidget(bufferedButton);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        resetButton = new QPushButton(QEStripChartAdjustPVDialog);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setMinimumSize(QSize(96, 0));
        resetButton->setMaximumSize(QSize(96, 16777215));

        horizontalLayout_3->addWidget(resetButton);

        buttonBox = new QDialogButtonBox(QEStripChartAdjustPVDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setMinimumSize(QSize(196, 0));
        buttonBox->setMaximumSize(QSize(196, 16777215));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout);


        retranslateUi(QEStripChartAdjustPVDialog);

        QMetaObject::connectSlotsByName(QEStripChartAdjustPVDialog);
    } // setupUi

    void retranslateUi(QWidget *QEStripChartAdjustPVDialog)
    {
        QEStripChartAdjustPVDialog->setWindowTitle(QApplication::translate("QEStripChartAdjustPVDialog", "Strip Chart Adjust/Scale PV", 0));
        title->setText(QApplication::translate("QEStripChartAdjustPVDialog", "Y' := (Y - d) * m + c", 0));
        label->setText(QApplication::translate("QEStripChartAdjustPVDialog", "Origin (d)   ", 0));
        label_2->setText(QApplication::translate("QEStripChartAdjustPVDialog", "Slope (m)", 0));
        label_3->setText(QApplication::translate("QEStripChartAdjustPVDialog", "Offset (c)", 0));
        loprHoprButton->setText(QApplication::translate("QEStripChartAdjustPVDialog", "HOPR/LOPR", 0));
        plottedButton->setText(QApplication::translate("QEStripChartAdjustPVDialog", "Plotted", 0));
        bufferedButton->setText(QApplication::translate("QEStripChartAdjustPVDialog", "Buffered", 0));
        resetButton->setText(QApplication::translate("QEStripChartAdjustPVDialog", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class QEStripChartAdjustPVDialog: public Ui_QEStripChartAdjustPVDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QESTRIPCHARTADJUSTPVDIALOG_H
