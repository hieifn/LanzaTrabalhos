/*
 *  * *Universidade Federal do Rio de Janeiro
 *   * *Escola Politecnica
 *    * *Departamento de Eletronica e de Computacao
 *     * *EEL270 - Computacao II - Turma 2017/1
 *      * *Prof. Marcelo Luiz Drumond Lanza
 *       * *Autor: Igor Ferreira do Nascimento
 *        * *
 *         * *$Author: igor.nascimento $
 *          * *$Date: 2017/04/24 17:12:11 $
 *           * *$Log: aula0601.h,v $
 *           * *Revision 1.1  2017/04/24 17:12:11  igor.nascimento
 *           * *Initial revision
 *           * *
 *             * */


#ifndef _AULA0601_
#define _AULA0601_ "@(#)aula0601.h $Revision: 1.1 $"

typedef enum{apagado = 0, aceso = 1} tipoPixel;

typedef enum{NUMERO_MAXIMO_LINHAS=25,
		NUMERO_MAXIMO_COLUNAS=80,
		OK = 0, abscissaInvalida = 1, 
		ordenadaInvalida = 2} tipoErros;

tipoErros
MostrarMonitor(tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS],
							unsigned maximoLinhas,
							unsigned maximoColunas);  


tipoErros
LimparMonitor(tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], 
							unsigned maximoLinhas,
							unsigned maximoColunas);


tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], 
								unsigned maximoLinhas,
								unsigned maximoColunas, 
								unsigned ordenadaEsquerda, 
								unsigned abscissaEsquerda, 
								unsigned ordenadaDireita, 
								unsigned abscissaDireita);


tipoErros
PreencherPoligono (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], 
								unsigned maximoLinhas, 
								unsigned maximoColunas, 
								unsigned linha, unsigned coluna);




#endif
/* $RCSfile: aula0601.h,v $ */


