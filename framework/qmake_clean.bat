REM ###############
REM Run version
REM ###############
set TOP=%CD%\..
call ..\env.bat

%QTEXE%\mingw32-make.exe clean
pause