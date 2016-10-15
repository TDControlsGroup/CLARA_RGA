REM ###############
REM Debug version
REM ###############

set TOP=%CD%\..\..\..
call %TOP%\env_run_debug.bat

cd debug
Rga.exe
pause