#include "master.h"

void master(int opt){

switch(opt){
  case 0:
    printf("Salir...\n");
    break;
  case 1:
    loadStopWords(StopWordsFile, checkFiles(StopWordsFile));
    break;
  default:
    break;
    }
}

code checkFiles(char* path){
  FILE *file = fopen(path , "r");

  if ( file != NULL ){
    fclose(file);
    return OK;
  }else{
    fclose(file);
    return ERR_FILE_NOT_PERM;
  }

}
