/********************************************************************************
** Form generated from reading UI file 'QEPvLoadSaveGroupNameDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEPVLOADSAVEGROUPNAMEDIALOG_H
#define UI_QEPVLOADSAVEGROUPNAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QEPvLoadSaveGroupNameDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *groupEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *QEPvLoadSaveGroupNameDialog)
    {
        if (QEPvLoadSaveGroupNameDialog->objectName().isEmpty())
            QEPvLoadSaveGroupNameDialog->setObjectName(QStringLiteral("QEPvLoadSaveGroupNameDialog"));
        QEPvLoadSaveGroupNameDialog->resize(484, 80);
        QEPvLoadSaveGroupNameDialog->setMinimumSize(QSize(444, 80));
        QEPvLoadSaveGroupNameDialog->setMaximumSize(QSize(888, 80));
        verticalLayout_2 = new QVBoxLayout(QEPvLoadSaveGroupNameDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 2, 6, 2);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(QEPvLoadSaveGroupNameDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(44, 0));
        label_2->setMaximumSize(QSize(44, 16777215));
        label_2->setIndent(0);

        horizontalLayout_4->addWidget(label_2);

        groupEdit = new QLineEdit(QEPvLoadSaveGroupNameDialog);
        groupEdit->setObjectName(QStringLiteral("groupEdit"));
        groupEdit->setMinimumSize(QSize(300, 0));

        horizontalLayout_4->addWidget(groupEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(800, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(QEPvLoadSaveGroupNameDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(QEPvLoadSaveGroupNameDialog);

        QMetaObject::connectSlotsByName(QEPvLoadSaveGroupNameDialog);
    } // setupUi

    void retranslateUi(QWidget *QEPvLoadSaveGroupNameDialog)
    {
        QEPvLoadSaveGroupNameDialog->setWindowTitle(QApplication::translate("QEPvLoadSaveGroupNameDialog", "Group Name Selection", 0));
        label_2->setText(QApplication::translate("QEPvLoadSaveGroupNameDialog", "Name", 0));
        groupEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QEPvLoadSaveGroupNameDialog: public Ui_QEPvLoadSaveGroupNameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEPVLOADSAVEGROUPNAMEDIALOG_H
