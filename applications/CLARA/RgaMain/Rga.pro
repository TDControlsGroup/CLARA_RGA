#! [0]

FORMS  = C:/Users/zgm95989/Desktop/3.2.4-CLARA/framework/ui/mv2_epicsDisplay.ui
FORMS += C:/Users/zgm95989/Desktop/3.2.4-CLARA/framework/ui/barchart.ui
FORMS += C:/Users/zgm95989/Desktop/3.2.4-CLARA/framework/ui/barchart_ana.ui
FORMS += C:/Users/zgm95989/Desktop/3.2.4-CLARA/framework/ui/mv2_main_bar.ui


HEADERS     = RGA.h
RESOURCES   = \
    FileList.qrc
SOURCES     = RGA.cpp \
              main.cpp
QT += core gui xml widgets uitools
#! [0]
target.path = C:\Users\zgm95989\Desktop\3.2.4-CLARA\applications\CLARA\RgaMain\
INSTALLS += target
LIBS += -LC:\Users\zgm95989\Desktop\base-3.15.3\base-3.15.3\bin\win32-x86-mingw -lca -lCom
LIBS += -LC:\Users\zgm95989\Desktop\3.2.4-CLARA\framework\designer -lQEPlugin

INCLUDEPATH += . \
    ./include \
     ../../../framework/adaptation_parameters/ \
     ../../../framework/common/ \
     ../../../framework/api/ \
     ../../../framework/data/ \
     ../../../framework/archive/ \
     ../../../framework/widgets/QEWidget/ \
     ../../../framework/widgets/QEAbstractWidget/ \
     ../../../framework/widgetsCLARA/QEAnalogIndicatorCLARA/ \
     ../../../framework/widgets/QEAnalogProgressBar/ \
     ../../../framework/widgets/QEAnalogSlider/ \
     ../../../framework/widgets/QEBitStatus/ \
     ../../../framework/widgets/QEButton/ \
     ../../../framework/widgets/QEComboBox/ \
     ../../../framework/widgets/QEConfiguredLayout/ \
     ../../../framework/widgets/QEFileBrowser/ \
     ../../../framework/widgets/QEFileImage \
     ../../../framework/widgets/QEForm/ \
     ../../../framework/widgets/QEFormGrid/ \
     ../../../framework/widgets/QEFrame/ \
     ../../../framework/widgets/QEGeneralEdit/ \
     ../../../framework/widgets/QEGroupBox/ \
     ../../../framework/widgets/QEHistogram/ \
     ../../../framework/widgets/QEImage/ \
     ../../../framework/widgets/QELabel/ \
     ../../../framework/widgets/QELineEdit/ \
     ../../../framework/widgets/QELink/ \
     ../../../framework/widgets/QELog/QEog \
     ../../../framework/widgets/QELogin/ \
     ../../../framework/widgets/QEMenuButton/ \
     ../../../framework/widgets/QENumericEdit/ \
     ../../../framework/widgets/QEPeriodic/ \
     ../../../framework/widgets/QEPlot/ \
     ../../../framework/widgetsCLARA/QEPlotterCLARA/ \
     ../../../framework/widgets/QEPvLoadSave/ \
     ../../../framework/widgets/QEPvProperties/ \
     ../../../framework/widgets/QERadioGroup/ \
     ../../../framework/widgets/QERecipe/ \
     ../../../framework/widgets/QEResizeableFrame/ \
     ../../../framework/widgets/QEScratchPad/ \
     ../../../framework/widgets/QEScript/ \
     ../../../framework/widgets/QEShape/ \
     ../../../framework/widgets/QESimpleShape/ \
     ../../../framework/widgets/QESlider/ \
     ../../../framework/widgets/QESpinBox/ \
     ../../../framework/widgets/QEStripChart/ \
     ../../../framework/widgets/QESubstitutedLabel/ \
     ../../../framework/widgets/QETable/
