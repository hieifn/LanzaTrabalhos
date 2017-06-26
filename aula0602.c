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
*$Date: 2017/04/24 17:12:39 $
*$Log: aula0602.c,v $
*Revision 1.1  2017/04/24 17:12:39  igor.nascimento
*Initial revision
*
*Revision 1.1  2017/04/07 15:57:57  igor.nascimento
*Initial revision
*
*
*
*/


#include <stdlib.h>
#include <stdio.h>
#include "aula0601.h"


#define EOS                                                             '\0'
#define OK                                                              0
#define NUMERO_ARGUMENTOS_INVALIDOS             			1
#define ARGUMENTO_INVALIDO                              		2
#define NUMERO_ARGUMENTOS                               		9


int
main(int argc, char *argv[])
{
        /*unsigned short Termo;*/
        /*int indice;*/
        char *validacao;
	int maximoLinhas;
	int maximoColunas;
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;

	tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS];	


        if (argc != NUMERO_ARGUMENTOS)
        {
                printf("Uso: %s <lin-int> <col-int> <X1-int> <Y1-int> <X2-int> <Y2-int> <X3-int> <Y3-int>\n",argv [0]);
                exit (NUMERO_ARGUMENTOS_INVALIDOS);
        }
        
	maximoLinhas = (int) strtoul( argv [1], &validacao, 10);

	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
	}
	
	maximoColunas = (int) strtoul( argv [2], &validacao, 10);
	
	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
	}
	
	x1 = (int) strtoul( argv [3], &validacao, 10);
	
	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
	}

	y1 = (int) strtoul( argv [4], &validacao, 10);

	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
	}

	x2 = (int) strtoul( argv [5], &validacao, 10);

	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
	}
	
	y2 = (int) strtoul( argv [6], &validacao, 10);
	
	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
	
        }
	x3 = (int) strtoul( argv [7], &validacao, 10);

	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
	}
	
	y3 = (int) strtoul( argv [8], &validacao, 10);
	
	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
	
        }

	LimparMonitor(monitor, maximoLinhas,maximoColunas);
	MostrarMonitor(monitor,maximoLinhas, maximoColunas);
	DesenharRetangulo(monitor,maximoLinhas, maximoColunas, x1, y1, x2, y2);
	PreencherPoligono(monitor, maximoLinhas, maximoColunas, x3, y3);

        return OK;
}
/* $RCSfile: aula0602.c,v $ */
                                   
