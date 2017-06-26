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
*$Date: 2017/05/18 00:54:01 $
*$Log: aula0903.c,v $
*Revision 1.1  2017/05/18 00:54:01  igor.nascimento
*Initial revision
*
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "aula0901.h"

#define EOS                                                             '\0'
#define OK                                                              0

#define NUMERO_ARGUMENTOS_INVALIDOS             			1

#define NUMERO_ARGUMENTOS                               		2

#define TAMANHO_MAXIMO							200

#define VALOR_MUITO_GRANDE						4

int
main(int argc, char *argv[])
{
	unsigned indice;
	char entrada[TAMANHO_MAXIMO*(4/3)];
	byte saida[TAMANHO_MAXIMO];
	unsigned tamanho;
	
	
	if (argc != NUMERO_ARGUMENTOS)
        {
                printf("Uso: %s <string>\n",argv [0]);
                exit (NUMERO_ARGUMENTOS_INVALIDOS);
        }
        
	if(strlen(argv[1]) > TAMANHO_MAXIMO)
        {
                printf("Uso: string com no maximo 76 caracteres\n");
                exit (VALOR_MUITO_GRANDE);
        }

	for(indice = 0; indice < strlen(argv[1]); indice++)
		entrada[indice] = argv[1][indice];

	DecodificarBase64(entrada, saida, &tamanho);

	printf ("Decodificado: %s, Tamanho :  %u\n", saida, tamanho);

        return OK;
}
/* $RCSfile $ */
                                   
