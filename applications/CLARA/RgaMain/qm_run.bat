REM ###############
REM Run version
REM ###############
set TOP=%CD%\..\..\..
call ..\..\..\env_run.bat

cd release
REM To run add QEPlugin
set PATH=%PATH%;../../../../framework/designer
cd release
Rga.exe