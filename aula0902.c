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
*$Date: 2017/05/18 00:29:32 $
*$Log: aula0902.c,v $
*Revision 1.1  2017/05/18 00:29:32  igor.nascimento
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
	byte entrada[TAMANHO_MAXIMO];
	char saida[TAMANHO_MAXIMO*(4/3)];
	
	
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

	CodificarBase64(entrada, strlen(argv[1]), saida);

	printf ("Codificado: %s\n", saida);
	

        return OK;
}
/* $RCSfile $ */
                                   
