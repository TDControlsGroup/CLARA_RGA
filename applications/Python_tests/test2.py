#import os
#import epics
#import numpy as np

#os.environ['EPICS_CA_ADDR_LIST'] = "192.168.82.101"
#os.environ['EPICS_CA_MAX_ARRAY_BYTES'] = "1000000"

#print (epics.caget('VM-EBT-INJ-MAG-SOL-01:RI'))
import numpy as np
import urllib.request
import json

response = urllib.request.urlopen("http://148.79.130.52:17668/retrieval/data/getData.json?pv=rga1%3ABAR%3AM1&donotchunk")
content = response.read()
data = json.loads(content.decode("utf8"))
print (data)