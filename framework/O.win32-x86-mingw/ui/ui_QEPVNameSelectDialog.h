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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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
    QVBoxLayout *verticalLayout;
    QFrame *frame_1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *filterEdit;
    QPushButton *helpButton;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *pvNameEdit;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *matchCountLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QDialogButtonBox *buttonBox;
    QFrame *help_frame;
    QFrame *frame_5;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_22;
    QLabel *label_21;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;

    void setupUi(QWidget *QEPVNameSelectDialog)
    {
        if (QEPVNameSelectDialog->objectName().isEmpty())
            QEPVNameSelectDialog->setObjectName(QStringLiteral("QEPVNameSelectDialog"));
        QEPVNameSelectDialog->resize(461, 428);
        QEPVNameSelectDialog->setMinimumSize(QSize(444, 110));
        QEPVNameSelectDialog->setMaximumSize(QSize(888, 1110));
        verticalLayout = new QVBoxLayout(QEPVNameSelectDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_1 = new QFrame(QEPVNameSelectDialog);
        frame_1->setObjectName(QStringLiteral("frame_1"));
        frame_1->setMinimumSize(QSize(0, 34));
        frame_1->setMaximumSize(QSize(16777215, 34));
        horizontalLayout = new QHBoxLayout(frame_1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 2, -1, 2);
        label_2 = new QLabel(frame_1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(44, 0));
        label_2->setMaximumSize(QSize(44, 16777215));
        label_2->setIndent(0);

        horizontalLayout->addWidget(label_2);

        filterEdit = new QLineEdit(frame_1);
        filterEdit->setObjectName(QStringLiteral("filterEdit"));
        filterEdit->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(filterEdit);

        helpButton = new QPushButton(frame_1);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setMinimumSize(QSize(52, 0));
        helpButton->setMaximumSize(QSize(52, 16777215));
        helpButton->setStyleSheet(QStringLiteral("background-color: rgb(150, 210, 140);"));

        horizontalLayout->addWidget(helpButton);


        verticalLayout->addWidget(frame_1);

        frame_2 = new QFrame(QEPVNameSelectDialog);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(0, 34));
        frame_2->setMaximumSize(QSize(16777215, 34));
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 2, -1, 2);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(44, 0));
        label->setMaximumSize(QSize(44, 16777215));
        label->setIndent(0);

        horizontalLayout_2->addWidget(label);

        pvNameEdit = new QComboBox(frame_2);
        pvNameEdit->setObjectName(QStringLiteral("pvNameEdit"));
        pvNameEdit->setMinimumSize(QSize(300, 0));
        pvNameEdit->setEditable(true);
        pvNameEdit->setMaxVisibleItems(40);
        pvNameEdit->setMaxCount(100000);
        pvNameEdit->setInsertPolicy(QComboBox::InsertAtTop);

        horizontalLayout_2->addWidget(pvNameEdit);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(QEPVNameSelectDialog);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(0, 34));
        frame_3->setMaximumSize(QSize(16777215, 34));
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 2, -1, 2);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(56, 0));
        label_4->setMaximumSize(QSize(56, 16777215));

        horizontalLayout_3->addWidget(label_4);

        matchCountLabel = new QLabel(frame_3);
        matchCountLabel->setObjectName(QStringLiteral("matchCountLabel"));
        matchCountLabel->setMinimumSize(QSize(48, 0));
        matchCountLabel->setMaximumSize(QSize(48, 16777215));
        matchCountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(matchCountLabel);

        horizontalSpacer = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        clearButton = new QPushButton(frame_3);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMinimumSize(QSize(75, 0));
        clearButton->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_3->addWidget(clearButton);

        buttonBox = new QDialogButtonBox(frame_3);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setMinimumSize(QSize(161, 0));
        buttonBox->setMaximumSize(QSize(161, 16777215));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);

        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addWidget(frame_3);

        help_frame = new QFrame(QEPVNameSelectDialog);
        help_frame->setObjectName(QStringLiteral("help_frame"));
        help_frame->setMinimumSize(QSize(700, 320));
        help_frame->setMaximumSize(QSize(16777215, 320));
        frame_5 = new QFrame(help_frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(8, 130, 684, 136));
        frame_5->setMinimumSize(QSize(0, 136));
        frame_5->setMaximumSize(QSize(16777215, 136));
        QFont font;
        font.setPointSize(10);
        frame_5->setFont(font);
        frame_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_5->setFrameShape(QFrame::Panel);
        frame_5->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frame_5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(172, 0));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setFrameShadow(QFrame::Plain);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(frame_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(frame_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 0, 3, 1, 1);

        label_8 = new QLabel(frame_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(172, 0));
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setFrameShadow(QFrame::Plain);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(frame_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setFrameShadow(QFrame::Plain);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 1, 1, 1, 1);

        label_10 = new QLabel(frame_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setFrameShadow(QFrame::Plain);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 1, 2, 1, 1);

        label_11 = new QLabel(frame_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFrameShape(QFrame::NoFrame);
        label_11->setFrameShadow(QFrame::Plain);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 1, 3, 1, 1);

        label_12 = new QLabel(frame_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(172, 0));
        label_12->setFrameShape(QFrame::NoFrame);
        label_12->setFrameShadow(QFrame::Plain);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        label_13 = new QLabel(frame_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFrameShape(QFrame::NoFrame);
        label_13->setFrameShadow(QFrame::Plain);
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 2, 1, 1, 1);

        label_14 = new QLabel(frame_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font2;
        font2.setItalic(false);
        label_14->setFont(font2);
        label_14->setFrameShape(QFrame::NoFrame);
        label_14->setFrameShadow(QFrame::Plain);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 2, 2, 1, 1);

        label_15 = new QLabel(frame_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font2);
        label_15->setFrameShape(QFrame::NoFrame);
        label_15->setFrameShadow(QFrame::Plain);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 2, 3, 1, 1);

        label_16 = new QLabel(frame_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(172, 0));
        label_16->setFrameShape(QFrame::NoFrame);
        label_16->setFrameShadow(QFrame::Plain);
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_16, 3, 0, 1, 1);

        label_17 = new QLabel(frame_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFrameShape(QFrame::NoFrame);
        label_17->setFrameShadow(QFrame::Plain);
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_17, 3, 1, 1, 1);

        label_18 = new QLabel(frame_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        QFont font3;
        font3.setItalic(true);
        label_18->setFont(font3);
        label_18->setFrameShape(QFrame::NoFrame);
        label_18->setFrameShadow(QFrame::Plain);
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 3, 2, 1, 1);

        label_19 = new QLabel(frame_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font3);
        label_19->setFrameShape(QFrame::NoFrame);
        label_19->setFrameShadow(QFrame::Plain);
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_19, 3, 3, 1, 1);

        label_20 = new QLabel(frame_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(172, 0));
        label_20->setFrameShape(QFrame::NoFrame);
        label_20->setFrameShadow(QFrame::Plain);
        label_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_20, 4, 0, 1, 1);

        label_22 = new QLabel(frame_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFrameShape(QFrame::NoFrame);
        label_22->setFrameShadow(QFrame::Plain);
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_22, 4, 1, 1, 1);

        label_21 = new QLabel(frame_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFrameShape(QFrame::NoFrame);
        label_21->setFrameShadow(QFrame::Plain);
        label_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_21, 4, 2, 1, 1);

        label_23 = new QLabel(frame_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFrameShape(QFrame::NoFrame);
        label_23->setFrameShadow(QFrame::Plain);
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_23, 4, 3, 1, 1);

        label_24 = new QLabel(frame_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(172, 0));
        label_24->setFrameShape(QFrame::NoFrame);
        label_24->setFrameShadow(QFrame::Plain);
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_24, 5, 0, 1, 1);

        label_25 = new QLabel(frame_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFrameShape(QFrame::NoFrame);
        label_25->setFrameShadow(QFrame::Plain);
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_25, 5, 1, 1, 1);

        label_26 = new QLabel(frame_5);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFrameShape(QFrame::NoFrame);
        label_26->setFrameShadow(QFrame::Plain);
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_26, 5, 2, 1, 1);

        label_27 = new QLabel(frame_5);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFrameShape(QFrame::NoFrame);
        label_27->setFrameShadow(QFrame::Plain);
        label_27->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_27, 5, 3, 1, 1);

        label_28 = new QLabel(help_frame);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(8, 6, 684, 116));
        label_28->setMinimumSize(QSize(684, 116));
        label_28->setMaximumSize(QSize(684, 116));
        label_28->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_28->setWordWrap(true);
        label_28->setOpenExternalLinks(false);
        label_29 = new QLabel(help_frame);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(8, 274, 684, 36));
        label_29->setMinimumSize(QSize(0, 36));
        label_29->setMaximumSize(QSize(16777215, 36));
        label_29->setTextFormat(Qt::RichText);
        label_29->setWordWrap(true);
        label_29->setOpenExternalLinks(true);

        verticalLayout->addWidget(help_frame);


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
        clearButton->setText(QApplication::translate("QEPVNameSelectDialog", "Clear", 0));
        label_3->setText(QApplication::translate("QEPVNameSelectDialog", "Description", 0));
        label_5->setText(QApplication::translate("QEPVNameSelectDialog", "Pattern", 0));
        label_6->setText(QApplication::translate("QEPVNameSelectDialog", "Match", 0));
        label_7->setText(QApplication::translate("QEPVNameSelectDialog", "No Match", 0));
        label_8->setText(QApplication::translate("QEPVNameSelectDialog", "Wild card character (.)", 0));
        label_9->setText(QApplication::translate("QEPVNameSelectDialog", "A.B", 0));
        label_10->setText(QApplication::translate("QEPVNameSelectDialog", "AFB,  AQB", 0));
        label_11->setText(QApplication::translate("QEPVNameSelectDialog", "AB, BFB", 0));
        label_12->setText(QApplication::translate("QEPVNameSelectDialog", "0 or more qualifier (*)", 0));
        label_13->setText(QApplication::translate("QEPVNameSelectDialog", "X*", 0));
        label_14->setText(QApplication::translate("QEPVNameSelectDialog", "X, XXXX", 0));
        label_15->setText(QApplication::translate("QEPVNameSelectDialog", "ABCD", 0));
        label_16->setText(QApplication::translate("QEPVNameSelectDialog", "0 or more wild cards", 0));
        label_17->setText(QApplication::translate("QEPVNameSelectDialog", ".*", 0));
        label_18->setText(QApplication::translate("QEPVNameSelectDialog", "all names", 0));
        label_19->setText(QApplication::translate("QEPVNameSelectDialog", "none", 0));
        label_20->setText(QApplication::translate("QEPVNameSelectDialog", "Contrained wilde carding", 0));
        label_22->setText(QApplication::translate("QEPVNameSelectDialog", "A.*B", 0));
        label_21->setText(QApplication::translate("QEPVNameSelectDialog", "AB, AXYZB", 0));
        label_23->setText(QApplication::translate("QEPVNameSelectDialog", "PXYB", 0));
        label_24->setText(QApplication::translate("QEPVNameSelectDialog", "Use literal . character", 0));
        label_25->setText(QApplication::translate("QEPVNameSelectDialog", ".*[.].*", 0));
        label_26->setText(QApplication::translate("QEPVNameSelectDialog", "ABC.VAL", 0));
        label_27->setText(QApplication::translate("QEPVNameSelectDialog", "ABC_VAL", 0));
        label_28->setText(QApplication::translate("QEPVNameSelectDialog", "<html><head/><body><p>The filter field allows a regular expression to be specified in order to select a subset of all the PVs available from the archiver. The selected names are used to populate the name combo box, thereby facilitating the selection of a PV.</p><p>While reqular expression can be used to perfom very sophisticated PV name filtering, in practice a few simple pattern matching techniques are all that is required for most needs. The following pattern matching examples illustrate typical uses.</p></body></html>", 0));
        label_29->setText(QApplication::translate("QEPVNameSelectDialog", "<html><head/><body><p>Futher details about regular expressions may be found at http://www.cheatography.com/davechild/cheat-sheets/regular-expressions/</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class QEPVNameSelectDialog: public Ui_QEPVNameSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEPVNAMESELECTDIALOG_H
