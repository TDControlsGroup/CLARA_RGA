REM ###############
REM Run version
REM ###############
set TOP=%CD%\..
call ..\env.bat

%QTBIN%\qmake.exe framework.pro -r -spec win32-g++
%QTEXE%\mingw32-make.exe -j
pause