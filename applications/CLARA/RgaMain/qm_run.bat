REM ###############
REM Run version
REM ###############
set TOP=%CD%\..\..\..
call %TOP%\env_run.bat

cd release
REM To run add QEPlugin
set PATH=%PATH%;../../../../framework/designer
copy "..\RGALIST.txt" ".\" 
Rga.exe