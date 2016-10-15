REM ###############
REM Debug version
REM ###############

set TOP=%CD%\..\..\..
call %TOP%\env_run_debug.bat
%QTEXE%\..\..\QtCreator\bin\qtcreator.exe
pause