/*
 *  * *Universidade Federal do Rio de Janeiro
 *   * *Escola Politecnica
 *    * *Departamento de Eletronica e de Computacao
 *     * *EEL270 - Computacao II - Turma 2017/1
 *      * *Prof. Marcelo Luiz Drumond Lanza
 *       * *Autor: Igor Ferreira do Nascimento
 *        * *
 *         * *$Author: igor.nascimento $
 *          * *$Date: 2017/05/09 18:57:57 $
 *           * *$Log: aula0801.h,v $
 *           * *Revision 1.1  2017/05/09 18:57:57  igor.nascimento
 *           * *Initial revision
 *           * *
 *             * */

#define SIZE_PIS				11


#ifndef _AULA0801_

#define _AULA0801_ "@(#)aula0801.h $Revision: 1.1 $"

typedef enum{verdadeiro = 1, falso = 0} boolean;

typedef unsigned char byte;


byte
GerarDigitoVerificadorPisPasep (byte [SIZE_PIS - 1]);

boolean
ValidarPisPasep (byte [SIZE_PIS]); 





#endif
/* $RCSfile: aula0801.h,v $ */


