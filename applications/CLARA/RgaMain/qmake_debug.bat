REM ###############
REM Debug version
REM ###############
set TOP=%CD%\..\..\..
call ..\..\..\env.bat

qmake.exe Rga.pro -r -spec win32-g++ "CONFIG+=debug" "CONFIG+=force_debug_info" "CONFIG+=separate_debug_info"
mingw32-make.exe -j > logfile.txt 2>&1
pause