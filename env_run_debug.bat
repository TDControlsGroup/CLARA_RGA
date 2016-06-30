call env_run.bat
REM Remake path for debug
set QT_PLUGIN_PATH=""
set DESIGNER=%TOP%\framework_debug\designer
PATH=%EPICS_BASE%;%QWT_LIB_PATH%;%QT5%
