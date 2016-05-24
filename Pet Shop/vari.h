#ifndef vari
#define vari

#include "structs.h"
#include <stdlib.h>

#ifdef vari
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
#else
//Ponteiros de structs;
extern vendedor		* vende = (vendedor *)	malloc(0);
extern produto		* prod = (produto *)	malloc(0);
extern fornecedor	* forn = (fornecedor *)	malloc(0);
extern venda		* vend = (venda *)		malloc(0);
extern compra		* comp = (compra *)		malloc(0);

//Controladores de tamanho dos structs;
extern  uint32_t	vende_sz = 1;
extern  uint32_t	prod_sz = 1;
extern  uint32_t	forn_sz = 1;
extern  uint32_t	vend_sz = 1;
extern  uint32_t	comp_sz = 1;
#endif
#endif