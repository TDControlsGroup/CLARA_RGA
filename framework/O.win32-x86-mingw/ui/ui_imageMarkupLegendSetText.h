/********************************************************************************
** Form generated from reading UI file 'imageMarkupLegendSetText.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEMARKUPLEGENDSETTEXT_H
#define UI_IMAGEMARKUPLEGENDSETTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_imageMarkupLegendSetText
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditLegend;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *imageMarkupLegendSetText)
    {
        if (imageMarkupLegendSetText->objectName().isEmpty())
            imageMarkupLegendSetText->setObjectName(QStringLiteral("imageMarkupLegendSetText"));
        imageMarkupLegendSetText->setWindowModality(Qt::ApplicationModal);
        imageMarkupLegendSetText->resize(303, 70);
        verticalLayout = new QVBoxLayout(imageMarkupLegendSetText);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(imageMarkupLegendSetText);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditLegend = new QLineEdit(imageMarkupLegendSetText);
        lineEditLegend->setObjectName(QStringLiteral("lineEditLegend"));

        horizontalLayout->addWidget(lineEditLegend);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(imageMarkupLegendSetText);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(imageMarkupLegendSetText);
        QObject::connect(buttonBox, SIGNAL(accepted()), imageMarkupLegendSetText, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), imageMarkupLegendSetText, SLOT(reject()));

        QMetaObject::connectSlotsByName(imageMarkupLegendSetText);
    } // setupUi

    void retranslateUi(QDialog *imageMarkupLegendSetText)
    {
        imageMarkupLegendSetText->setWindowTitle(QApplication::translate("imageMarkupLegendSetText", "Set Legend", 0));
        label->setText(QApplication::translate("imageMarkupLegendSetText", "Legend:", 0));
#ifndef QT_NO_TOOLTIP
        lineEditLegend->setToolTip(QApplication::translate("imageMarkupLegendSetText", "Markup legend", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class imageMarkupLegendSetText: public Ui_imageMarkupLegendSetText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEMARKUPLEGENDSETTEXT_H
