/********************************************************************************
** Form generated from reading UI file 'QEPvLoadSaveTimeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEPVLOADSAVETIMEDIALOG_H
#define UI_QEPVLOADSAVETIMEDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QEPvLoadSaveTimeDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QCalendarWidget *dateCalendar;
    QSlider *timeSlider;
    QTimeEdit *timeEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *QEPvLoadSaveTimeDialog)
    {
        if (QEPvLoadSaveTimeDialog->objectName().isEmpty())
            QEPvLoadSaveTimeDialog->setObjectName(QStringLiteral("QEPvLoadSaveTimeDialog"));
        QEPvLoadSaveTimeDialog->resize(260, 290);
        verticalLayout_2 = new QVBoxLayout(QEPvLoadSaveTimeDialog);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(QEPvLoadSaveTimeDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(260, 290));
        frame->setMaximumSize(QSize(266, 300));
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dateCalendar = new QCalendarWidget(frame);
        dateCalendar->setObjectName(QStringLiteral("dateCalendar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateCalendar->sizePolicy().hasHeightForWidth());
        dateCalendar->setSizePolicy(sizePolicy);
        dateCalendar->setMinimumSize(QSize(240, 180));
        dateCalendar->setMinimumDate(QDate(2005, 8, 1));
        dateCalendar->setMaximumDate(QDate(2099, 12, 31));
        dateCalendar->setFirstDayOfWeek(Qt::Monday);
        dateCalendar->setGridVisible(true);
        dateCalendar->setHorizontalHeaderFormat(QCalendarWidget::SingleLetterDayNames);
        dateCalendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        dateCalendar->setDateEditAcceptDelay(500);

        verticalLayout->addWidget(dateCalendar);

        timeSlider = new QSlider(frame);
        timeSlider->setObjectName(QStringLiteral("timeSlider"));
        timeSlider->setMaximum(239);
        timeSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(timeSlider);

        timeEdit = new QTimeEdit(frame);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        verticalLayout->addWidget(timeEdit);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setMinimumSize(QSize(168, 0));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addWidget(frame);


        retranslateUi(QEPvLoadSaveTimeDialog);

        QMetaObject::connectSlotsByName(QEPvLoadSaveTimeDialog);
    } // setupUi

    void retranslateUi(QWidget *QEPvLoadSaveTimeDialog)
    {
        QEPvLoadSaveTimeDialog->setWindowTitle(QApplication::translate("QEPvLoadSaveTimeDialog", "Date Time Select", 0));
    } // retranslateUi

};

namespace Ui {
    class QEPvLoadSaveTimeDialog: public Ui_QEPvLoadSaveTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEPVLOADSAVETIMEDIALOG_H
