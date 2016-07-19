set QT_PLUGIN_PATH=""
set PATH=""

REM set QT_ROOT=C:\Qt\Qt5.7.0
REM set QTMIN=mingw53_32
REM set QTMIN_TOOLS=mingw530_32
REM set QTVER=5.7

set QT_ROOT=C:\Qt\Qt5.5.1
Rem set QT_ROOT=C:\Qt\Qt5.5.1min
set QTMIN=mingw492_32
set QTMIN_TOOLS=mingw492_32
set QTVER=5.5

set QTBIN=%QT_ROOT%\%QTVER%\%QTMIN%\bin
set QTEXE=%QT_ROOT%\Tools\%QTMIN_TOOLS%\bin
set QTDIR=%QT_ROOT%\%QTVER%\%QTMIN%\

set PATH=%QTBIN%;%QTEXE%

set EPICS_BASE=%TOP%\dependencies\epics
set EPICS_HOST_ARCH=win32-x86-mingw
set QWT_INCLUDE_PATH=%TOP%\dependencies\qwt\include
set QWT_LIB_PATH=%TOP%\dependencies\qwt\lib

set QEDESLIB=%TOP%\framework\designer\


