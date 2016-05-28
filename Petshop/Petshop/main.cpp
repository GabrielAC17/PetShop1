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
	if (vende_sz == 0)
	{
		//Testes de depuração
		alocarVende(vende);
		
		vende[0].salario = 666.66;
		vende[0].numero = 1;
		vende[0].comissao = 22;
		
		vende[0].nome = receberString();
		printf("%s", vende[0].nome);

		alocarVende(vende);

		vende[1].nome = receberString();
		printf("%s", vende[1].nome);

		return true;
	}
}
