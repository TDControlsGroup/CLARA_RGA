SET PATH=""
SET PATH=C:\Users\zgm95989\Desktop\3.2.4-CLARA\Projects\Archiver\apache-ant-1.10.1-bin\apache-ant-1.10.1\bin
SET PATH=%PATH%;C:\Program Files (x86)\Java\jre1.8.0_121\bin
SET PATH=%PATH%;C:\Program Files\Java\jdk1.8.0_121
SET JAVA_HOME=C:\Program Files\Java\jdk1.8.0_121
ECHO %PATH%
ant -clean
ant -Xlint
pause