/********************************************************************************
** Form generated from reading UI file 'QEStripChartTimeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QESTRIPCHARTTIMEDIALOG_H
#define UI_QESTRIPCHARTTIMEDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QEStripChartTimeDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCalendarWidget *startDate;
    QSlider *startTimeSlider;
    QTimeEdit *startTimeEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QCalendarWidget *endDate;
    QSlider *endTimeSlider;
    QTimeEdit *endTimeEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *duration;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *QEStripChartTimeDialog)
    {
        if (QEStripChartTimeDialog->objectName().isEmpty())
            QEStripChartTimeDialog->setObjectName(QStringLiteral("QEStripChartTimeDialog"));
        QEStripChartTimeDialog->resize(516, 316);
        QEStripChartTimeDialog->setMinimumSize(QSize(516, 316));
        layoutWidget = new QWidget(QEStripChartTimeDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 496, 297));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(8);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        startDate = new QCalendarWidget(layoutWidget);
        startDate->setObjectName(QStringLiteral("startDate"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startDate->sizePolicy().hasHeightForWidth());
        startDate->setSizePolicy(sizePolicy);
        startDate->setMinimumSize(QSize(240, 180));
        startDate->setMinimumDate(QDate(2005, 8, 1));
        startDate->setMaximumDate(QDate(2099, 12, 31));
        startDate->setFirstDayOfWeek(Qt::Monday);
        startDate->setGridVisible(true);
        startDate->setHorizontalHeaderFormat(QCalendarWidget::SingleLetterDayNames);
        startDate->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        startDate->setDateEditAcceptDelay(500);

        verticalLayout->addWidget(startDate);

        startTimeSlider = new QSlider(layoutWidget);
        startTimeSlider->setObjectName(QStringLiteral("startTimeSlider"));
        startTimeSlider->setMaximum(239);
        startTimeSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(startTimeSlider);

        startTimeEdit = new QTimeEdit(layoutWidget);
        startTimeEdit->setObjectName(QStringLiteral("startTimeEdit"));

        verticalLayout->addWidget(startTimeEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        endDate = new QCalendarWidget(layoutWidget);
        endDate->setObjectName(QStringLiteral("endDate"));
        sizePolicy.setHeightForWidth(endDate->sizePolicy().hasHeightForWidth());
        endDate->setSizePolicy(sizePolicy);
        endDate->setMinimumSize(QSize(240, 180));
        endDate->setMinimumDate(QDate(2005, 8, 1));
        endDate->setMaximumDate(QDate(2099, 12, 31));
        endDate->setFirstDayOfWeek(Qt::Monday);
        endDate->setGridVisible(true);
        endDate->setHorizontalHeaderFormat(QCalendarWidget::SingleLetterDayNames);
        endDate->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        endDate->setDateEditAcceptDelay(500);

        verticalLayout_2->addWidget(endDate);

        endTimeSlider = new QSlider(layoutWidget);
        endTimeSlider->setObjectName(QStringLiteral("endTimeSlider"));
        endTimeSlider->setMaximum(239);
        endTimeSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(endTimeSlider);

        endTimeEdit = new QTimeEdit(layoutWidget);
        endTimeEdit->setObjectName(QStringLiteral("endTimeEdit"));

        verticalLayout_2->addWidget(endTimeEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        duration = new QLabel(layoutWidget);
        duration->setObjectName(QStringLiteral("duration"));
        duration->setMinimumSize(QSize(129, 0));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        duration->setFont(font);
        duration->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        duration->setIndent(4);

        horizontalLayout_2->addWidget(duration);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setMinimumSize(QSize(180, 0));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(QEStripChartTimeDialog);

        QMetaObject::connectSlotsByName(QEStripChartTimeDialog);
    } // setupUi

    void retranslateUi(QWidget *QEStripChartTimeDialog)
    {
        QEStripChartTimeDialog->setWindowTitle(QApplication::translate("QEStripChartTimeDialog", "Strip Chart Times", 0));
        label->setText(QApplication::translate("QEStripChartTimeDialog", "Start DateTime", 0));
        label_2->setText(QApplication::translate("QEStripChartTimeDialog", "End DateTime", 0));
        duration->setText(QApplication::translate("QEStripChartTimeDialog", "-00000 00:00:00", 0));
    } // retranslateUi

};

namespace Ui {
    class QEStripChartTimeDialog: public Ui_QEStripChartTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QESTRIPCHARTTIMEDIALOG_H
