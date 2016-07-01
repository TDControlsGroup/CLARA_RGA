#! [0]

FORMS = ../../../framework/ui/barchart.ui
FORMS += ../../../framework/ui/mv2_epicsDisplay.ui
FORMS += ../../../framework/ui/mv2_rgaDisplay.ui
FORMS += ../../../framework/ui/mv2_main_bar.ui
FORMS += ../../../framework/ui/mv2_stripchart.ui

HEADERS  = RGA.h
HEADERS += ../../../framework\widgets\QEWidget\QEStringFormattingMethods.h
HEADERS += RgaArchiver.h



SOURCES     = main.cpp
SOURCES     += RGA.cpp
SOURCES     += ../../../framework\widgets\QEWidget\QEStringFormattingMethods.cpp
SOURCES     += RgaArchiver.cpp

QT += core gui xml widgets uitools
#! [0]
target.path = .
INSTALLS += target
LIBS += -L../../epics_libs -lca -lCom


    LIBS += -L $$(QEDESLIB) -lQEPlugin



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


