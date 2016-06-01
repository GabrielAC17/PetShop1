#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>   //int_'s
#include <locale.h>   //Acentuação
#include <windows.h>  //Comando Sleep
#include "structs.h"
#include "functions.h"

void login(), menu(), menuCadastro(), menuConsulta();
unsigned int vende_atual = 0;

int main() {
	setlocale(LC_CTYPE, "");
	printf("Bem vindo ao Pet Shop!\n\n");
	Sleep(2000);
	login();
	menu();

	return 0;
}

void login() 
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
		printf("Digite o número correspondente ao ");
		printf("vendedor que está operando:\n");
		
		for (int i = 0; i < vende_sz; i++)
		{
			printf("Usuário: %s\nNúmero: %d\n\n",
				vende[i].nome, vende[i].numero);
		}

		
		scanf("%d", &op);
		getchar();
		if (op >= 0 && op < vende_sz)
		{
			vende_atual = op;
			break;
		}

	} while (true);

	return;
}



void menu() 
{
	int opcaoSel1;
	do 
	{
		system("cls");
		printf("Olá, %s:\n\n", vende[vende_atual].nome);

		printf("1 - Registrar venda\n2 - Registrar compra\n");
		printf("3 - Cadastro\n4 - Consulta ");
		printf("(permite exclusões também)\n5 - Logout\n6 - Sair\n");
		scanf(" %d", &opcaoSel1);
		getchar();
		if (opcaoSel1 == 1) 
		{
			
		}
		else if (opcaoSel1 == 2) 
		{
			
		}
		else if (opcaoSel1 == 3)
		{
			menuCadastro();
		}
		else if (opcaoSel1 == 4)
		{
			menuConsulta();
		}
		else if (opcaoSel1 == 5)
		{
			vende_atual = 0;
			login();
		}
		else if (opcaoSel1 == 6) 
		{
			exit(0);
		}

	} while (opcaoSel1 != 1 || opcaoSel1 != 2 || opcaoSel1 != 3 
		|| opcaoSel1 != 4 || opcaoSel1 != 5 || opcaoSel1 != 6);
}

void menuCadastro()
{
	int opcaoSel1;
	do
	{
		system("cls");
		printf("\t1 - Cadastrar Produto\n\t2 - Cadastrar Fornecedor\n");
		printf("\t3 - Cadastrar Vendedor\n\t4 - Voltar\n");
		scanf(" %d", &opcaoSel1);
		getchar();
		if (opcaoSel1 == 1)
		{

		}
		else if (opcaoSel1 == 2)
		{

		}
		else if (opcaoSel1 == 3)
		{

		}
		else if (opcaoSel1 == 4)
		{
			menu();
		}

	} while (opcaoSel1 != 1 || opcaoSel1 != 2 || opcaoSel1 != 3
		|| opcaoSel1 != 4);
}

void menuConsulta()
{
	int opcaoSel1;
	do
	{
		system("cls");
		printf("\t1 - Consultar Vendas\n\t2 - Consultar Produtos\n");
		printf("\t3 - Consultar Fornecedores\n\t4 - Consultar Vendedor");
		printf("es\n\t5 - Consultar Caixa\n\t6 - Consultar Compras");
		printf("\n\t7 - Voltar\n");
		scanf(" %d", &opcaoSel1);
		getchar();
		if (opcaoSel1 == 1)
		{

		}
		else if (opcaoSel1 == 2)
		{

		}
		else if (opcaoSel1 == 3)
		{

		}
		else if (opcaoSel1 == 4)
		{

		}
		else if (opcaoSel1 == 5)
		{

		}
		else if (opcaoSel1 == 6)
		{

		}
		else if (opcaoSel1 == 7)
		{
			menu();
		}

	} while (opcaoSel1 != 1 || opcaoSel1 != 2 || opcaoSel1 != 3
		|| opcaoSel1 != 4 || opcaoSel1 != 5 || opcaoSel1 != 6
		|| opcaoSel1 != 7);
}