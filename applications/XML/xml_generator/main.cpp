#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <fstream>
#include "tinyxml.h"
#include "tinystr.h"
#include "stripFile.h"
#include "scandata.h"
#include "rgaxml.h"



int main()
{
    scandata  *myresults=new scandata();
    rgaxml myxml;
    stripFile myscan;

    myscan.scan("ana2.txt",myresults);
    myxml.build(myresults);
    return 0;
}
