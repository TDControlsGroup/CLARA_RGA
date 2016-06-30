REM ###############
REM Run version
REM ###############
set TOP=%CD%\..\..
call ..\..\env.bat

mingw32-make.exe clean
qmake.exe QEGuiApp.pro -r -spec win32-g++
mingw32-make.exe -j
pause