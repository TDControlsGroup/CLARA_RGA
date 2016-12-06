REM ###############
REM Run version
REM ###############
set TOP=%CD%\..
call ..\env_run_debug.bat

%QTEXE%\..\..\QtCreator\bin\qtcreator.exe
