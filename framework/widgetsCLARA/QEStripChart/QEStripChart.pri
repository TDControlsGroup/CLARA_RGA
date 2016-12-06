# QEStripChart.pri
#
# This file is part of the EPICS QT Framework, and included into
# and as part of the overall framework plugins.pro project file.
#

OTHER_FILES += \
    widgetsCLARA/QEStripChart/QEStripChart.png \
    widgetsCLARA/QEStripChart/archive.png \
    widgetsCLARA/QEStripChart/go_back.png \
    widgetsCLARA/QEStripChart/go_fwd.png \
    widgetsCLARA/QEStripChart/linear_scale.png \
    widgetsCLARA/QEStripChart/log_scale.png \
    widgetsCLARA/QEStripChart/normal_video.png \
    widgetsCLARA/QEStripChart/open_file.png \
    widgetsCLARA/QEStripChart/page_backward.png \
    widgetsCLARA/QEStripChart/page_forward.png \
    widgetsCLARA/QEStripChart/pause.png \
    widgetsCLARA/QEStripChart/play.png \
    widgetsCLARA/QEStripChart/powered_by_asp.png \
    widgetsCLARA/QEStripChart/reverse_video.png  \
    widgetsCLARA/QEStripChart/save_file.png \
    widgetsCLARA/QEStripChart/select_date_times.png \
    widgetsCLARA/QEStripChart/select_time.png

RESOURCES += \
    widgetsCLARA/QEStripChart/QEStripChart.qrc

HEADERS += \
    widgetsCLARA/QEStripChart/QEStripChart.h \
    widgetsCLARA/QEStripChart/QEStripChartState.h \
    widgetsCLARA/QEStripChart/QEStripChartAdjustPVDialog.h \
    widgetsCLARA/QEStripChart/QEStripChartContextMenu.h \
    widgetsCLARA/QEStripChart/QEStripChartDurationDialog.h \
    widgetsCLARA/QEStripChart/QEStripChartItem.h \
    widgetsCLARA/QEStripChart/QEStripChartNames.h \
    widgetsCLARA/QEStripChart/QEStripChartRangeDialog.h \
    widgetsCLARA/QEStripChart/QEStripChartTimeDialog.h \
    widgetsCLARA/QEStripChart/QEStripChartToolBar.h \
    widgetsCLARA/QEStripChart/QEStripChartUtilities.h \
    widgetsCLARA/QEStripChart/QEStripChartManager.h \
    widgetsCLARA/QEStripChart/QEStripChartStatistics.h

SOURCES += \
    widgetsCLARA/QEStripChart/QEStripChart.cpp \
    widgetsCLARA/QEStripChart/QEStripChartState.cpp \
    widgetsCLARA/QEStripChart/QEStripChartAdjustPVDialog.cpp \
    widgetsCLARA/QEStripChart/QEStripChartContextMenu.cpp \
    widgetsCLARA/QEStripChart/QEStripChartDurationDialog.cpp \
    widgetsCLARA/QEStripChart/QEStripChartItem.cpp \
    widgetsCLARA/QEStripChart/QEStripChartNames.cpp \
    widgetsCLARA/QEStripChart/QEStripChartRangeDialog.cpp \
    widgetsCLARA/QEStripChart/QEStripChartTimeDialog.cpp \
    widgetsCLARA/QEStripChart/QEStripChartToolBar.cpp \
    widgetsCLARA/QEStripChart/QEStripChartUtilities.cpp \
    widgetsCLARA/QEStripChart/QEStripChartManager.cpp \
    widgetsCLARA/QEStripChart/QEStripChartStatistics.cpp

INCLUDEPATH += \
    widgetsCLARA/QEStripChart

FORMS += \
    widgetsCLARA/QEStripChart/QEStripChartAdjustPVDialog.ui \
    widgetsCLARA/QEStripChart/QEStripChartDurationDialog.ui \
    widgetsCLARA/QEStripChart/QEStripChartRangeDialog.ui \
    widgetsCLARA/QEStripChart/QEStripChartTimeDialog.ui \
    widgetsCLARA/QEStripChart/QEStripChartStatistics.ui

# end
