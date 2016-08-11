/********************************************************************************
** Form generated from reading UI file 'QEPVNameSelectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEPVNAMESELECTDIALOG_H
#define UI_QEPVNAMESELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_QEPVNameSelectDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *filterEdit;
    QPushButton *helpButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *pvNameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *matchCountLabel;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *QEPVNameSelectDialog)
    {
        if (QEPVNameSelectDialog->objectName().isEmpty())
            QEPVNameSelectDialog->setObjectName(QStringLiteral("QEPVNameSelectDialog"));
        QEPVNameSelectDialog->resize(484, 110);
        QEPVNameSelectDialog->setMinimumSize(QSize(444, 110));
        QEPVNameSelectDialog->setMaximumSize(QSize(888, 110));
        verticalLayout_2 = new QVBoxLayout(QEPVNameSelectDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 2, 6, 2);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(QEPVNameSelectDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(44, 0));
        label_2->setMaximumSize(QSize(44, 16777215));
        label_2->setIndent(0);

        horizontalLayout_4->addWidget(label_2);

        filterEdit = new QLineEdit(QEPVNameSelectDialog);
        filterEdit->setObjectName(QStringLiteral("filterEdit"));
        filterEdit->setMinimumSize(QSize(300, 0));

        horizontalLayout_4->addWidget(filterEdit);

        helpButton = new QPushButton(QEPVNameSelectDialog);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setMinimumSize(QSize(52, 0));
        helpButton->setMaximumSize(QSize(52, 16777215));
        helpButton->setStyleSheet(QStringLiteral("background-color: rgb(150, 210, 140);"));

        horizontalLayout_4->addWidget(helpButton);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(QEPVNameSelectDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(44, 0));
        label->setMaximumSize(QSize(44, 16777215));
        label->setIndent(0);

        horizontalLayout->addWidget(label);

        pvNameEdit = new QComboBox(QEPVNameSelectDialog);
        pvNameEdit->setObjectName(QStringLiteral("pvNameEdit"));
        pvNameEdit->setMinimumSize(QSize(300, 0));
        pvNameEdit->setEditable(true);
        pvNameEdit->setMaxVisibleItems(40);
        pvNameEdit->setMaxCount(100000);
        pvNameEdit->setInsertPolicy(QComboBox::InsertAtTop);

        horizontalLayout->addWidget(pvNameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(QEPVNameSelectDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(56, 0));
        label_4->setMaximumSize(QSize(56, 16777215));

        horizontalLayout_2->addWidget(label_4);

        matchCountLabel = new QLabel(QEPVNameSelectDialog);
        matchCountLabel->setObjectName(QStringLiteral("matchCountLabel"));
        matchCountLabel->setMinimumSize(QSize(48, 0));
        matchCountLabel->setMaximumSize(QSize(48, 16777215));
        matchCountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(matchCountLabel);

        horizontalSpacer_2 = new QSpacerItem(800, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(QEPVNameSelectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(QEPVNameSelectDialog);

        QMetaObject::connectSlotsByName(QEPVNameSelectDialog);
    } // setupUi

    void retranslateUi(QWidget *QEPVNameSelectDialog)
    {
        QEPVNameSelectDialog->setWindowTitle(QApplication::translate("QEPVNameSelectDialog", "PV Name Selection", 0));
        label_2->setText(QApplication::translate("QEPVNameSelectDialog", "Filter", 0));
#ifndef QT_NO_TOOLTIP
        filterEdit->setToolTip(QApplication::translate("QEPVNameSelectDialog", "<html><head/><body><p>Enter a regular expression to filter PV names avaialble from the archiver.</p><p>Filtered names are used to populated the name combo-box below.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        filterEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        helpButton->setToolTip(QApplication::translate("QEPVNameSelectDialog", "<html><head/><body><p>Provides brief guide to the use of the PV filtering.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        helpButton->setText(QApplication::translate("QEPVNameSelectDialog", "Help", 0));
        label->setText(QApplication::translate("QEPVNameSelectDialog", "Name", 0));
#ifndef QT_NO_TOOLTIP
        pvNameEdit->setToolTip(QApplication::translate("QEPVNameSelectDialog", "Select or type PV name.", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("QEPVNameSelectDialog", "Number: ", 0));
#ifndef QT_NO_TOOLTIP
        matchCountLabel->setToolTip(QApplication::translate("QEPVNameSelectDialog", "Number of PVs that match given filter.", 0));
#endif // QT_NO_TOOLTIP
        matchCountLabel->setText(QApplication::translate("QEPVNameSelectDialog", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class QEPVNameSelectDialog: public Ui_QEPVNameSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEPVNAMESELECTDIALOG_H
