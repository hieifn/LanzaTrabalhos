/*
 * *Universidade Federal do Rio de Janeiro
 * *Escola Politecnica
 * *Departamento de Eletronica e de Computacao
 * *EEL270 - Computacao II - Turma 2017/1
 * *Prof. Marcelo Luiz Drumond Lanza
 * *Autor: Igor Ferreira do Nascimento
 * *
 * *$Author: igor.nascimento $
 * *$Date: 2017/04/06 19:54:40 $
 * *$Log: aula0401a.c,v $
 * *Revision 1.1  2017/04/06 19:54:40  igor.nascimento
 * *Initial revision
 * *
 * */

#include "aula0401.h"

long double
CalcularExponencial(double Base, long Expoente)
{
	if(Expoente == 1 )
		return Base;
	else if(Expoente == -1 )
		return 1/Base;
	else if (Expoente > 0)
		return (Base*CalcularExponencial(Base, Expoente-1));
	else if (Expoente == 0)
		return 1;
	else 
		return ((1/Base)*CalcularExponencial(Base, Expoente+1));
}

/* $RCSfile: aula0401a.c,v $ */

