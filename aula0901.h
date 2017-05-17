/*
 *  * *Universidade Federal do Rio de Janeiro
 *   * *Escola Politecnica
 *    * *Departamento de Eletronica e de Computacao
 *     * *EEL270 - Computacao II - Turma 2017/1
 *      * *Prof. Marcelo Luiz Drumond Lanza
 *       * *Autor: Igor Ferreira do Nascimento
 *        * *
 *         * *$Author$
 *          * *$Date$
 *           * *$Log$
 *             * */


#define CONJUNTO_BASE_64			"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
#define PAD					'='
#define EOS					'\0'

#ifndef _AULA0901_

#define _AULA0901_ "@(#)aula0901.h $Revision$"

typedef enum{OK = 0, entradaVazia = 1, saidaVazia = 2, erroConversao = 3, erroDecodificacao = 4} tipoErros;


typedef unsigned char byte;


tipoErros
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida);

tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned *numeroBytes);

#endif
/* $RCSfile$ */


