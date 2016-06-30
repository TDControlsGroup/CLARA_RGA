/********************************************************************************
** Form generated from reading UI file 'restoreDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTOREDIALOG_H
#define UI_RESTOREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_restoreDialog
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *defaultRadioButton;
    QFrame *line;
    QRadioButton *namedRadioButton;
    QListWidget *namesListWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *restoreDialog)
    {
        if (restoreDialog->objectName().isEmpty())
            restoreDialog->setObjectName(QStringLiteral("restoreDialog"));
        restoreDialog->resize(240, 360);
        verticalLayout = new QVBoxLayout(restoreDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        defaultRadioButton = new QRadioButton(restoreDialog);
        defaultRadioButton->setObjectName(QStringLiteral("defaultRadioButton"));
        defaultRadioButton->setChecked(true);

        verticalLayout->addWidget(defaultRadioButton);

        line = new QFrame(restoreDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        namedRadioButton = new QRadioButton(restoreDialog);
        namedRadioButton->setObjectName(QStringLiteral("namedRadioButton"));

        verticalLayout->addWidget(namedRadioButton);

        namesListWidget = new QListWidget(restoreDialog);
        namesListWidget->setObjectName(QStringLiteral("namesListWidget"));

        verticalLayout->addWidget(namesListWidget);

        buttonBox = new QDialogButtonBox(restoreDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(restoreDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), restoreDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), restoreDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(restoreDialog);
    } // setupUi

    void retranslateUi(QDialog *restoreDialog)
    {
        restoreDialog->setWindowTitle(QApplication::translate("restoreDialog", "Restore Configuration", 0));
        defaultRadioButton->setText(QApplication::translate("restoreDialog", "Default configuration", 0));
        namedRadioButton->setText(QApplication::translate("restoreDialog", "Named configuration", 0));
    } // retranslateUi

};

namespace Ui {
    class restoreDialog: public Ui_restoreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTOREDIALOG_H
