#ifndef structsa
#define structsa

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
#endif