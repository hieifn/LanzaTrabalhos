/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/30 19:11:18 $
*$Log: aula0302.c,v $
*Revision 1.1  2017/03/30 19:11:18  igor.nascimento
*Initial revision
*
*
*/
#include <stdlib.h>
#include <stdio.h>
#include "aula0301.h"
#define EOS								'\0'
#define OK								0
#define NUMERO_ARGUMENTOS_INVALIDOS		1
#define ARGUMENTO_INVALIDO				2
#define NUMERO_ARGUMENTOS				2


int
main(int argc, char *argv[])
{
	unsigned short Termo;
	int indice;
	
	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso: %s <inteiro-nao-negativo> \n", argv [1]);
		exit (NUMERO_ARGUMENTOS_INVALIDOS);
	}
	
	for (indice = 0; argv [1][indice] != EOS; indice++)
		if (argv [1][indice] < '0' || argv [1][indice] > '9')
		{
			printf ("Entrada contem caractere invalido\n");
			exit (ARGUMENTO_INVALIDO);
		}

	Termo = (unsigned short)atoi(argv[1]);
	for (indice = 0; indice < Termo + 1; indice++)
	{
		printf("F(%i) = %llu\n", indice, CalcularTermoSerieFibonacci(indice));
	}
	
	return OK;
}
/* $RCSfile: aula0302.c,v $ */
