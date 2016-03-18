# QEPlotter.pri
#
# This file is part of the EPICS QT Framework, and included into
# and as part of the overall framework plugins.pro project file.
#
OTHER_FILES += \
    widgetsCLARA/QEPlotterCLARA/QEPlotter.png

RESOURCES += \
    widgetsCLARA/QEPlotterCLARA/QEPlotter.qrc

HEADERS += \
    widgetsCLARA/QEPlotterCLARA/QEPlotter.h \
    widgetsCLARA/QEPlotterCLARA/QEPlotterNames.h \
    widgetsCLARA/QEPlotterCLARA/QEPlotterItemDialog.h \
    widgetsCLARA/QEPlotterCLARA/QEPlotterMenu.h \
    widgetsCLARA/QEPlotterCLARA/QEPlotterState.h \
    widgetsCLARA/QEPlotterCLARA/QEPlotterToolBar.h \
    widgetsCLARA/QEPlotterCLARA/QEPlotterManager.h

SOURCES += \
    widgetsCLARA/QEPlotterCLARA/QEPlotter.cpp \
    widgetsCLARA/QEPlotterCLARA/QEPlotterItemDialog.cpp \
    widgetsCLARA/QEPlotterCLARA/QEPlotterMenu.cpp \
    widgetsCLARA/QEPlotterCLARA/QEPlotterState.cpp \
    widgetsCLARA/QEPlotterCLARA/QEPlotterToolBar.cpp \
    widgetsCLARA/QEPlotterCLARA/QEPlotterManager.cpp

INCLUDEPATH += \
    widgetsCLARA/QEPlotterCLARA

FORMS += \
    widgetsCLARA/QEPlotterCLARA/QEPlotterItemDialog.ui

# end
