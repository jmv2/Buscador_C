#include "cabecera.h"

const int maxWidth = 255;
char* StopWordsFile = "../files/StopWords.txt";
char* TestCollection = "../files/banner.txt";

void master(int opt){
    StopWords* sw = (StopWords*)malloc(sizeof(StopWords));
    //Index* in = (Index*)malloc(sizeof(Index));

    switch(opt){

        case 0:
            printf("Salir del programa\n");
            break;

        case 1:
            sw = loadStopWords(StopWordsFile , checkFile(StopWordsFile));
            break;
        case 2:
            //sw = loadStopWords(StopWordsFile , checkFile(StopWordsFile));
            //in = createIndex(TestCollection , sw, checkFile(TestCollection));
            createIndex(TestCollection , sw, checkFile(TestCollection));
            break;


        default:
            break;
    }
}

code checkFile(char* file){
    FILE * archivo = fopen(file, "r");
    code status;

    if(archivo == NULL)
        status = ERR_FILE_NOT_FOUND;
    else
        status = OK;
    fclose(archivo);
    return status;
}

void createIndex(char* pathDocumentsFile, StopWords *sw, code statusCode){
    FILE * file = fopen(pathDocumentsFile, "r");
    int docs = 0;
    char* line;

    if(file == NULL)
        printf("createIndex: Arhivo vacio\n");
    else
        while(fgets(line, maxWidth, file))
            printf("%s", line);

    fclose(file);
}
