/********************************************************************************
** Form generated from reading UI file 'saveDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEDIALOG_H
#define UI_SAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_saveDialog
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *defaultRadioButton;
    QFrame *line;
    QRadioButton *namedRadioButton;
    QListWidget *namesListWidget;
    QLineEdit *nameLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *saveDialog)
    {
        if (saveDialog->objectName().isEmpty())
            saveDialog->setObjectName(QStringLiteral("saveDialog"));
        saveDialog->resize(240, 360);
        verticalLayout = new QVBoxLayout(saveDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        defaultRadioButton = new QRadioButton(saveDialog);
        defaultRadioButton->setObjectName(QStringLiteral("defaultRadioButton"));
        defaultRadioButton->setChecked(true);

        verticalLayout->addWidget(defaultRadioButton);

        line = new QFrame(saveDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        namedRadioButton = new QRadioButton(saveDialog);
        namedRadioButton->setObjectName(QStringLiteral("namedRadioButton"));

        verticalLayout->addWidget(namedRadioButton);

        namesListWidget = new QListWidget(saveDialog);
        namesListWidget->setObjectName(QStringLiteral("namesListWidget"));

        verticalLayout->addWidget(namesListWidget);

        nameLineEdit = new QLineEdit(saveDialog);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        verticalLayout->addWidget(nameLineEdit);

        buttonBox = new QDialogButtonBox(saveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(saveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), saveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), saveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(saveDialog);
    } // setupUi

    void retranslateUi(QDialog *saveDialog)
    {
        saveDialog->setWindowTitle(QApplication::translate("saveDialog", "Save Configuration", 0));
        defaultRadioButton->setText(QApplication::translate("saveDialog", "Default configuration", 0));
        namedRadioButton->setText(QApplication::translate("saveDialog", "Named configuration", 0));
    } // retranslateUi

};

namespace Ui {
    class saveDialog: public Ui_saveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEDIALOG_H
