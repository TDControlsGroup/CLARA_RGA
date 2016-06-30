REM ###############
REM Debug version
REM ###############

set TOP=%CD%\..\..\..
call ..\..\..\env_run.bat

cd debug
set PATH=%PATH%;..\..\..\..\framework_debug\designer\
echo %PWD%
Rga.exe
pause