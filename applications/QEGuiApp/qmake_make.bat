REM ###############
REM Run version
REM ###############
set TOP=%CD%\..\..
call ..\..\env.bat

%QTEXE%\mingw32-make.exe clean
%QTBIN%\qmake.exe QEGuiApp.pro -r -spec win32-g++
%QTEXE%\mingw32-make.exe -j
pause