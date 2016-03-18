#===========================================================
# Since Qt 4.7.4, enable-auto-import is required to avoid a crash on windows when the qwt dll is loaded
# Depending on compiler the '-W1' may or may not be required. If an error relating to nable-auto-import occurs (missing leading -e) then use -W1 option
#win32:QMAKE_LFLAGS += -enable-auto-import
win32QMAKE_LFLAGS += -Wl,-enable-auto-import
#==========================================================
#Define this if you are using MinGW compiler
#DEFINES += _MINGW=TRUE
#===========================================================
# Project configuration

# Qt 4 configuration
equals( QT_MAJOR_VERSION, 4 ) {
    CONFIG += plugin designer
    QT += core gui multimedia
}

# Qt 5 configuration
equals( QT_MAJOR_VERSION, 5 ) {
    CONFIG += plugin
    QT += core gui designer multimedia
}

TEMPLATE = lib
DEFINES += EXAMPLE_PLUGIN_LIBRARY
TARGET = examplePlugin

DESTDIR = designer

# Check required environment is defined
_QE_FRAMEWORK = $$(QE_FRAMEWORK)
isEmpty( _QE_FRAMEWORK ) {
    exists ("../../framework") {
        _QE_FRAMEWORK = ../../framework
        message( "No need to expect QE_FRAMEWORK while building sample custom designer (examplePlugin) as we are building it as a part of the framework build" )
    } else {
        error( "Can't proceed building sample custom designer (examplePlugin) as QE_FRAMEWORK is not defined. This should be the path to the epicsqt framework source (example: /home/myname/epicsqt/framework)" )
    }
} else {
    message( "Building sample custom designer (examplePlugin) against framework found in environment variable QE_FRAMEWORK" )

    # Cater for QE_TARGET_DIR style directory layouts.
    LIBS += -L$$(QE_FRAMEWORK)/lib/$$(EPICS_HOST_ARCH)
}

# Place all intermediate generated files in architecture specific directories
#
MOC_DIR        = O.$$(EPICS_HOST_ARCH)/moc
OBJECTS_DIR    = O.$$(EPICS_HOST_ARCH)/obj
UI_DIR         = O.$$(EPICS_HOST_ARCH)/ui
RCC_DIR        = O.$$(EPICS_HOST_ARCH)/rcc

# The QE framework has a mechanism to install
# include files into a single location for projects
# like this one. This mechanism should be used, and not
# use the environment variable QE_FRAMEWORK.
#
# Cater for both  ../../framework and QE_TARGET_DIR directory layouts.
#
INCLUDEPATH += \
    $$_QE_FRAMEWORK/include \
    $$_QE_FRAMEWORK/widgets/QEWidget \
    $$_QE_FRAMEWORK/api \
    $$_QE_FRAMEWORK/data \
    $$_QE_FRAMEWORK/common

#===========================================================
# Project files
#
# Plugin files
include (plugin/plugin.pri)

# Widget sub projects
# Included .pri (project include) files for each widget
#
include (widgets/exampleWidget/exampleWidget.pri)
# INCLUE NEXT WIDGET HERE...

# end

