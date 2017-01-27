#! [0]


FORMS =  ./ui/barchart.ui
FORMS += ./ui/mv2_widget_led.ui
FORMS += ./ui/mv2_widget_status.ui
FORMS += ./ui/mv2_epicsDisplay_v2.ui
FORMS += ./ui/mv2_rgaDisplay.ui
FORMS += ./ui/mv2_main_bar.ui
FORMS += ./ui/mv2_stripchart.ui
DEFINES += "_MINGW=TRUE"
HEADERS = RGA.h
HEADERS += RgaCA.h

#Let us see the terminal as well
#CONFIG   += console
DEFINES += _MINGW=TRUE

SOURCES     = main.cpp
SOURCES     += RGA.cpp


QT += core gui xml widgets uitools network
#! [0]
target.path = .
INSTALLS += target
LIBS += -L../../epics_libs -lca -lCom


    LIBS += -L $$(QEDESLIB) -lQEPlugin



INCLUDEPATH += . \
    $(EPICS_BASE)/include \
	$(EPICS_BASE)/include/os/WIN32 \
	$(EPICS_BASE)/include/compiler/gcc \
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


