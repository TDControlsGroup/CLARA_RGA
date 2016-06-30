/********************************************************************************
** Form generated from reading UI file 'QEPlotterItemDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QEPLOTTERITEMDIALOG_H
#define UI_QEPLOTTERITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QEPlotterItemDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *dataEdit;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *aliasEdit;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *sizeEdit;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clearButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QEPlotterItemDialog)
    {
        if (QEPlotterItemDialog->objectName().isEmpty())
            QEPlotterItemDialog->setObjectName(QStringLiteral("QEPlotterItemDialog"));
        QEPlotterItemDialog->resize(500, 210);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QEPlotterItemDialog->sizePolicy().hasHeightForWidth());
        QEPlotterItemDialog->setSizePolicy(sizePolicy);
        QEPlotterItemDialog->setMinimumSize(QSize(400, 210));
        QEPlotterItemDialog->setMaximumSize(QSize(880, 210));
        verticalLayout = new QVBoxLayout(QEPlotterItemDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        label_2 = new QLabel(QEPlotterItemDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setIndent(0);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        dataEdit = new QLineEdit(QEPlotterItemDialog);
        dataEdit->setObjectName(QStringLiteral("dataEdit"));

        gridLayout->addWidget(dataEdit, 0, 1, 1, 1);

        label = new QLabel(QEPlotterItemDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_3 = new QLabel(QEPlotterItemDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setIndent(0);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        aliasEdit = new QLineEdit(QEPlotterItemDialog);
        aliasEdit->setObjectName(QStringLiteral("aliasEdit"));

        gridLayout->addWidget(aliasEdit, 2, 1, 1, 1);

        label_5 = new QLabel(QEPlotterItemDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        label_4 = new QLabel(QEPlotterItemDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setIndent(0);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        sizeEdit = new QLineEdit(QEPlotterItemDialog);
        sizeEdit->setObjectName(QStringLiteral("sizeEdit"));

        gridLayout->addWidget(sizeEdit, 4, 1, 1, 1);

        label_6 = new QLabel(QEPlotterItemDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(800, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        clearButton = new QPushButton(QEPlotterItemDialog);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(clearButton);

        buttonBox = new QDialogButtonBox(QEPlotterItemDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QEPlotterItemDialog);

        QMetaObject::connectSlotsByName(QEPlotterItemDialog);
    } // setupUi

    void retranslateUi(QDialog *QEPlotterItemDialog)
    {
        QEPlotterItemDialog->setWindowTitle(QApplication::translate("QEPlotterItemDialog", "Define plotter data attributes", 0));
        label_2->setText(QApplication::translate("QEPlotterItemDialog", "Data Source", 0));
#ifndef QT_NO_TOOLTIP
        dataEdit->setToolTip(QApplication::translate("QEPlotterItemDialog", "<html><head/><body><p>Enter a regular PV name or &quot;=&quot; followed by calc record style expression (e.g. =9*A/5 + 32).</p><p/></body></html>", 0));
#endif // QT_NO_TOOLTIP
        dataEdit->setText(QString());
        label->setText(QApplication::translate("QEPlotterItemDialog", "Eg: YOUR_PV.VAL or =9*A/5+32", 0));
        label_3->setText(QApplication::translate("QEPlotterItemDialog", "Alias", 0));
#ifndef QT_NO_TOOLTIP
        aliasEdit->setToolTip(QApplication::translate("QEPlotterItemDialog", "<html><head/><body><p>Enter meaningful name for selected PV (e.g.Energy).</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        aliasEdit->setText(QString());
        label_5->setText(QApplication::translate("QEPlotterItemDialog", "Eg: Energy or Ion BPM Intensity", 0));
        label_4->setText(QApplication::translate("QEPlotterItemDialog", "Num. Elements", 0));
#ifndef QT_NO_TOOLTIP
        sizeEdit->setToolTip(QApplication::translate("QEPlotterItemDialog", "<html><head/><body><p>Enter regular PV name or postive decimal interger (e.g. 42) </p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        sizeEdit->setText(QString());
        label_6->setText(QApplication::translate("QEPlotterItemDialog", "Eg: scan1.NPTS or literal integer e.g. 42", 0));
        clearButton->setText(QApplication::translate("QEPlotterItemDialog", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class QEPlotterItemDialog: public Ui_QEPlotterItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QEPLOTTERITEMDIALOG_H
