REM ###############
REM Run version
REM ###############
set TOP=%CD%\..
call ..\env_debug.bat
cd
cd ..\framework_debug
%QTEXE%\mingw32-make.exe clean
pause