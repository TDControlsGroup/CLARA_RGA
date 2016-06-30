REM ###############
REM Run version
REM ###############
set TOP=%CD%\..\..\..
call ..\..\..\env.bat

qmake.exe Rga.pro -r -spec win32-g++
C:\Qt\Qt5.5.1min\Tools\mingw492_32\bin\mingw32-make.exe -j