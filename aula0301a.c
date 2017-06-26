/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/30 19:11:33 $
*$Log: aula0301a.c,v $
*Revision 1.1  2017/03/30 19:11:33  igor.nascimento
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
	if (Termo <= 1)
		return Termo;
	else
		return CalcularTermoSerieFibonacci(Termo - 1) + CalcularTermoSerieFibonacci(Termo - 2);
}



/* $RCSfile: aula0301a.c,v $ */
