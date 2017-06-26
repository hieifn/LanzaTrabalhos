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
*$Date: 2017/05/09 19:00:43 $
*$Log: aula0805a.c,v $
*Revision 1.1  2017/05/09 19:00:43  igor.nascimento
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


#include "aula0804.h"

#define EOS                                                             '\0'
#define OK                                                              0
#define NUMERO_ARGUMENTOS_INVALIDOS             			1
#define ARGUMENTO_INVALIDO                              		2
#define NUMERO_ARGUMENTOS                               		11
#define VALOR_NEGATIVO							3
#define CARACTERE_INVALIDO						5
#define VALOR_MUITO_GRANDE						4

int
main(int argc, char *argv[])
{
        unsigned indice;
	unsigned long long valor;
	char pis[10];
	char *validacao;

        if (argc != NUMERO_ARGUMENTOS)
        {
                printf("Uso: %s <digito 1 - int> <digoto 2 - int> ... <digito 10 - int>\n",argv [0]);
                exit (NUMERO_ARGUMENTOS_INVALIDOS);
        }
        
	for (indice = 1; indice < argc; indice++)
	{
		if (argv [indice][0] == '-')
		{
      			printf ("Caractere invalido: '-'\n");
      			exit (VALOR_NEGATIVO);
    		}

    		valor = strtoull (argv [indice], &validacao, 10);
    		if (*validacao != EOS)
    		{
      			printf ("Caractere invalido: %c\n", *validacao);
      			exit (CARACTERE_INVALIDO);
    		}

    		if (valor > 255)
    		{
      			printf ("Valor incorreto: %llu\n", valor);
      			exit (VALOR_MUITO_GRANDE);
    		}

    		pis [indice - 1] = valor + '0';
  	}


	printf ("Digito verificador do PIS/PASEP eh: %c\n", GerarDigitoVerificadorPisPasep(pis) );
        return OK;
}
/* $RCSfile: aula0805a.c,v $ */
                                   
