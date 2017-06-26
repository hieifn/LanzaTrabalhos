/*
 * *Universidade Federal do Rio de Janeiro
 * *Escola Politecnica
 * *Departamento de Eletronica e de Computacao
 * *EEL270 - Computacao II - Turma 2017/1
 * *Prof. Marcelo Luiz Drumond Lanza
 * *Autor: Igor Ferreira do Nascimento
 * *
 * *$Author: igor.nascimento $
 * *$Date: 2017/04/24 16:48:53 $
 * *$Log: aula0501c.c,v $
 * *Revision 1.1  2017/04/24 16:48:53  igor.nascimento
 * *Initial revision
 * *
 * *
 * *
 * */


#include <stdlib.h>
#include <stdio.h>
#include "aula0501.h"



float
CalcularSerieHarmonicaAlternada (unsigned long int termo)
{
	float resultado = 0;
	for(; termo >= 1; termo--)
	{	if(termo%2 == 0 )
			resultado = resultado - 1.0/CalcularExponencial(termo, termo);
		else
			resultado = resultado + 1.0/CalcularExponencial(termo, termo);
	}

	return resultado;
}

/* $RCSfile: aula0501c.c,v $ */
