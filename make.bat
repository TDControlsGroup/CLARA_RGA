REM Clean before release build
%QTEXE%\mingw32-make.exe clean > temp.txt
%QTBIN%\qmake.exe %MYPRO% -r -spec win32-g++ > log_qmake.txt 2>&1 
%QTEXE%\mingw32-make.exe -j > log_make.txt 2>&1