#include "loadStopWords.h"
#include "master.h"

StopWords* loadStopWords(char *pathStopWordsFile, code statusCode){

    if (statusCode == OK){

        printf("Cargando lista\n");
        StopWords* wordList = (StopWords*)malloc(sizeof(StopWords));
        wordList->i = getLines(pathStopWordsFile);
        printf("%i\n", wordList->i);
        wordList->words = loadContent(pathStopWordsFile, wordList->i);
        return wordList;

    }else{
        printf("No es posible cargar y mostrar StopWords");
        return 0;
    }
}

char** createCharArray(int x, int y){
    int i;
    char** dynArray;

    dynArray = (char**)malloc(sizeof(char*) * y);

    for(i = 0; i < y ; i++)
        dynArray[i] = (char*)malloc(sizeof(char) * x);

    return dynArray;
}

int getLines(char* fileName){
    int lines = 0, ch;
    FILE *archive = fopen(fileName, "r");

    if(archive == NULL)
        printf("GetLine: No se puede abrir archivo.\n");
    else{
      while(!feof(archive)){
            ch = fgetc(archive);
            if(ch == '\n')
                lines++;
      }
    }
    fclose(archive);
    return lines;
}

char** loadContent(char* file, int rows){
    int i;
    FILE* archive = fopen(file, "r");
    char** fullContent = createCharArray(maxWidth, rows);

    for(i = 0 ; i < rows ; i++)
        fgets(fullContent[i], maxWidth, archive);

    fclose(archive);
    return fullContent;
}
