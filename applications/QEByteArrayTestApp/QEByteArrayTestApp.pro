#
#  Author:
#    Andrew Rhyder
#  Contact details:
#    andrew.rhyder@synchrotron.org.au
#

#
# Simple console application to demonstrate programatically using a QEByteArray class to write and read to an EPICS record
#

QT       += core
QT       -= gui

TARGET = QEByteArrayTest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

# Place all intermediate generated files in architecture specific directories
#
MOC_DIR        = O.$$(EPICS_HOST_ARCH)/moc
OBJECTS_DIR    = O.$$(EPICS_HOST_ARCH)/obj
UI_DIR         = O.$$(EPICS_HOST_ARCH)/ui
RCC_DIR        = O.$$(EPICS_HOST_ARCH)/rcc

# Determine EPICS_BASE
_QE_EPICS_BASE = $$(QE_EPICS_BASE)
isEmpty( _QE_EPICS_BASE ) {
    _QE_EPICS_BASE = $$(EPICS_BASE)
    message( QE_EPICS_BASE is not defined. Using EPICS_BASE instead - currently $$_QE_EPICS_BASE )
}

# Check EPICS dependancies
isEmpty( _QE_EPICS_BASE ) {
    error( "EPICS_BASE or QE_EPICS_BASE must be defined. Ensure EPICS is installed and EPICS_BASE or QE_EPICS_BASE is set up." )
}
_EPICS_HOST_ARCH = $$(EPICS_HOST_ARCH)
isEmpty( _EPICS_HOST_ARCH ) {
    error( "EPICS_HOST_ARCH must be defined. Ensure EPICS is installed and EPICS_HOST_ARCH is set up." )
}

DESTDIR = bin

# Install the generated QEByteArrayTest application in QE_TARGET_DIR if defined.
_QE_TARGET_DIR = $$(QE_TARGET_DIR)
isEmpty( _QE_TARGET_DIR ) {
} else {
    QEBYTEARRAYTESTINSTALL.path = $$(QE_TARGET_DIR)/bin/$$(EPICS_HOST_ARCH)
    unix: QEBYTEARRAYTESTINSTALL.files += $$DESTDIR/$$TARGET
    win32: QEBYTEARRAYTESTINSTALL.files += $$DESTDIR/$$TARGET".exe"
    INSTALLS += QEBYTEARRAYTESTINSTALL
}

SOURCES += main.cpp \
    arraywriter.cpp

HEADERS += \
    arraywriter.h


INCLUDEPATH += \
    . \
    ../../framework/widgets/QEWidget \
    ../../framework/data \
    ../../framework/api

LIBS += -L$$_QE_EPICS_BASE/lib/$$(EPICS_HOST_ARCH) -lca -lCom

LIBS += -L../../framework/designer -lQEPlugin

