/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/23 23:11:11 $
*$Log: aula0202.c,v $
*Revision 1.1  2017/03/23 23:11:11  igor.nascimento
*Initial revision
*
*
*/
#include <stdio.h>
#include <stdlib.h>

#include "aula0201.h"

#define NUM_ARG_INV			1
#define ERRO_ARG_INV			2
#define EOS				'\0'
#define NUMERO_ARGUMENTOS		3
#define OK				0

int
main(int argc, char *argv[])
{
	ull numero_1;
	ull numero_2;
	int indice;
	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("Uso: %s <inteiro-nao-negativo> %s <inteiro-nao-negativo>\n", argv [1], argv[2]);
		exit (NUM_ARG_INV);
	}
	
	for (indice = 0; argv [1][indice] != EOS; indice++)
		if (argv [1][indice] < '0' || argv [1][indice] > '9')
		{
			printf ("Entrada contem caractere invalido\n");
			exit (ERRO_ARG_INV);
		}
	for (indice = 0; argv [2][indice] != EOS; indice++)
		if (argv [1][indice] < '0' || argv [1][indice] > '9')
		{
			printf ("Entrada contem caractere invalido\n");
			exit (ERRO_ARG_INV);
		}
		
	numero_1 = (ull) atoi (argv [1]);
	numero_2 = (ull) atoi (argv [2]);	
		
	if (numero_1 == 0 && numero_2 == 0)
		exit (ERRO_ARG_INV);

	if (numero_1 == 0)
		printf ("MDC(%s,%s): %llu\n", argv [1],argv[2], numero_2);

	else if (numero_2 == 0)
		printf ("MDC(%s,%s): %llu\n", argv [1],argv[2], numero_1);
	else
		printf ("MDC(%s,%s): %llu\n", argv [1],argv[2], CalcularMaximoDivisorComum(numero_1, numero_2));
	
	return OK;
}		
/* $RCSfile: aula0202.c,v $ */
