/********************************************************************************
** Form generated from reading UI file 'PeriodicElementSetupForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERIODICELEMENTSETUPFORM_H
#define UI_PERIODICELEMENTSETUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PeriodicElementSetupForm
{
public:
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxEnable;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditValue1;
    QLineEdit *lineEditValue2;
    QLineEdit *lineEditString;

    void setupUi(QWidget *PeriodicElementSetupForm)
    {
        if (PeriodicElementSetupForm->objectName().isEmpty())
            PeriodicElementSetupForm->setObjectName(QStringLiteral("PeriodicElementSetupForm"));
        PeriodicElementSetupForm->resize(66, 92);
        frame = new QFrame(PeriodicElementSetupForm);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 65, 91));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(65, 90));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBoxEnable = new QCheckBox(frame);
        checkBoxEnable->setObjectName(QStringLiteral("checkBoxEnable"));

        horizontalLayout->addWidget(checkBoxEnable);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(8);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        lineEditValue1 = new QLineEdit(frame);
        lineEditValue1->setObjectName(QStringLiteral("lineEditValue1"));
        lineEditValue1->setFont(font);

        verticalLayout->addWidget(lineEditValue1);

        lineEditValue2 = new QLineEdit(frame);
        lineEditValue2->setObjectName(QStringLiteral("lineEditValue2"));
        lineEditValue2->setFont(font);

        verticalLayout->addWidget(lineEditValue2);

        lineEditString = new QLineEdit(frame);
        lineEditString->setObjectName(QStringLiteral("lineEditString"));
        lineEditString->setFont(font);

        verticalLayout->addWidget(lineEditString);


        retranslateUi(PeriodicElementSetupForm);

        QMetaObject::connectSlotsByName(PeriodicElementSetupForm);
    } // setupUi

    void retranslateUi(QWidget *PeriodicElementSetupForm)
    {
        PeriodicElementSetupForm->setWindowTitle(QApplication::translate("PeriodicElementSetupForm", "Form", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxEnable->setToolTip(QApplication::translate("PeriodicElementSetupForm", "Check if element is to be selectable by user", 0));
#endif // QT_NO_TOOLTIP
        checkBoxEnable->setText(QString());
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("PeriodicElementSetupForm", "Sym", 0));
#ifndef QT_NO_TOOLTIP
        lineEditValue1->setToolTip(QApplication::translate("PeriodicElementSetupForm", "Value to be written to and compared with first variable (floating point)", 0));
#endif // QT_NO_TOOLTIP
        lineEditValue1->setText(QApplication::translate("PeriodicElementSetupForm", "0", 0));
#ifndef QT_NO_TOOLTIP
        lineEditValue2->setToolTip(QApplication::translate("PeriodicElementSetupForm", "Value to be written to and compared with second variable (floating point)", 0));
#endif // QT_NO_TOOLTIP
        lineEditValue2->setText(QApplication::translate("PeriodicElementSetupForm", "0", 0));
#ifndef QT_NO_TOOLTIP
        lineEditString->setToolTip(QApplication::translate("PeriodicElementSetupForm", "Associated text", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PeriodicElementSetupForm: public Ui_PeriodicElementSetupForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERIODICELEMENTSETUPFORM_H
