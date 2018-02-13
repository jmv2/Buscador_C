#ifndef __LOADSTOPWORDS_H__
#define __LOADSTOPWORDS_H__

#include "master.h"
#include "estructs.h"
#include "enums.h"

StopWords* loadStopWords(char *, code);
char** createCharArray(int , int );
int getLines(char* );
char** loadContent(char* , int );


#endif
