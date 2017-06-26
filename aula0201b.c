/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/23 23:27:07 $
*$Log: aula0201b.c,v $
*Revision 1.1  2017/03/23 23:27:07  igor.nascimento
*Initial revision
*
*
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0201.h"

ull
CalcularMaximoDivisorComum(ull X, ull Y)
{
	ull Resto;
	do
	{
		Resto = X%Y;
		if (Resto != 0)
		{
			X = Y;
			Y = Resto;
		}	
	}
	while(Resto != 0);
	
	return Y;
}
/* $RCSfile: aula0201b.c,v $ */
