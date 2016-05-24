TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    scandata.cpp \
    stripFile.cpp \
    rgaxml.cpp

SOURCES += ../tinyxml/tinyxml.cpp
SOURCES += ../tinyxml/tinyxmlparser.cpp
SOURCES += ../tinyxml/tinystr.cpp
SOURCES += ../tinyxml/tinyxmlerror.cpp

INCLUDEPATH += . \
    ./include \
    ../tinyxml/ \

HEADERS += \
    scandata.h \
    stripFile.h \
    rgaxml.h

DISTFILES += \
    filelist.xml
