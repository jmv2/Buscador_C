cc = gcc
options = -g -Werror
output-files = exec/buscador.exe
input-files = buscador.c sources/loadStopWords.c sources/master.c

loadStopWords:$(input-files)
	$(cc) $(options) -o $(output-files) $(input-files)

run:
		exec/buscador.exe
