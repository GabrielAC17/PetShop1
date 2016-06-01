#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <locale.h>
#include "structs.h"
#include "functions.h"

bool login();
//char * receberString();
//vendedor * alocarVende();

int main() {
	setlocale(LC_CTYPE, "");
	login();
	return 0;
}

bool login() 
{
	unsigned int op;

	if (vende_sz == 0)
	{
		alocarVende();

		vende[0].salario = 0;
		vende[0].numero = 0;
		vende[0].comissao = 0;

		vende[0].nome = (char *)malloc(4 * sizeof(char));
		strcpy(vende[0].nome, "root");
	}

	do
	{
		system("cls");
		printf("Digite o número correspondente ao usuário desejado:\n");
		
		for (int i = 0; i < vende_sz; i++)
		{
			printf("Usuário: %s\nNúmero: %d\n\n",vende[i].nome, vende[i].numero);
		}

		setbuf(stdin, NULL);
		scanf("%d", &op);

		if (op >= 0 && op < vende_sz) {
			break;
		}

	} while (true);

	return true;
}

