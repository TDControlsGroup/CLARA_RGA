set PATH=""
set EPICS_CA_MAX_ARRAY_BYTES=10000
set EPICS_CA_AUTO_ADDR_LIST=NO
set EPICS_CA_ADDR_LIST=192.168.83.255
set QE_ARCHIVE_LIST=192.168.83.13:8888/cgi-bin/ArchiveDataServer.cgi
REM set QE_ARCHIVE_LIST=192.168.83.13:8888/cgi-bin/ArchiveDataServer.cgi
qegui.exe -e striptool.ui

 