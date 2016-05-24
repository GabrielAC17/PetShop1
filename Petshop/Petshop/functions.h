/**********************************************************************
 * FUNÇÕES DO PROGRAMA petshop.c                                      *
 **********************************************************************/


/*====================================================================*
 *                      FUNÇÕES DE AUXILIARES                         *
 *====================================================================*/


/* 1. Receber string -- Recebe string do usuario e retorna seu
 *     endereco de memoria.
 */

char * receber_string(char * string)
{
	int size = 0;
	char temporary;

string = (char *) malloc(size);

	while (true)
	{
		scanf("%c", temporary);

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

/*--------------------------------------------------------------------*/

/*====================================================================*
 *                       FUNÇÕES DE CADASTRO                          *
 *====================================================================*/


// 1.
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
	scanf("%f", &produto->
}

/*--------------------------------------------------------------------*/