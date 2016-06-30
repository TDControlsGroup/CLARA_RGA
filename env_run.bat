set QT_PLUGIN_PATH=""
set PATH=""

set EPICS_HOST_ARCH=win32-x86-mingw
set EPICS_BASE=%TOP%\dependencies\epics\lib\%EPICS_HOST_ARCH%
set QWT_INCLUDE_PATH=%TOP%\dependencies\qwt\include
set QWT_LIB_PATH=%TOP%\dependencies\qwt\lib
set QT5=C:\Qtmin\Qt5.5.1\5.5\mingw492_32\bin

PATH=%EPICS_BASE%;%QWT_LIB_PATH%;%QT5%
