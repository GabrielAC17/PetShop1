#ifndef structs
#define structs

#include <inttypes.h>
/**********************************************************************
* Structs do programa petshop.c                                      *
**********************************************************************/

/*====================================================================*
*                        STRUCTS AUXILIARES                          *
*====================================================================*/


typedef struct telefone
{
	uint8_t  cod_area;
	uint16_t prefixo;
	uint16_t sufixo;
} telefone;

typedef struct data
{
	uint8_t  dia, mes;
	uint16_t ano;
} data;

typedef struct hora
{
	uint8_t horas, minutos, segundos;
} hora;

/*--------------------------------------------------------------------*/

/*====================================================================*
*                              ENTIDADES                             *
*====================================================================*/


typedef struct vendedor
{
	unsigned int numero; // numero identificador (campo chave)
	char *       nome;
	float        salario;
	uint8_t      comissao;
} vendedor;

typedef struct produto
{
	unsigned int   numero; // numero identificador (campo chave)
	char *         nome;
	float preco;
} produto;

typedef struct fornecedor
{
	unsigned int numero; // numero identificador (campo chave)
	char *       nome;
	telefone     fone;
} fornecedor;

typedef struct venda
{
	unsigned int numero;  // numero identificador (campo chave)
	data         data_vd; // data da venda
	hora         hora_vd; // hora da venda
} venda;

typedef struct compra
{
	unsigned int numero;  // numero identificador (campo chave)
	data         data_cp; // data da compra
	hora         hora_cp; // hora da compra
} compra;

/*--------------------------------------------------------------------*/

//Ponteiros de structs;
vendedor	* vende = (vendedor *)	malloc(0);
produto		* prod = (produto *)	malloc(0);
fornecedor	* forn = (fornecedor *)	malloc(0);
venda		* vend = (venda *)		malloc(0);
compra		* comp = (compra *)		malloc(0);

//Controladores de tamanho dos structs;
uint32_t	vende_sz = 1;
uint32_t	prod_sz = 1;
uint32_t	forn_sz = 1;
uint32_t	vend_sz = 1;
uint32_t	comp_sz = 1;

#endif