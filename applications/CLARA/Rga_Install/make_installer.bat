set PATH="C:\Program Files (x86)\WiX Toolset v3.10\bin"
REM heat 
REM heat dir "." -cg "rga" -gg -sfrag -template:fragment -var ".\" -out template.wxs
REM candle installer.wxs template.wxs
REM light installer.wixobj template.wixobj -out rga.msi

candle installer.wxs 
light installer.wixobj -out rga.msi

pause