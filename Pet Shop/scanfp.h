#ifndef scanfp
#define scanfp

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void scanfPointer(char * texto)
{
	int tamanho = 0;
	char aux;
	texto = (char*)malloc(tamanho);

	do {
		scanf("%c", &aux);
		if (aux == '\n')
			break;
		texto = (char*)realloc(texto, (tamanho + 1) * sizeof(char));
		texto[tamanho] = aux;
		tamanho++;
	} while (true);
}

#endif