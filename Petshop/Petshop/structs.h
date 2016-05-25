/**********************************************************************
 * STRUCTS DO PROGRAMA petshop.c                                      *
 *                                                                    *
 * Obs: Existem dois tipos definidos apenas em C11, para compilar     *
 * em versões anteriores, os tipos devem ser modificados:             *
 * De uint8_t e uint16_t para unsigned                                *
 **********************************************************************/


/*====================================================================*
 *                        STRUCTS AUXILIARES                          *
 *====================================================================*/


#ifndef _STRUCTS_H_
#define _STRUCTS_H_

#include <stdint.h>

typedef struct telefone
{
	uint8_t  cod_area;
	uint16_t prefixo;
	uint16_t sufixo;
} TELEFONE;

typedef struct data
{
	uint8_t  dia, mes;
	uint16_t ano;
} DATA;

typedef struct hora
{
	uint8_t horas, minutos, segundos;
} HORA;

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
} VENDEDOR;

typedef struct produto
{
	unsigned int   numero; // numero identificador (campo chave)
	char *         nome;
	float          preco;
} PRODUTO;

typedef struct fornecedor
{
	unsigned int numero; // numero identificador (campo chave)
	char *       nome;
	telefone     fone;
} FORNECEDOR;

typedef struct venda
{
	unsigned int numero;  // numero identificador (campo chave)
	data         data_vd; // data da venda
	hora         hora_vd; // hora da venda
} VENDA;

typedef struct compra
{
	unsigned int numero;  // numero identificador (campo chave)
	data         data_cp; // data da compra
	hora         hora_cp; // hora da compra
} COMPRA;

/*--------------------------------------------------------------------*/

#endif
