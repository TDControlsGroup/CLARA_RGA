REM ###############
REM Run version
REM ###############
set TOP=%CD%\..
call ..\env.bat
MYPRO=framework.pro
call ..\make_fast.bat

pause