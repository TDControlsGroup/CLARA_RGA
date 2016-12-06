# QEAnalogIndicator.pri
#
# This file is part of the EPICS QT Framework, and included into
# and as part of the overall framework plugins.pro project file.
#
OTHER_FILES += \
    widgetsCLARA/QEAnalogIndicatorCLARA/QEAnalogIndicator.png

RESOURCES += \
    widgetsCLARA/QEAnalogIndicatorCLARA/QEAnalogIndicator.qrc

HEADERS += \
    widgetsCLARA/QEAnalogIndicatorCLARA/QEAnalogIndicator.h \
    widgetsCLARA/QEAnalogIndicatorCLARA/QEAnalogIndicatorManager.h

SOURCES += \
    widgetsCLARA/QEAnalogIndicatorCLARA/QEAnalogIndicator.cpp \
    widgetsCLARA/QEAnalogIndicatorCLARA/QEAnalogIndicatorManager.cpp

INCLUDEPATH += \
    widgetsCLARA/QEAnalogIndicatorCLARA

# end
