#ifndef RGAARCHIVER_H
#define RGAARCHIVER_H


#include <stdio.h>
#include <string.h>
#include <alarmString.h>
#include <cadef.h>

#define TIMEOUT 1.0
#define SCA_OK 1
#define SCA_ERR 0
#define MAX_STRING 40

class RgaCA
{

public:
	chid chan;
    int status;
	
    RgaCA();
    char * GetData(const char *);
    char * SetData(const char *);
private:
/* Global variables */
char name[MAX_STRING];
char value[MAX_STRING];
double timeout;
};

#endif // RGAARCHIVER_H
