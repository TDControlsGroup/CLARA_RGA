cd C:\Users\rory\Desktop\base-3.15.3\base-3.15.3\bin\win32-x86-mingw
call win32.bat > temp.tmp
cd C:\Users\rory\Desktop\base-3.15.3\base-3.15.3\db
REM set EPICS_CA_AUTO_ADDR_LIST=NO
REM set EPICS_CA_ADDR_LIST=192.168.1.5
caput -t INJ-LSR-DLY-01:BCAL 80
caget testdev:TLC
caget testdev:TLI

caput -t INJ-LSR-DLY-01:BCAL 50
caget testdev:TLC
caget testdev:TLI
caget testdev:testpu:BSA1.NELM

caput -t INJ-LSR-DLY-01:BCAL 40
caget testdev:TLC
caget testdev:TLI
caget testdev:testpu:BSA1.NELM

caput -t INJ-LSR-DLY-01:BCAL 30
caget testdev:TLC
caget testdev:TLI
caget testdev:testpu:BSA1.NELM

caput -t INJ-LSR-DLY-01:BCAL 20
caget testdev:TLC
caget testdev:TLI
caget testdev:testpu:BSA1.NELM

caput -t INJ-LSR-DLY-01:BCAL 10
caget testdev:TLC
caget testdev:TLI
caget testdev:testpu:BSA1.NELM

Rem Test NELM and INDX. Assume that BDF needs to be triggered
caput -t INJ-LSR-DLY-01:BCAL 5
caput -t testdev:testpu:BDF.PROC 0
caget testdev:TLC
caget testdev:TLI
caget testdev:testpu:BSA1.NELM
caget testdev:testpu:BSA1.INDX

caput -t INJ-LSR-DLY-01:BCAL 80
caput -t testdev:testpu:BDF.PROC 0
caget testdev:TLC
caget testdev:TLI
caget testdev:testpu:BSA1.NELM
caget testdev:testpu:BSA1.INDX