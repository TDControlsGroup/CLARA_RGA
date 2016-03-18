set PATH=""
set QT_PLUGIN_PATH=""


REM PATH=C:\Users\zgm95989\Desktop\3.2.4\framework\design
REM PATH=C:\Qtmin\Qt5.5.1\5.5\mingw492_32\bin;%PATH%

set EPICS_HOST_ARCH=win32-x86-mingw
set PATH=C:\Users\zgm95989\Desktop\base-3.15.3\base-3.15.3\bin\%EPICS_HOST_ARCH%
set PATH=C:\Qt\Qt5.5.1_mingw\5.5\mingw492_32\bin;C:\Qt\Qt5.5.1_mingw\Tools\mingw492_32\bin;%PATH%
set PATH=C:\Users\zgm95989\Desktop\qwt-6.1.2\lib;%PATH%
set PATH=C:\Users\zgm95989\Desktop\3.2.4-CLARA\framework\designer;%PATH%

REM Needs this if path moves or you change code. I think it tries the default dir
set QT_PLUGIN_PATH=C:\Users\zgm95989\Desktop\3.2.4-CLARA\framework\
C:\Users\zgm95989\Desktop\3.2.4\applications\QEGuiApp\bin\qegui.exe -e C:\Users\zgm95989\Desktop\3.2.4-CLARA\framework\ui\mv2_main_bar.ui -m "CHAS=chas"