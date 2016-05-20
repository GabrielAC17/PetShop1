#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

#include "structs.h"
#include "login.h"

void main() 
{
	setlocale(LC_ALL, "PORTUGUESE");

	vendLogin();
}