REM ###############
REM Debug version
REM ###############

set TOP=%CD%\..
call ..\env.bat
cd

mkdir ..\framework_debug
cd ..\framework_debug

qmake.exe ..\framework\framework.pro -r -spec win32-g++ "CONFIG+=debug" "CONFIG+=force_debug_info" "CONFIG+=separate_debug_info"
mingw32-make.exe -j > logfile.txt 2>&1 
copy logfile.txt ..\framework
cd ..\framework
type logfile.txt
pause