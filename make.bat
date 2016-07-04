REM Clean before release build
%QTEXE%\mingw32-make.exe clean > temp.txt
%QTBIN%\qmake.exe %MYPRO% -r -spec win32-g++ 
%QTEXE%\mingw32-make.exe -j > log_make.txt 2>&1