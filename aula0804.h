/*
 *  * *Universidade Federal do Rio de Janeiro
 *   * *Escola Politecnica
 *    * *Departamento de Eletronica e de Computacao
 *     * *EEL270 - Computacao II - Turma 2017/1
 *      * *Prof. Marcelo Luiz Drumond Lanza
 *       * *Autor: Igor Ferreira do Nascimento
 *        * *
 *         * *$Author: igor.nascimento $
 *          * *$Date: 2017/05/09 18:59:43 $
 *           * *$Log: aula0804.h,v $
 *           * *Revision 1.1  2017/05/09 18:59:43  igor.nascimento
 *           * *Initial revision
 *           * *
 *             * */

#define SIZE_PIS				11


#ifndef _AULA0801_

#define _AULA0801_ "@(#)aula0801.h $Revision: 1.1 $"

typedef enum{verdadeiro = 1, falso = 0} boolean;

typedef unsigned char byte;


char
GerarDigitoVerificadorPisPasep (char *pis);

boolean
ValidarPisPasep (char *pis); 





#endif
/* $RCSfile: aula0804.h,v $ */


