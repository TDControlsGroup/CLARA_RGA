REM ###############
REM Debug version
REM ###############

set TOP=%CD%\..
call ..\env.bat


mkdir ..\framework_debug
cd ..\framework_debug

qmake.exe ..\framework\framework.pro -r -spec win32-g++ "CONFIG+=debug" "CONFIG+=force_debug_info" "CONFIG+=separate_debug_info"
C:\Qt\Qt5.5.1min\Tools\mingw492_32\bin\mingw32-make.exe -j
pause