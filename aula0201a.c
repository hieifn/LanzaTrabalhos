/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/23 23:09:39 $
*$Log: aula0201a.c,v $
*Revision 1.1  2017/03/23 23:09:39  igor.nascimento
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
	if ( X%Y == 0 )
		return Y;
	else
		CalcularMaximoDivisorComum(Y, X%Y);
}
/* $RCSfile: aula0201a.c,v $ */
