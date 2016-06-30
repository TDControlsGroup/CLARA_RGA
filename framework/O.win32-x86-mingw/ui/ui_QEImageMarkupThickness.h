/********************************************************************************
** Form generated from reading UI file 'QEImageMarkupThickness.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEIMAGEMARKUPTHICKNESS_H
#define UI_QEIMAGEMARKUPTHICKNESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QEImageMarkupThickness
{
public:
    QVBoxLayout *verticalLayout;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QEImageMarkupThickness)
    {
        if (QEImageMarkupThickness->objectName().isEmpty())
            QEImageMarkupThickness->setObjectName(QStringLiteral("QEImageMarkupThickness"));
        QEImageMarkupThickness->resize(205, 83);
        verticalLayout = new QVBoxLayout(QEImageMarkupThickness);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        spinBox = new QSpinBox(QEImageMarkupThickness);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout->addWidget(spinBox);

        buttonBox = new QDialogButtonBox(QEImageMarkupThickness);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QEImageMarkupThickness);
        QObject::connect(buttonBox, SIGNAL(accepted()), QEImageMarkupThickness, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QEImageMarkupThickness, SLOT(reject()));

        QMetaObject::connectSlotsByName(QEImageMarkupThickness);
    } // setupUi

    void retranslateUi(QDialog *QEImageMarkupThickness)
    {
        QEImageMarkupThickness->setWindowTitle(QApplication::translate("QEImageMarkupThickness", "Line thickness", 0));
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QApplication::translate("QEImageMarkupThickness", "Line thickness in pixels (minimum is 1)", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QEImageMarkupThickness: public Ui_QEImageMarkupThickness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEIMAGEMARKUPTHICKNESS_H
