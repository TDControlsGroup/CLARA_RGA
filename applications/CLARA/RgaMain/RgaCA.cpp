

#include "RgaCA.h"

/*
 * This class is used for CA
 */

RgaCA::RgaCA()
{
    value[0] = 0;
}


char * RgaCA::SetData( const char *PV)
{
return value;
}

char * RgaCA::GetData( const char *PV)
{
	/* 1. Initialize Channel Access. */
	status = ca_task_initialize();
	SEVCHK(status, "Unable to initialize");
   timeout=TIMEOUT;
   status = ca_create_channel(PV, NULL, NULL, 0, &chan);
   SEVCHK(status, "Create channel failed");
   status = ca_pend_io(1.0);
   SEVCHK(status, "Channel connection failed");

    /* Get the value */
    status=ca_array_get(DBR_STRING,1,chan,&value);
    if(status != ECA_NORMAL) {
	printf("ca_array_get:\n%s\n",ca_message(status));
    }
    
  /* Process get */
    status=ca_pend_io(timeout);
    if(status != ECA_NORMAL) {
	printf("ca_pend_io timed out for get after %g sec\n",timeout);
    }
    

  /* Clear the channel */
    status=ca_clear_channel(chan);
    if(status != ECA_NORMAL) {
	printf("ca_clear_channel failed:\n%s\n",ca_message(status));
    }
    
  /* Exit */
    ca_context_destroy();
	return value;
}
