/********************************************************************************
** Form generated from reading UI file 'QEPvLoadSaveCompare.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEPVLOADSAVECOMPARE_H
#define UI_QEPVLOADSAVECOMPARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QAnalogSlider.h"
#include "QEHistogram.h"

QT_BEGIN_NAMESPACE

class Ui_QEPvLoadSaveCompare
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QEHistogram *comparison;
    QAnalogSlider *scale_slider;

    void setupUi(QWidget *QEPvLoadSaveCompare)
    {
        if (QEPvLoadSaveCompare->objectName().isEmpty())
            QEPvLoadSaveCompare->setObjectName(QStringLiteral("QEPvLoadSaveCompare"));
        QEPvLoadSaveCompare->resize(896, 354);
        verticalLayout = new QVBoxLayout(QEPvLoadSaveCompare);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(QEPvLoadSaveCompare);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(600, 0));
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        comparison = new QEHistogram(frame);
        comparison->setObjectName(QStringLiteral("comparison"));
        comparison->setMinimumSize(QSize(600, 272));
        comparison->setMinimum(-10);
        comparison->setDrawBorder(true);

        verticalLayout_2->addWidget(comparison);

        scale_slider = new QAnalogSlider(frame);
        scale_slider->setObjectName(QStringLiteral("scale_slider"));
        scale_slider->setMinimumSize(QSize(600, 74));
        scale_slider->setMaximumSize(QSize(16777214, 74));
        scale_slider->setFrameShape(QFrame::Panel);
        scale_slider->setFrameShadow(QFrame::Plain);
        scale_slider->setValue(1);
        scale_slider->setProperty("minimum", QVariant(-15));
        scale_slider->setProperty("maximum", QVariant(3));
        scale_slider->setMinorInterval(1);
        scale_slider->setMajorInterval(3);

        verticalLayout_2->addWidget(scale_slider);


        verticalLayout->addWidget(frame);


        retranslateUi(QEPvLoadSaveCompare);

        QMetaObject::connectSlotsByName(QEPvLoadSaveCompare);
    } // setupUi

    void retranslateUi(QWidget *QEPvLoadSaveCompare)
    {
        QEPvLoadSaveCompare->setWindowTitle(QApplication::translate("QEPvLoadSaveCompare", "Form", 0));
        scale_slider->setCentreText(QApplication::translate("QEPvLoadSaveCompare", "Log Scale (dB)", 0));
    } // retranslateUi

};

namespace Ui {
    class QEPvLoadSaveCompare: public Ui_QEPvLoadSaveCompare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEPVLOADSAVECOMPARE_H
