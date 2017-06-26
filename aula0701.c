/*
 * *Universidade Federal do Rio de Janeiro
 * *Escola Politecnica
 * *Departamento de Eletronica e de Computacao
 * *EEL270 - Computacao II - Turma 2017/1
 * *Prof. Marcelo Luiz Drumond Lanza
 * *Autor: Igor Ferreira do Nascimento
 * *
 * *$Author: igor.nascimento $
 * *$Date: 2017/05/02 17:29:49 $
 * *$Log: aula0701.c,v $
 * *Revision 1.1  2017/05/02 17:29:49  igor.nascimento
 * *Initial revision
 * *
 * *
 * *
 * */


#include <stdlib.h>
#include <stdio.h>
#include "aula0701.h"
#include <unistd.h>
	



void 
MultiplicarMatrizes (float MatrizA [5][3], float MatrizB[3][4], float MatrizResultado[5][4])
{
	int linha;
	int coluna;
	int auxiliar;
	for(linha = 0; linha <= 4; linha++)
		for(coluna = 0; coluna <= 3; coluna++)
			{
			MatrizResultado[linha][coluna] = 0;
			for(auxiliar = 0; auxiliar <= 2; auxiliar++)
				MatrizResultado[linha][coluna] += MatrizA[linha][auxiliar] * MatrizB[auxiliar][coluna];
			}
} 


/* $RCSfile: aula0701.c,v $ */
