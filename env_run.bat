set QT_PLUGIN_PATH=""
set PATH=""

set EPICS_CA_ADDR_LIST=192.168.82.10
set EPICS_CA_MAX_ARRAY_BYTES=1000000
set EPICS_HOST_ARCH=win32-x86-mingw
set EPICS_BASE=%TOP%\dependencies\epics\lib\%EPICS_HOST_ARCH%
set QWT_INCLUDE_PATH=%TOP%\dependencies\qwt\include
set QWT_LIB_PATH=%TOP%\dependencies\qwt\lib
set QT5=C:\Qt\Qt5.7.0\5.7\mingw53_32\bin
set DESIGNER=%TOP%\framework\designer

PATH=%EPICS_BASE%;%QWT_LIB_PATH%;%QT5%;%DESIGNER%
