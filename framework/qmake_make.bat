REM ###############
REM Run version
REM ###############
set TOP=%CD%\..
call ..\env.bat

qmake.exe framework.pro -r -spec win32-g++
mingw32-make.exe -j
pause