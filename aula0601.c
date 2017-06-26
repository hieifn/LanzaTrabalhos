/*
 * *Universidade Federal do Rio de Janeiro
 * *Escola Politecnica
 * *Departamento de Eletronica e de Computacao
 * *EEL270 - Computacao II - Turma 2017/1
 * *Prof. Marcelo Luiz Drumond Lanza
 * *Autor: Igor Ferreira do Nascimento
 * *
 * *$Author: igor.nascimento $
 * *$Date: 2017/04/24 17:11:46 $
 * *$Log: aula0601.c,v $
 * *Revision 1.1  2017/04/24 17:11:46  igor.nascimento
 * *Initial revision
 * *
 * *
 * *
 * */


#include <stdlib.h>
#include <stdio.h>
#include "aula0601.h"
#include <unistd.h>


tipoErros
MostrarMonitor(tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], 
		unsigned maximoLinhas, 
		unsigned maximoColunas)
{
	int linhas;
	int colunas;
	system("clear");
	if (maximoLinhas > NUMERO_MAXIMO_LINHAS)
		return abscissaInvalida;	
	if (maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return ordenadaInvalida;	
	
	for(linhas = 0;linhas <= maximoLinhas-1; linhas++ )
		{
			for(colunas = 0;colunas <= maximoColunas-1; colunas++)
				printf("%c ",monitor[linhas][colunas]?'1':'0');
			printf("\n");
		}
	sleep(1);
	return OK;
}



tipoErros
LimparMonitor(tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], 
							unsigned maximoLinhas, 
							unsigned maximoColunas)
{
	int linhas;
	int colunas;
	
	if (maximoLinhas > NUMERO_MAXIMO_LINHAS)
		return abscissaInvalida;	
	if (maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return ordenadaInvalida;	
	
	for(linhas = 0;linhas <= maximoLinhas-1; linhas++ )
		for(colunas = 0;colunas <= maximoColunas-1; colunas++)
			monitor[linhas][colunas] = 0;
	MostrarMonitor(monitor, maximoLinhas, maximoColunas);

	return OK;
}

tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], 
								unsigned maximoLinhas, 
								unsigned maximoColunas, 
								unsigned ordenadaEsquerda, 
								unsigned abscissaEsquerda, 
								unsigned ordenadaDireita, 
								unsigned abscissaDireita)
{

	int linhas;
	int colunas;
	
	if (maximoLinhas > NUMERO_MAXIMO_LINHAS)
		return abscissaInvalida;	
	if (maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return ordenadaInvalida;	
	
	for(linhas = abscissaEsquerda; linhas <= abscissaDireita ; linhas++ )
		for(colunas = ordenadaEsquerda; colunas <= ordenadaDireita ; colunas++)
			if(linhas == abscissaDireita || 
			  linhas == abscissaEsquerda || 
			 colunas == ordenadaEsquerda || 
			 colunas == ordenadaDireita )
				monitor[linhas][colunas] = 1;
			
	MostrarMonitor(monitor, maximoLinhas, maximoColunas);
	
	return OK;
}

tipoErros
PreencherPoligono (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], 
								unsigned maximoLinhas, 
								unsigned maximoColunas, 
								unsigned linha, unsigned coluna)
{

	if (maximoLinhas > NUMERO_MAXIMO_LINHAS)
		return abscissaInvalida;	
	if (maximoColunas > NUMERO_MAXIMO_COLUNAS)
		return ordenadaInvalida;	
	
	if(monitor[linha][coluna] == 0)
	{
		monitor[linha][coluna] = 1;
		MostrarMonitor(monitor, maximoLinhas, maximoColunas);
		PreencherPoligono(monitor, maximoLinhas, maximoColunas, linha-1, coluna);
		PreencherPoligono(monitor, maximoLinhas, maximoColunas, linha+1, coluna);
		PreencherPoligono(monitor, maximoLinhas, maximoColunas, linha, coluna-1);
		PreencherPoligono(monitor, maximoLinhas, maximoColunas, linha, coluna+1);
	}
	else
		return OK;
	return OK;
}

/* $RCSfile: aula0601.c,v $ */
