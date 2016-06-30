REM ###############
REM Run version
REM ###############
set TOP=%CD%\..\..\..
call ..\..\..\env.bat

%QTEXE%\qmake.exe Rga.pro -r -spec win32-g++
%QTEXE%\mingw32-make.exe -j
pause