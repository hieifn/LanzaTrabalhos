/*
 * *Universidade Federal do Rio de Janeiro
 * *Escola Politecnica
 * *Departamento de Eletronica e de Computacao
 * *EEL270 - Computacao II - Turma 2017/1
 * *Prof. Marcelo Luiz Drumond Lanza
 * *Autor: Igor Ferreira do Nascimento
 * *
 * *$Author: igor.nascimento $
 * *$Date: 2017/04/07 15:46:15 $
 * *$Log: aula0401b.c,v $
 * *Revision 1.1  2017/04/07 15:46:15  igor.nascimento
 * *Initial revision
 * *
 * */

#include "aula0401.h"

long double
CalcularExponencial(double Base, long Expoente)
{
	int resultado = 1;
	int auxiliar = 0;
	if(Base == 0 && Expoente == 0)
		return 1.0;
	if (Expoente < 0 )
	{
		auxiliar = 1;
		Expoente = Expoente*(-1);
	}

	do
	{	
		resultado = resultado*Base;
		Expoente--;
	}
	while(Expoente > 0);
	if (auxiliar == 0)
		return resultado;
	else
		return 1.0/resultado;

}

/* $RCSfile: aula0401b.c,v $ */

