#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <dbDefs.h>
#include <registryFunction.h>
#include <subRecord.h>
#include <aSubRecord.h>
#include <epicsExport.h>

//Global variable
int DEBUG;

static long checkps(subRecord *precord){
  char *psname=precord->desc;    // Input A
  char cmdstr[64];
  int res;

  sprintf(cmdstr, "pgrep %s > /dev/null", psname);
  res = system(cmdstr);

  if(res==0){
    precord->val=1.0;
  }else{
    precord->val=0.0;
  }

  return 0;
}

/* Register these symbols for use by IOC code: */
epicsExportAddress(int, DEBUG);
epicsRegisterFunction(checkps);
