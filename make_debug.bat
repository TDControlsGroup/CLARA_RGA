REM Dont clean for debug
%QTBIN%\qmake.exe %MYPRO% -r -spec win32-g++ "CONFIG+=debug" "CONFIG+=force_debug_info" "CONFIG+=separate_debug_info" 
%QTEXE%\mingw32-make.exe -j > log_debug.txt 2>&1