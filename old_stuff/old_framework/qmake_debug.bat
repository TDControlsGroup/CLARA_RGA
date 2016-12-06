REM ###############
REM Debug version
REM ###############

set TOP=%CD%\..
call ..\env.bat
cd

mkdir ..\framework_debug
cd ..\framework_debug
set MYPRO=..\framework\framework.pro
call ..\make_debug.bat
copy log_debug.txt ..\framework\log_debug.txt
cd ..\framework
pause