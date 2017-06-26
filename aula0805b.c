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
*$Date: 2017/05/09 19:00:53 $
*$Log: aula0805b.c,v $
*Revision 1.1  2017/05/09 19:00:53  igor.nascimento
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
#include <string.h>

#include "aula0804.h"

#define EOS                                                             '\0'
#define OK                                                              0
#define NUMERO_ARGUMENTOS_INVALIDOS             			1
#define ARGUMENTO_INVALIDO                              		2
#define NUMERO_ARGUMENTOS                               		2
#define TAMANHO_PIS							10
#define CARACTERE_INVALIDO						5
#define VALOR_MUITO_GRANDE						4

int
main(int argc, char *argv[])
{
        unsigned indice;
	char pis[10];
	byte comprimento; 
		
        if (argc != NUMERO_ARGUMENTOS)
        {
                printf("Uso: %s <PIS/PASEP - int>\n",argv [0]);
                exit (NUMERO_ARGUMENTOS_INVALIDOS);
        }
        if( (comprimento = (byte) strlen(argv[1]) ) != TAMANHO_PIS)
	{
                printf("Comprimento PIS/PASEP invalido\n");
                exit (TAMANHO_PIS);
	}
		
	for (indice = 0; indice < comprimento; indice++)
	{
		if (argv [1][indice] <'0' || argv[1][indice] > '9')
		{
      			printf ("Caractere invalido: '-'\n");
      			exit (CARACTERE_INVALIDO);
    		}

    		pis [indice] = (argv[1][indice]);
  	}

	printf ("Digito verificador do PIS/PASEP eh: %c\n", GerarDigitoVerificadorPisPasep(pis) );
        return OK;
}
/* $RCSfile: aula0805b.c,v $ */
                                   
