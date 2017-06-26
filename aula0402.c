/*
*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/04/07 15:57:57 $
*$Log: aula0402.c,v $
*Revision 1.1  2017/04/07 15:57:57  igor.nascimento
*Initial revision
*
*
*
*/
#include <stdlib.h>
#include <stdio.h>
#include "aula0401.h"

#define EOS                                                             '\0'
#define OK                                                              0
#define NUMERO_ARGUMENTOS_INVALIDOS             			1
#define ARGUMENTO_INVALIDO                              		2
#define NUMERO_ARGUMENTOS                               		3


int
main(int argc, char *argv[])
{
        /*unsigned short Termo;*/
        /*int indice;*/
        char *validacao;
 	double base;
	long expoente;
	
        if (argc != NUMERO_ARGUMENTOS)
        {
                printf ("Uso: %s <base-real> <expoente-inteiro> \n", argv [0]);
                exit (NUMERO_ARGUMENTOS_INVALIDOS);
        }
        
	base = (double) strtod( argv [1], &validacao);
	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
        }
	
	expoente = (int)strtol( argv[2], &validacao, 10);
	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
	}
	
	printf ("O %g elevado a %li = %LG . \n", base, expoente, CalcularExponencial(base, expoente));

        return OK;
}
/* $RCSfile: aula0402.c,v $ */
                                   
