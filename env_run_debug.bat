call %TOP%\env_run.bat
REM Remake path for debug
REM Both needed for loading dll and runtime
set DESIGNER=%TOP%\framework_debug\designer
set QT_PLUGIN_PATH=%DESIGNER%\..

PATH=%OLDPATH%;%DESIGNER%;%EPICS_LIBS%;%QWT_LIB_PATH%
