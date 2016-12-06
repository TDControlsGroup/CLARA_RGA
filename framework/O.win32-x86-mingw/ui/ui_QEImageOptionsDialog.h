/********************************************************************************
** Form generated from reading UI file 'QEImageOptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEIMAGEOPTIONSDIALOG_H
#define UI_QEIMAGEOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QEImageOptionsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxVerticalProfile1;
    QCheckBox *checkBoxVerticalProfile2;
    QCheckBox *checkBoxVerticalProfile3;
    QCheckBox *checkBoxVerticalProfile4;
    QCheckBox *checkBoxVerticalProfile5;
    QCheckBox *checkBoxHorizontalProfile1;
    QCheckBox *checkBoxHorizontalProfile2;
    QCheckBox *checkBoxHorizontalProfile3;
    QCheckBox *checkBoxHorizontalProfile4;
    QCheckBox *checkBoxHorizontalProfile5;
    QCheckBox *checkBoxArbitraryProfile;
    QCheckBox *checkBoxArea1Selection;
    QCheckBox *checkBoxArea2Selection;
    QCheckBox *checkBoxArea3Selection;
    QCheckBox *checkBoxArea4Selection;
    QCheckBox *checkBoxTarget;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *checkBoxBeam;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxButtonBar;
    QCheckBox *checkBoxBrightnessContrast;
    QCheckBox *checkBoxRecorder;
    QCheckBox *checkBoxTime;
    QCheckBox *checkBoxInfo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QEImageOptionsDialog)
    {
        if (QEImageOptionsDialog->objectName().isEmpty())
            QEImageOptionsDialog->setObjectName(QStringLiteral("QEImageOptionsDialog"));
        QEImageOptionsDialog->resize(537, 536);
        verticalLayout_3 = new QVBoxLayout(QEImageOptionsDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(QEImageOptionsDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBoxVerticalProfile1 = new QCheckBox(groupBox);
        checkBoxVerticalProfile1->setObjectName(QStringLiteral("checkBoxVerticalProfile1"));

        verticalLayout->addWidget(checkBoxVerticalProfile1);

        checkBoxVerticalProfile2 = new QCheckBox(groupBox);
        checkBoxVerticalProfile2->setObjectName(QStringLiteral("checkBoxVerticalProfile2"));

        verticalLayout->addWidget(checkBoxVerticalProfile2);

        checkBoxVerticalProfile3 = new QCheckBox(groupBox);
        checkBoxVerticalProfile3->setObjectName(QStringLiteral("checkBoxVerticalProfile3"));

        verticalLayout->addWidget(checkBoxVerticalProfile3);

        checkBoxVerticalProfile4 = new QCheckBox(groupBox);
        checkBoxVerticalProfile4->setObjectName(QStringLiteral("checkBoxVerticalProfile4"));

        verticalLayout->addWidget(checkBoxVerticalProfile4);

        checkBoxVerticalProfile5 = new QCheckBox(groupBox);
        checkBoxVerticalProfile5->setObjectName(QStringLiteral("checkBoxVerticalProfile5"));

        verticalLayout->addWidget(checkBoxVerticalProfile5);

        checkBoxHorizontalProfile1 = new QCheckBox(groupBox);
        checkBoxHorizontalProfile1->setObjectName(QStringLiteral("checkBoxHorizontalProfile1"));

        verticalLayout->addWidget(checkBoxHorizontalProfile1);

        checkBoxHorizontalProfile2 = new QCheckBox(groupBox);
        checkBoxHorizontalProfile2->setObjectName(QStringLiteral("checkBoxHorizontalProfile2"));

        verticalLayout->addWidget(checkBoxHorizontalProfile2);

        checkBoxHorizontalProfile3 = new QCheckBox(groupBox);
        checkBoxHorizontalProfile3->setObjectName(QStringLiteral("checkBoxHorizontalProfile3"));

        verticalLayout->addWidget(checkBoxHorizontalProfile3);

        checkBoxHorizontalProfile4 = new QCheckBox(groupBox);
        checkBoxHorizontalProfile4->setObjectName(QStringLiteral("checkBoxHorizontalProfile4"));

        verticalLayout->addWidget(checkBoxHorizontalProfile4);

        checkBoxHorizontalProfile5 = new QCheckBox(groupBox);
        checkBoxHorizontalProfile5->setObjectName(QStringLiteral("checkBoxHorizontalProfile5"));

        verticalLayout->addWidget(checkBoxHorizontalProfile5);

        checkBoxArbitraryProfile = new QCheckBox(groupBox);
        checkBoxArbitraryProfile->setObjectName(QStringLiteral("checkBoxArbitraryProfile"));

        verticalLayout->addWidget(checkBoxArbitraryProfile);

        checkBoxArea1Selection = new QCheckBox(groupBox);
        checkBoxArea1Selection->setObjectName(QStringLiteral("checkBoxArea1Selection"));

        verticalLayout->addWidget(checkBoxArea1Selection);

        checkBoxArea2Selection = new QCheckBox(groupBox);
        checkBoxArea2Selection->setObjectName(QStringLiteral("checkBoxArea2Selection"));

        verticalLayout->addWidget(checkBoxArea2Selection);

        checkBoxArea3Selection = new QCheckBox(groupBox);
        checkBoxArea3Selection->setObjectName(QStringLiteral("checkBoxArea3Selection"));

        verticalLayout->addWidget(checkBoxArea3Selection);

        checkBoxArea4Selection = new QCheckBox(groupBox);
        checkBoxArea4Selection->setObjectName(QStringLiteral("checkBoxArea4Selection"));

        verticalLayout->addWidget(checkBoxArea4Selection);

        checkBoxTarget = new QCheckBox(groupBox);
        checkBoxTarget->setObjectName(QStringLiteral("checkBoxTarget"));

        verticalLayout->addWidget(checkBoxTarget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        checkBoxBeam = new QCheckBox(groupBox);
        checkBoxBeam->setObjectName(QStringLiteral("checkBoxBeam"));

        verticalLayout->addWidget(checkBoxBeam);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QEImageOptionsDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        checkBoxButtonBar = new QCheckBox(groupBox_2);
        checkBoxButtonBar->setObjectName(QStringLiteral("checkBoxButtonBar"));

        verticalLayout_2->addWidget(checkBoxButtonBar);

        checkBoxBrightnessContrast = new QCheckBox(groupBox_2);
        checkBoxBrightnessContrast->setObjectName(QStringLiteral("checkBoxBrightnessContrast"));

        verticalLayout_2->addWidget(checkBoxBrightnessContrast);

        checkBoxRecorder = new QCheckBox(groupBox_2);
        checkBoxRecorder->setObjectName(QStringLiteral("checkBoxRecorder"));

        verticalLayout_2->addWidget(checkBoxRecorder);

        checkBoxTime = new QCheckBox(groupBox_2);
        checkBoxTime->setObjectName(QStringLiteral("checkBoxTime"));

        verticalLayout_2->addWidget(checkBoxTime);

        checkBoxInfo = new QCheckBox(groupBox_2);
        checkBoxInfo->setObjectName(QStringLiteral("checkBoxInfo"));

        verticalLayout_2->addWidget(checkBoxInfo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(QEImageOptionsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(QEImageOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QEImageOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QEImageOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QEImageOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QEImageOptionsDialog)
    {
        QEImageOptionsDialog->setWindowTitle(QApplication::translate("QEImageOptionsDialog", "QEImage options", 0));
        groupBox->setTitle(QApplication::translate("QEImageOptionsDialog", "Included in Mode menu", 0));
        checkBoxVerticalProfile1->setText(QApplication::translate("QEImageOptionsDialog", "Vertical line slice 1 and profile", 0));
        checkBoxVerticalProfile2->setText(QApplication::translate("QEImageOptionsDialog", "Vertical line slice 2", 0));
        checkBoxVerticalProfile3->setText(QApplication::translate("QEImageOptionsDialog", "Vertical line slice 3", 0));
        checkBoxVerticalProfile4->setText(QApplication::translate("QEImageOptionsDialog", "Vertical line slice 4", 0));
        checkBoxVerticalProfile5->setText(QApplication::translate("QEImageOptionsDialog", "Vertical line slice 5", 0));
        checkBoxHorizontalProfile1->setText(QApplication::translate("QEImageOptionsDialog", "Horizontal line slice 1 and profile", 0));
        checkBoxHorizontalProfile2->setText(QApplication::translate("QEImageOptionsDialog", "Horizontal line slice 2", 0));
        checkBoxHorizontalProfile3->setText(QApplication::translate("QEImageOptionsDialog", "Horizontal line slice 3", 0));
        checkBoxHorizontalProfile4->setText(QApplication::translate("QEImageOptionsDialog", "Horizontal line slice 4", 0));
        checkBoxHorizontalProfile5->setText(QApplication::translate("QEImageOptionsDialog", "Horizontal line slice 5", 0));
        checkBoxArbitraryProfile->setText(QApplication::translate("QEImageOptionsDialog", "Arbitrary line slice and profile", 0));
        checkBoxArea1Selection->setText(QApplication::translate("QEImageOptionsDialog", "Area 1 selection", 0));
        checkBoxArea2Selection->setText(QApplication::translate("QEImageOptionsDialog", "Area 2 selection", 0));
        checkBoxArea3Selection->setText(QApplication::translate("QEImageOptionsDialog", "Area 3 selection", 0));
        checkBoxArea4Selection->setText(QApplication::translate("QEImageOptionsDialog", "Area 4 selection", 0));
        checkBoxTarget->setText(QApplication::translate("QEImageOptionsDialog", "Target selection", 0));
        checkBoxBeam->setText(QApplication::translate("QEImageOptionsDialog", "Beam selection", 0));
        groupBox_2->setTitle(QApplication::translate("QEImageOptionsDialog", "Tools", 0));
        checkBoxButtonBar->setText(QApplication::translate("QEImageOptionsDialog", "Button bar", 0));
        checkBoxBrightnessContrast->setText(QApplication::translate("QEImageOptionsDialog", "Image display properties", 0));
        checkBoxRecorder->setText(QApplication::translate("QEImageOptionsDialog", "Recorder", 0));
        checkBoxTime->setText(QApplication::translate("QEImageOptionsDialog", "Timestamp image", 0));
        checkBoxInfo->setText(QApplication::translate("QEImageOptionsDialog", "Pixel and area information", 0));
    } // retranslateUi

};

namespace Ui {
    class QEImageOptionsDialog: public Ui_QEImageOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEIMAGEOPTIONSDIALOG_H
