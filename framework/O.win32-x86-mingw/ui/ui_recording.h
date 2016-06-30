/********************************************************************************
** Form generated from reading UI file 'recording.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDING_H
#define UI_RECORDING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recording
{
public:
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButtonLive;
    QRadioButton *radioButtonPlayback;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBoxLive;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonRecord;
    QPushButton *pushButtonClear;
    QLabel *labelImageCountRecord;
    QSpinBox *spinBoxMaxImages;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonDiscardOldest;
    QRadioButton *radioButtonStopAtLimit;
    QGroupBox *groupBoxPlayback;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonPlay;
    QDoubleSpinBox *doubleSpinBoxPlaybackRate;
    QCheckBox *checkBoxLoop;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonFirstImage;
    QPushButton *pushButtonPreviousImage;
    QSlider *horizontalSliderPosition;
    QPushButton *pushButtonNextImage;
    QPushButton *pushButtonLastImage;
    QLabel *labelImageCountPlayback;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *recording)
    {
        if (recording->objectName().isEmpty())
            recording->setObjectName(QStringLiteral("recording"));
        recording->resize(549, 216);
        horizontalLayout_4 = new QHBoxLayout(recording);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        frame = new QFrame(recording);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        radioButtonLive = new QRadioButton(frame);
        radioButtonLive->setObjectName(QStringLiteral("radioButtonLive"));
        radioButtonLive->setChecked(true);

        verticalLayout_5->addWidget(radioButtonLive);

        radioButtonPlayback = new QRadioButton(frame);
        radioButtonPlayback->setObjectName(QStringLiteral("radioButtonPlayback"));
        radioButtonPlayback->setEnabled(false);

        verticalLayout_5->addWidget(radioButtonPlayback);

        radioButtonLive->raise();
        radioButtonLive->raise();
        radioButtonPlayback->raise();

        horizontalLayout_4->addWidget(frame);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBoxLive = new QGroupBox(recording);
        groupBoxLive->setObjectName(QStringLiteral("groupBoxLive"));
        groupBoxLive->setMinimumSize(QSize(450, 95));
        horizontalLayout_2 = new QHBoxLayout(groupBoxLive);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonRecord = new QPushButton(groupBoxLive);
        pushButtonRecord->setObjectName(QStringLiteral("pushButtonRecord"));
        pushButtonRecord->setMaximumSize(QSize(50, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qe/image/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRecord->setIcon(icon);
        pushButtonRecord->setCheckable(true);

        horizontalLayout_2->addWidget(pushButtonRecord);

        pushButtonClear = new QPushButton(groupBoxLive);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));

        horizontalLayout_2->addWidget(pushButtonClear);

        labelImageCountRecord = new QLabel(groupBoxLive);
        labelImageCountRecord->setObjectName(QStringLiteral("labelImageCountRecord"));
        labelImageCountRecord->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(labelImageCountRecord);

        spinBoxMaxImages = new QSpinBox(groupBoxLive);
        spinBoxMaxImages->setObjectName(QStringLiteral("spinBoxMaxImages"));
        spinBoxMaxImages->setMaximum(200);

        horizontalLayout_2->addWidget(spinBoxMaxImages);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButtonDiscardOldest = new QRadioButton(groupBoxLive);
        radioButtonDiscardOldest->setObjectName(QStringLiteral("radioButtonDiscardOldest"));
        radioButtonDiscardOldest->setChecked(true);

        verticalLayout_2->addWidget(radioButtonDiscardOldest);

        radioButtonStopAtLimit = new QRadioButton(groupBoxLive);
        radioButtonStopAtLimit->setObjectName(QStringLiteral("radioButtonStopAtLimit"));

        verticalLayout_2->addWidget(radioButtonStopAtLimit);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addWidget(groupBoxLive);

        groupBoxPlayback = new QGroupBox(recording);
        groupBoxPlayback->setObjectName(QStringLiteral("groupBoxPlayback"));
        groupBoxPlayback->setMinimumSize(QSize(450, 95));
        verticalLayout_3 = new QVBoxLayout(groupBoxPlayback);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonPlay = new QPushButton(groupBoxPlayback);
        pushButtonPlay->setObjectName(QStringLiteral("pushButtonPlay"));
        pushButtonPlay->setMaximumSize(QSize(50, 16777215));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qe/image/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlay->setIcon(icon1);
        pushButtonPlay->setCheckable(true);

        horizontalLayout_3->addWidget(pushButtonPlay);

        doubleSpinBoxPlaybackRate = new QDoubleSpinBox(groupBoxPlayback);
        doubleSpinBoxPlaybackRate->setObjectName(QStringLiteral("doubleSpinBoxPlaybackRate"));
        doubleSpinBoxPlaybackRate->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(doubleSpinBoxPlaybackRate);

        checkBoxLoop = new QCheckBox(groupBoxPlayback);
        checkBoxLoop->setObjectName(QStringLiteral("checkBoxLoop"));

        horizontalLayout_3->addWidget(checkBoxLoop);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonFirstImage = new QPushButton(groupBoxPlayback);
        pushButtonFirstImage->setObjectName(QStringLiteral("pushButtonFirstImage"));
        pushButtonFirstImage->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(pushButtonFirstImage);

        pushButtonPreviousImage = new QPushButton(groupBoxPlayback);
        pushButtonPreviousImage->setObjectName(QStringLiteral("pushButtonPreviousImage"));
        pushButtonPreviousImage->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(pushButtonPreviousImage);

        horizontalSliderPosition = new QSlider(groupBoxPlayback);
        horizontalSliderPosition->setObjectName(QStringLiteral("horizontalSliderPosition"));
        horizontalSliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderPosition);

        pushButtonNextImage = new QPushButton(groupBoxPlayback);
        pushButtonNextImage->setObjectName(QStringLiteral("pushButtonNextImage"));
        pushButtonNextImage->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(pushButtonNextImage);

        pushButtonLastImage = new QPushButton(groupBoxPlayback);
        pushButtonLastImage->setObjectName(QStringLiteral("pushButtonLastImage"));
        pushButtonLastImage->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(pushButtonLastImage);

        labelImageCountPlayback = new QLabel(groupBoxPlayback);
        labelImageCountPlayback->setObjectName(QStringLiteral("labelImageCountPlayback"));
        labelImageCountPlayback->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(labelImageCountPlayback);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(groupBoxPlayback);


        horizontalLayout_4->addLayout(verticalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        retranslateUi(recording);

        QMetaObject::connectSlotsByName(recording);
    } // setupUi

    void retranslateUi(QWidget *recording)
    {
        recording->setWindowTitle(QApplication::translate("recording", "Form", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonLive->setToolTip(QApplication::translate("recording", "Switch to live mode", 0));
#endif // QT_NO_TOOLTIP
        radioButtonLive->setText(QApplication::translate("recording", "Live", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonPlayback->setToolTip(QApplication::translate("recording", "Switch to playback mode", 0));
#endif // QT_NO_TOOLTIP
        radioButtonPlayback->setText(QApplication::translate("recording", "Playback", 0));
        groupBoxLive->setTitle(QApplication::translate("recording", "Live", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonRecord->setToolTip(QApplication::translate("recording", "Record live images", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButtonClear->setToolTip(QApplication::translate("recording", "Clear recorded images", 0));
#endif // QT_NO_TOOLTIP
        pushButtonClear->setText(QApplication::translate("recording", "Clear", 0));
#ifndef QT_NO_TOOLTIP
        labelImageCountRecord->setToolTip(QApplication::translate("recording", "Number of images recorded", 0));
#endif // QT_NO_TOOLTIP
        labelImageCountRecord->setText(QApplication::translate("recording", "0", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxMaxImages->setToolTip(QApplication::translate("recording", "Maximum number of images that can be recorded", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        radioButtonDiscardOldest->setToolTip(QApplication::translate("recording", "Disard oldest images when recording limit is reached", 0));
#endif // QT_NO_TOOLTIP
        radioButtonDiscardOldest->setText(QApplication::translate("recording", "Discard oldest", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonStopAtLimit->setToolTip(QApplication::translate("recording", "Stop recording images when recording limit is reached", 0));
#endif // QT_NO_TOOLTIP
        radioButtonStopAtLimit->setText(QApplication::translate("recording", "Stop at limit", 0));
        groupBoxPlayback->setTitle(QApplication::translate("recording", "Playback", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonPlay->setToolTip(QApplication::translate("recording", "Play back recorded images", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxPlaybackRate->setToolTip(QApplication::translate("recording", "Interval (in seconds) between image updates", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxLoop->setToolTip(QApplication::translate("recording", "Loop back to first image when playing", 0));
#endif // QT_NO_TOOLTIP
        checkBoxLoop->setText(QApplication::translate("recording", "Loop", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonFirstImage->setToolTip(QApplication::translate("recording", "First recorded image", 0));
#endif // QT_NO_TOOLTIP
        pushButtonFirstImage->setText(QApplication::translate("recording", "<<", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonPreviousImage->setToolTip(QApplication::translate("recording", "Previous recorded image", 0));
#endif // QT_NO_TOOLTIP
        pushButtonPreviousImage->setText(QApplication::translate("recording", "<", 0));
#ifndef QT_NO_TOOLTIP
        horizontalSliderPosition->setToolTip(QApplication::translate("recording", "Position in recorded images", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButtonNextImage->setToolTip(QApplication::translate("recording", "Next recorded image", 0));
#endif // QT_NO_TOOLTIP
        pushButtonNextImage->setText(QApplication::translate("recording", ">", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonLastImage->setToolTip(QApplication::translate("recording", "Last recorded image", 0));
#endif // QT_NO_TOOLTIP
        pushButtonLastImage->setText(QApplication::translate("recording", ">>", 0));
#ifndef QT_NO_TOOLTIP
        labelImageCountPlayback->setToolTip(QApplication::translate("recording", "Displayed image / Number of images recorded", 0));
#endif // QT_NO_TOOLTIP
        labelImageCountPlayback->setText(QApplication::translate("recording", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class recording: public Ui_recording {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDING_H
