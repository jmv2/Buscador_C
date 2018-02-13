#ifndef __ESTRUCTS_H__
#define __ESTRUCTS_H__

//estructuras
typedef struct{
	char **words;
	int i;
} StopWords;

typedef struct{
	int* documentID;
	char* word;

} Index;

typedef struct{
	int docID;
	char *documentTitle, *authors, *description, journal;
} Documents;

#endif
