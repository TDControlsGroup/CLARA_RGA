REM ###############
REM Run version
REM ###############
set TOP=%CD%\..
call ..\env.bat

cd ..\framework_debug
C:\Qt\Qt5.5.1min\Tools\mingw492_32\bin\mingw32-make.exe clean
pause