/********************************************************************************
** Form generated from reading UI file 'QEStripChartStatistics.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QESTRIPCHARTSTATISTICS_H
#define UI_QESTRIPCHARTSTATISTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QEStripChartStatistics
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *pvNameLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *startTimeLabel;
    QLabel *label_5;
    QLabel *endTimeLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *numberOfPointsLabel;
    QLabel *label_9;
    QLabel *validPointsLabel;
    QLabel *label_11;
    QLabel *durationLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLabel *meanLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *label_15;
    QLabel *meanRateOfChangeLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_19;
    QLabel *minimumLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_20;
    QLabel *standardDeviationLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_23;
    QLabel *maximumLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_24;
    QLabel *areaUnderCurveLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_27;
    QLabel *minMaxDiffLabel;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_28;
    QLabel *firstLastDiffLabel;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *updateButton;

    void setupUi(QWidget *QEStripChartStatistics)
    {
        if (QEStripChartStatistics->objectName().isEmpty())
            QEStripChartStatistics->setObjectName(QStringLiteral("QEStripChartStatistics"));
        QEStripChartStatistics->resize(700, 248);
        QEStripChartStatistics->setMinimumSize(QSize(700, 248));
        QEStripChartStatistics->setMaximumSize(QSize(960, 248));
        verticalLayout = new QVBoxLayout(QEStripChartStatistics);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QEStripChartStatistics);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(label);

        pvNameLabel = new QLabel(QEStripChartStatistics);
        pvNameLabel->setObjectName(QStringLiteral("pvNameLabel"));
        pvNameLabel->setMinimumSize(QSize(229, 0));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setBold(true);
        font.setWeight(75);
        pvNameLabel->setFont(font);
        pvNameLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        pvNameLabel->setIndent(6);

        horizontalLayout->addWidget(pvNameLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(QEStripChartStatistics);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(80, 0));
        label_3->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(label_3);

        startTimeLabel = new QLabel(QEStripChartStatistics);
        startTimeLabel->setObjectName(QStringLiteral("startTimeLabel"));
        startTimeLabel->setFont(font);
        startTimeLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        startTimeLabel->setIndent(6);

        horizontalLayout_2->addWidget(startTimeLabel);

        label_5 = new QLabel(QEStripChartStatistics);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(40, 16777215));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        endTimeLabel = new QLabel(QEStripChartStatistics);
        endTimeLabel->setObjectName(QStringLiteral("endTimeLabel"));
        endTimeLabel->setFont(font);
        endTimeLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        endTimeLabel->setIndent(6);

        horizontalLayout_2->addWidget(endTimeLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(QEStripChartStatistics);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(label_7);

        numberOfPointsLabel = new QLabel(QEStripChartStatistics);
        numberOfPointsLabel->setObjectName(QStringLiteral("numberOfPointsLabel"));
        numberOfPointsLabel->setMinimumSize(QSize(80, 0));
        numberOfPointsLabel->setFont(font);
        numberOfPointsLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        numberOfPointsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberOfPointsLabel->setIndent(6);

        horizontalLayout_3->addWidget(numberOfPointsLabel);

        label_9 = new QLabel(QEStripChartStatistics);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(88, 16777215));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9->setIndent(5);

        horizontalLayout_3->addWidget(label_9);

        validPointsLabel = new QLabel(QEStripChartStatistics);
        validPointsLabel->setObjectName(QStringLiteral("validPointsLabel"));
        validPointsLabel->setMinimumSize(QSize(80, 0));
        validPointsLabel->setFont(font);
        validPointsLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        validPointsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        validPointsLabel->setIndent(6);

        horizontalLayout_3->addWidget(validPointsLabel);

        label_11 = new QLabel(QEStripChartStatistics);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(88, 16777215));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11->setIndent(5);

        horizontalLayout_3->addWidget(label_11);

        durationLabel = new QLabel(QEStripChartStatistics);
        durationLabel->setObjectName(QStringLiteral("durationLabel"));
        durationLabel->setMinimumSize(QSize(128, 0));
        durationLabel->setMaximumSize(QSize(128, 16777215));
        durationLabel->setFont(font);
        durationLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        durationLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        durationLabel->setIndent(6);

        horizontalLayout_3->addWidget(durationLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_13 = new QLabel(QEStripChartStatistics);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(80, 0));
        label_13->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_4->addWidget(label_13);

        meanLabel = new QLabel(QEStripChartStatistics);
        meanLabel->setObjectName(QStringLiteral("meanLabel"));
        meanLabel->setMinimumSize(QSize(200, 0));
        meanLabel->setFont(font);
        meanLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        meanLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        meanLabel->setIndent(6);

        horizontalLayout_4->addWidget(meanLabel);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_15 = new QLabel(QEStripChartStatistics);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(140, 0));
        label_15->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_4->addWidget(label_15);

        meanRateOfChangeLabel = new QLabel(QEStripChartStatistics);
        meanRateOfChangeLabel->setObjectName(QStringLiteral("meanRateOfChangeLabel"));
        meanRateOfChangeLabel->setMinimumSize(QSize(200, 0));
        meanRateOfChangeLabel->setFont(font);
        meanRateOfChangeLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        meanRateOfChangeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        meanRateOfChangeLabel->setIndent(6);

        horizontalLayout_4->addWidget(meanRateOfChangeLabel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_19 = new QLabel(QEStripChartStatistics);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(80, 0));
        label_19->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(label_19);

        minimumLabel = new QLabel(QEStripChartStatistics);
        minimumLabel->setObjectName(QStringLiteral("minimumLabel"));
        minimumLabel->setMinimumSize(QSize(200, 0));
        minimumLabel->setFont(font);
        minimumLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        minimumLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minimumLabel->setIndent(6);

        horizontalLayout_5->addWidget(minimumLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        label_20 = new QLabel(QEStripChartStatistics);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(140, 0));
        label_20->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_5->addWidget(label_20);

        standardDeviationLabel = new QLabel(QEStripChartStatistics);
        standardDeviationLabel->setObjectName(QStringLiteral("standardDeviationLabel"));
        standardDeviationLabel->setMinimumSize(QSize(200, 0));
        standardDeviationLabel->setFont(font);
        standardDeviationLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        standardDeviationLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        standardDeviationLabel->setIndent(6);

        horizontalLayout_5->addWidget(standardDeviationLabel);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_23 = new QLabel(QEStripChartStatistics);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMinimumSize(QSize(80, 0));
        label_23->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_6->addWidget(label_23);

        maximumLabel = new QLabel(QEStripChartStatistics);
        maximumLabel->setObjectName(QStringLiteral("maximumLabel"));
        maximumLabel->setMinimumSize(QSize(200, 0));
        maximumLabel->setFont(font);
        maximumLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        maximumLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        maximumLabel->setIndent(6);

        horizontalLayout_6->addWidget(maximumLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        label_24 = new QLabel(QEStripChartStatistics);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(140, 0));
        label_24->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_6->addWidget(label_24);

        areaUnderCurveLabel = new QLabel(QEStripChartStatistics);
        areaUnderCurveLabel->setObjectName(QStringLiteral("areaUnderCurveLabel"));
        areaUnderCurveLabel->setMinimumSize(QSize(200, 0));
        areaUnderCurveLabel->setFont(font);
        areaUnderCurveLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        areaUnderCurveLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        areaUnderCurveLabel->setIndent(6);

        horizontalLayout_6->addWidget(areaUnderCurveLabel);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_27 = new QLabel(QEStripChartStatistics);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(80, 0));
        label_27->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_7->addWidget(label_27);

        minMaxDiffLabel = new QLabel(QEStripChartStatistics);
        minMaxDiffLabel->setObjectName(QStringLiteral("minMaxDiffLabel"));
        minMaxDiffLabel->setMinimumSize(QSize(200, 0));
        minMaxDiffLabel->setFont(font);
        minMaxDiffLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        minMaxDiffLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minMaxDiffLabel->setIndent(6);

        horizontalLayout_7->addWidget(minMaxDiffLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        label_28 = new QLabel(QEStripChartStatistics);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMinimumSize(QSize(140, 0));
        label_28->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_7->addWidget(label_28);

        firstLastDiffLabel = new QLabel(QEStripChartStatistics);
        firstLastDiffLabel->setObjectName(QStringLiteral("firstLastDiffLabel"));
        firstLastDiffLabel->setMinimumSize(QSize(200, 0));
        firstLastDiffLabel->setFont(font);
        firstLastDiffLabel->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        firstLastDiffLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        firstLastDiffLabel->setIndent(6);

        horizontalLayout_7->addWidget(firstLastDiffLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_5 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        updateButton = new QPushButton(QEStripChartStatistics);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMinimumSize(QSize(80, 0));
        updateButton->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_8->addWidget(updateButton);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(QEStripChartStatistics);

        QMetaObject::connectSlotsByName(QEStripChartStatistics);
    } // setupUi

    void retranslateUi(QWidget *QEStripChartStatistics)
    {
        QEStripChartStatistics->setWindowTitle(QApplication::translate("QEStripChartStatistics", "Process Variable Statistics", 0));
        label->setText(QApplication::translate("QEStripChartStatistics", "PV Name", 0));
        pvNameLabel->setText(QApplication::translate("QEStripChartStatistics", "Value", 0));
        label_3->setText(QApplication::translate("QEStripChartStatistics", "Time frame", 0));
        startTimeLabel->setText(QApplication::translate("QEStripChartStatistics", "28 Oct 2013 14:14:16 EDT", 0));
        label_5->setText(QApplication::translate("QEStripChartStatistics", "to", 0));
        endTimeLabel->setText(QApplication::translate("QEStripChartStatistics", "28 Oct 2013 14:14:16 EDT", 0));
        label_7->setText(QApplication::translate("QEStripChartStatistics", "Number of Points", 0));
        numberOfPointsLabel->setText(QApplication::translate("QEStripChartStatistics", "0", 0));
        label_9->setText(QApplication::translate("QEStripChartStatistics", "Vaid Points", 0));
        validPointsLabel->setText(QApplication::translate("QEStripChartStatistics", "0", 0));
        label_11->setText(QApplication::translate("QEStripChartStatistics", "Duration", 0));
        durationLabel->setText(QApplication::translate("QEStripChartStatistics", "0 00:00:00", 0));
        label_13->setText(QApplication::translate("QEStripChartStatistics", "Mean", 0));
        meanLabel->setText(QApplication::translate("QEStripChartStatistics", "0", 0));
        label_15->setText(QApplication::translate("QEStripChartStatistics", "Mean rate of change", 0));
        meanRateOfChangeLabel->setText(QApplication::translate("QEStripChartStatistics", "0", 0));
        label_19->setText(QApplication::translate("QEStripChartStatistics", "Minimum", 0));
        minimumLabel->setText(QApplication::translate("QEStripChartStatistics", "0", 0));
        label_20->setText(QApplication::translate("QEStripChartStatistics", "Standard Deviation", 0));
        standardDeviationLabel->setText(QApplication::translate("QEStripChartStatistics", "0", 0));
        label_23->setText(QApplication::translate("QEStripChartStatistics", "Maximum", 0));
        maximumLabel->setText(QApplication::translate("QEStripChartStatistics", "0", 0));
        label_24->setText(QApplication::translate("QEStripChartStatistics", "Area under curve", 0));
        areaUnderCurveLabel->setText(QApplication::translate("QEStripChartStatistics", "0", 0));
        label_27->setText(QApplication::translate("QEStripChartStatistics", "Max - Min", 0));
        minMaxDiffLabel->setText(QApplication::translate("QEStripChartStatistics", "0", 0));
        label_28->setText(QApplication::translate("QEStripChartStatistics", "Final - Initial", 0));
        firstLastDiffLabel->setText(QApplication::translate("QEStripChartStatistics", "0", 0));
        updateButton->setText(QApplication::translate("QEStripChartStatistics", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class QEStripChartStatistics: public Ui_QEStripChartStatistics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QESTRIPCHARTSTATISTICS_H
