#include <stdio.h>
#include <stdlib.h>

#include "scanfp.h"
#include "structs.h"
#include "vari.h"

bool vendLogin() 
{
	//Criação do primeiro vendedor, no caso o root (sempre fixo no programa)
	vendedor * tmp_vende = (vendedor *)	realloc(vende, sizeof(vendedor)* vende_sz);
	if (tmp_vende == NULL) 
	{
		printf("Alocação de vendedor falhou!");
		free(tmp_vende);
		return false;
	}
	else 
	{
		vende = tmp_vende;
		free(tmp_vende);
		vende_sz++;
	}

	vende[0].salario = 1000.50;
	vende[0].comissao = 10;
	vende[0].numero = 0;
	strscan(vende[0].nome);

	printf("%.2f %d %d %s",vende[0].salario,vende[0].numero,vende[0].comissao, vende[0].nome);
	return true;
}