#ifndef __MASTER_H__
#define __MASTER_H__

#define maxWidth 255
#define TestCollection "files/TestCollection.txt"
#define StopWordsFile "files/StopWords.txt"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "loadStopWords.h"
#include "estructs.h"
#include "enums.h"

//Prototipo de funcion
void master(int);
code checkFiles(char* );

#endif
