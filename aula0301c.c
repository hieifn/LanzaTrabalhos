/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/30 19:59:13 $
*$Log: aula0301c.c,v $
*Revision 1.1  2017/03/30 19:59:13  igor.nascimento
*Initial revision
*
*
*/
#include <stdlib.h>
#include <stdio.h>
#include "aula0301.h"

ull
CalcularTermoSerieFibonacci(unsigned short Termo)
{
	int resultado = 1;
	int auxiliar1 = 1;
	int auxiliar2 = 0;
	if(Termo == 0 || Termo == 1 )
		return Termo;
	
	for(;Termo > 1;Termo--)
	{
		resultado = auxiliar1 + auxiliar2;		
		auxiliar2 = auxiliar1;
		auxiliar1 = resultado;
	}

	return resultado;
}



/* $RCSfile: aula0301c.c,v $ */
