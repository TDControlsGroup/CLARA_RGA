cd C:\Users\rory\Desktop\base-3.15.3\base-3.15.3\bin\win32-x86-mingw
call win32.bat
cd C:\Users\rory\Desktop\base-3.15.3\base-3.15.3\db
softIoc -m "idx1=1,idx2=2,idx3=3,idx4=4,crate=testdev,pu=testpu,device=testdev,trigger=testtrig" -d beam_conditions_lt_50.template -d runtests.db -d asyn_pickup_lt_50.template