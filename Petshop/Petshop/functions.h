/**********************************************************************
 * FUN��ES DO PROGRAMA petshop.c                                      *
 **********************************************************************/

#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

 /*====================================================================*
 *                      DECLARA��ES DE VARI�VEIS                       *
 *====================================================================*/


extern unsigned int n_produtos;

extern vendedor		* vende = (vendedor *)malloc(0);
extern produto		* prod = (produto *)malloc(0);
extern fornecedor	* forn = (fornecedor *)malloc(0);
extern venda		* vend = (venda *)malloc(0);
extern compra		* comp = (compra *)malloc(0);

extern unsigned int vende_sz = 0;
extern unsigned int prod_sz = 0;
extern unsigned int forn_sz = 0;
extern unsigned int vend_sz = 0;
extern unsigned int comp_sz = 0;

#endif

/*====================================================================*
 *                      FUN��ES DE AUXILIARES                         *
 *====================================================================*/


/* 1. Receber string -- Recebe string do usuario e retorna seu
 *    endereco de memoria.
 */

char * receberString()
{
	int size = 0;
	char temporary;
	char * string = NULL;

	string = (char *)malloc(size);

	while (true)
	{
		scanf("%c", &temporary);

		string = (char *)realloc(string, (size + 1) * sizeof(char));

		if (temporary == '\n')
		{
			string[size] = '\0';
			return string;
		}
		else
			string[size] = temporary;

		size++;
	}
}

/* 2. Aloca��es dos structs - Recebe um ponteiro de struct e aloca
 *	  o espa�o necess�rio. Retorna true caso de sucesso ou false 
 *	  em caso de problemas
 */

bool alocar_vende(vendedor * vende)
{
	vendedor * tmpVende = (vendedor *) 
		realloc(vende, sizeof(vendedor)* vende_sz+1);

	if (tmpVende == NULL)
	{
		printf("\nAloca��o de vendedor falhou.\n");
		free(tmpVende);
		return false;
	}
	else
	{
		vende = tmpVende;
		free(tmpVende);
		vende_sz++;
		return true;
	}
}

bool alocar_prod(produto * prod)
{
	produto * tmpProd = (produto *) 
		realloc(prod,sizeof(produto)* prod_sz+1);

	if (tmpProd == NULL) 
	{
		printf("\nAloca��o de produto falhou.\n");
		free(tmpProd);
		return false;
	}
	else
	{
		prod = tmpProd;
		free(tmpProd);
		prod_sz++;
		return true;
	}
}

bool alocar_forn(fornecedor * forn)
{
	fornecedor * tmpForn = (fornecedor *)
		realloc(forn, sizeof(fornecedor)* forn_sz + 1);

	if (tmpForn == NULL)
	{
		printf("\nAloca��o de fornecedor falhou.\n");
		free(tmpForn);
		return false;
	}
	else
	{
		forn = tmpForn;
		free(tmpForn);
		forn_sz++;
		return true;
	}
}

bool alocar_vend(venda * vend)
{
	venda * tmpVend = (venda *)
		realloc(vend, sizeof(venda)* vend_sz + 1);

	if (tmpVend == NULL)
	{
		printf("\nAloca��o de venda falhou.\n");
		free(tmpVend);
		return false;
	}
	else
	{
		vend = tmpVend;
		free(tmpVend);
		vend_sz++;
		return true;
	}
}

bool alocar_comp(compra * comp)
{
	compra * tmpComp = (compra *)
		realloc(comp, sizeof(compra)* comp_sz + 1);

	if (tmpComp == NULL)
	{
		printf("\nAloca��o de compra falhou.\n");
		free(tmpComp);
		return false;
	}
	else
	{
		comp = tmpComp;
		free(tmpComp);
		comp_sz++;
		return true;
	}
}

/*--------------------------------------------------------------------*/

/*====================================================================*
 *                       FUN��ES DE CADASTRO                          *
 *====================================================================*/


// 1.
/*
void cadastrar_produto(PRODUTO * produto)
{
	// Campo numero
	produto->numero = n_produtos;
	n_produtos++;

	// Campo nome
	printf("Insira o nome do produto: ");
	produto->nome = receber_string(produto->nome);
	system("cls");

	// Campo preco
	printf("Insira o pre�o do produto: ");
	scanf("%f", &produto);
}


/*--------------------------------------------------------------------*/