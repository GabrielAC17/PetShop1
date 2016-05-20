#include "login.h"
#include "scanfp.h"

bool vendLogin() 
{
	//Cria��o do primeiro vendedor, no caso o root (sempre fixo no programa)
	vendedor * tmp_vende = (vendedor *)	realloc(vende, sizeof(vendedor)* vende_sz);
	if (tmp_vende == NULL) 
	{
		printf("Aloca��o de vendedor falhou!");
		free(tmp_vende);
		return false;
	}
	else 
	{
		vende = tmp_vende;
		free(tmp_vende);
		vende_sz++;
	}
	scanfPointer(vende[0].nome);
	printf("%s",vende[0].nome);

	return true;
}