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
*$Date: 2017/04/24 16:45:52 $
*$Log: aula0502.c,v $
*Revision 1.1  2017/04/24 16:45:52  igor.nascimento
*Initial revision
*
*
*
*
*/

#include <stdlib.h>
#include <stdio.h>
#include "aula0501.h"

#define EOS                                                             '\0'
#define OK                                                              0
#define NUMERO_ARGUMENTOS_INVALIDOS             			1
#define ARGUMENTO_INVALIDO                              		2
#define NUMERO_ARGUMENTOS                               		2


int
main(int argc, char *argv[])
{
        /*unsigned short Termo;*/
        /*int indice;*/
        char *validacao;
 	unsigned long termo;
	
        if (argc != NUMERO_ARGUMENTOS)
        {
                printf ("Uso: %s <termo--inteiro> \n", argv [0]);
                exit (NUMERO_ARGUMENTOS_INVALIDOS);
        }
        
	termo = (int) strtoul( argv [1], &validacao, 10);
	if (*validacao != EOS)
        {
        	printf ("Entrada contem argumento invalido\n");
        	exit (ARGUMENTO_INVALIDO);
        }

	
	printf ("O S(%li) = %f.  \n", termo, CalcularSerieHarmonicaAlternada(termo));

        return OK;
}
/* $RCSfile: aula0502.c,v $ */
                                   
