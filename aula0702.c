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
*$Date: 2017/05/02 17:30:13 $
*$Log: aula0702.c,v $
*Revision 1.1  2017/05/02 17:30:13  igor.nascimento
*Initial revision
*
*
*
*
*/


#include <stdlib.h>
#include <stdio.h>
#include "aula0701.h"


#define EOS                                                             '\0'
#define OK                                                              0
#define NUMERO_ARGUMENTOS_INVALIDOS             			1
#define ARGUMENTO_INVALIDO                              		2
#define NUMERO_ARGUMENTOS                               		28


int
main(int argc, char *argv[])
{
        /*unsigned short Termo;*/
        /*int indice;*/
        char *validacao;
	int indice;
	int linha;
	int coluna;
	float Elemento;

	float MatrizA[5][3];	
	float MatrizB[3][4];	
	float MatrizResultado[5][4];	

        
	if (argc != NUMERO_ARGUMENTOS)
        {
                printf("Uso: %s <a11-int> <a12-int> <a13-int> ... <a53-int> <b11-int> <b12-int> ... <b34-int> \n",argv [0]);
                exit (NUMERO_ARGUMENTOS_INVALIDOS);
        }
        
	for(indice = 0, linha = 0, coluna = 0; indice <= 15; indice++, coluna++)
	{

		Elemento = (float) strtof( argv [indice+1], &validacao);
		if (*validacao != EOS)
        	{
        		printf ("Entrada contem argumento invalido\n");
        		exit (ARGUMENTO_INVALIDO);
		}

		MatrizA[linha][coluna] = Elemento;
		
		if (indice % 3 == 0 && indice != 0)
		{
			coluna = 0;
			linha++;
		}		

	}
	
	for(linha = 0;linha <= 4; linha++)
	{
		for(coluna = 0; coluna <= 2; coluna++)
			printf("%f ",MatrizA[linha][coluna]);
		printf("\n");
	}

	for(indice = 16, linha = 0, coluna = 0; indice < argc; indice++, coluna++)
	{
		
		Elemento = (float) strtof( argv [indice], &validacao);
		
		if (*validacao != EOS)
        	{
        		printf ("Entrada contem argumento invalido\n");
        		exit (ARGUMENTO_INVALIDO);
		}

		MatrizB [linha][coluna] = Elemento;
		
		if (indice % 4 == 0 && indice != 16)
		{
			coluna = 0;
			linha++;
		}		

	}
	printf("\n\n");	
	for(linha = 0;linha <= 2; linha++)
	{
		for(coluna = 0; coluna <= 3; coluna++)
			printf("%f ",MatrizB[linha][coluna]);
		printf("\n");
	}

	MultiplicarMatrizes( MatrizA, MatrizB, MatrizResultado);

	printf("\n\n");

	for(linha = 0;linha <= 4; linha++)
	{
		for(coluna = 0; coluna <= 3; coluna++)
			printf("%f ",MatrizResultado[linha][coluna]);
		printf("\n");
	}


        return OK;
}
/* $RCSfile: aula0702.c,v $ */                           
