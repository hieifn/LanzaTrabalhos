/*
 * *Universidade Federal do Rio de Janeiro
 * *Escola Politecnica
 * *Departamento de Eletronica e de Computacao
 * *EEL270 - Computacao II - Turma 2017/1
 * *Prof. Marcelo Luiz Drumond Lanza
 * *Autor: Igor Ferreira do Nascimento
 * *
 * *$Author: igor.nascimento $
 * *$Date: 2017/05/09 18:58:04 $
 * *$Log: aula0801.c,v $
 * *Revision 1.1  2017/05/09 18:58:04  igor.nascimento
 * *Initial revision
 * *
 * *
 * *
 * */


#include <stdio.h>
#include "aula0801.h"



byte
GerarDigitoVerificadorPisPasep (byte pis[SIZE_PIS-1])
{
	unsigned indice;
	int auxiliar;
	int peso[] = {3, 2, 9, 8, 7, 6, 5, 4, 3, 2};

	for (indice = 0, auxiliar = 0; indice < SIZE_PIS-1; indice++)
		auxiliar += peso[indice]*pis[indice];

	if(auxiliar % 11 == 0 || auxiliar % 11 == 1)
		return 0;

	return( 11 - (auxiliar % 11) );

}

boolean
ValidarPisPasep (byte pis[SIZE_PIS])
{
	byte pisTemp[SIZE_PIS-1];
	unsigned indice;
	for(indice = 0; indice < SIZE_PIS-1; indice++)
		pisTemp[indice] = pis[indice];

	if ( GerarDigitoVerificadorPisPasep(pisTemp) != pis[SIZE_PIS-1] )
		return falso;
	
	return verdadeiro;
}

/* $RCSfile: aula0801.c,v $ */
