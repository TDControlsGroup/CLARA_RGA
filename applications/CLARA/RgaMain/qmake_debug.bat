REM ###############
REM Debug version
REM ###############
set TOP=%CD%\..\..\..
call ..\..\..\env_debug.bat
set MYPRO=Rga.pro
call ..\..\..\make_debug.bat
pause