import os
import epics
#import numpy as np

os.environ['EPICS_CA_ADDR_LIST'] = "192.168.82.10"
#os.environ['EPICS_CA_MAX_ARRAY_BYTES'] = "1000000"

print (epics.caget('VM-EBT-INJ-MAG-SOL-01:RI'))
