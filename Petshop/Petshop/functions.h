/**********************************************************************
 * FUNÇÕES DO PROGRAMA main.cpp                                       *
 **********************************************************************/

#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_


 /*====================================================================*
  *                      DECLARAÇÕES DE VARIÁVEIS                      *
  *====================================================================*/

unsigned int n_produtos;

vendedor	* vende = (vendedor *)   malloc(0);
produto		* prod =  (produto *)    malloc(0);
fornecedor	* forn =  (fornecedor *) malloc(0);
venda		* vend =  (venda *)      malloc(0);
compra		* comp =  (compra *)     malloc(0);

unsigned int vende_sz = 0;
unsigned int prod_sz = 0;
unsigned int forn_sz = 0;
unsigned int vend_sz = 0;
unsigned int comp_sz = 0;

/*====================================================================*
 *                      FUNÇÕES DE AUXILIARES                         *
 *====================================================================*/


/********************************************************************** 
 * 1. Receber string -- Recebe string do usuario e retorna seu        *
 *     endereco de memoria.                                           *
 **********************************************************************/

inline char * receberString()
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

/* 2. Alocações dos structs - Recebe um ponteiro de struct e aloca
*	o espaço necessário. Retorna true caso de sucesso ou false 
	em caso de problemas
*/

inline bool alocarVende()
{
	vendedor * tmpVende = (vendedor *)
		realloc(vende, sizeof(vendedor) * (vende_sz+1));

	if (tmpVende == NULL)
	{
		printf("\nAlocação de vendedor falhou.\n");
		//free(tmpVende);
		return false;
	}
	else
	{
		vende = tmpVende;
		//free(tmpVende);
		vende_sz++;
		return true;
	}
}

inline bool alocar_prod()
{
	produto * tmpProd = (produto *) 
		realloc(prod,sizeof(produto)* (prod_sz+1));

	if (tmpProd == NULL) 
	{
		printf("\nAlocação de produto falhou.\n");
		//free(tmpProd);
		return false;
	}
	else
	{
		prod = tmpProd;
		//free(tmpProd);
		prod_sz++;
		return true;
	}
}

inline bool alocar_forn()
{
	fornecedor * tmpForn = (fornecedor *)
		realloc(forn, sizeof(fornecedor)* (forn_sz + 1));

	if (tmpForn == NULL)
	{
		printf("\nAlocação de fornecedor falhou.\n");
		//free(tmpForn);
		return false;
	}
	else
	{
		forn = tmpForn;
		//free(tmpForn);
		forn_sz++;
		return true;
	}
}

inline bool alocar_vend()
{
	venda * tmpVend = (venda *)
		realloc(vend, sizeof(venda)* (vend_sz + 1));

	if (tmpVend == NULL)
	{
		printf("\nAlocação de venda falhou.\n");
		//free(tmpVend);
		return false;
	}
	else
	{
		vend = tmpVend;
		//free(tmpVend);
		vend_sz++;
		return true;
	}
}

inline bool alocar_comp()
{
	compra * tmpComp = (compra *)
		realloc(comp, sizeof(compra)* (comp_sz + 1));

	if (tmpComp == NULL)
	{
		printf("\nAlocação de compra falhou.\n");
		//free(tmpComp);
		return false;
	}
	else
	{
		comp = tmpComp;
		//free(tmpComp);
		comp_sz++;
		return true;
	}
}

/*--------------------------------------------------------------------*/

/*====================================================================*
 *                       FUNÇÕES DE CADASTRO                          *
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
	printf("Insira o preço do produto: ");
	scanf("%f", &produto);
}


/*--------------------------------------------------------------------*/

#endif