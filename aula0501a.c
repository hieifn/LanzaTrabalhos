/*
 * *Universidade Federal do Rio de Janeiro
 * *Escola Politecnica
 * *Departamento de Eletronica e de Computacao
 * *EEL270 - Computacao II - Turma 2017/1
 * *Prof. Marcelo Luiz Drumond Lanza
 * *Autor: Igor Ferreira do Nascimento
 * *
 * *$Author: igor.nascimento $
 * *$Date: 2017/04/24 16:46:11 $
 * *$Log: aula0501a.c,v $
 * *Revision 1.1  2017/04/24 16:46:11  igor.nascimento
 * *Initial revision
 * *
 * *
 * *
 * */


#include <stdlib.h>
#include <stdio.h>
#include "aula0501.h"



float
CalcularSerieHarmonicaAlternada (unsigned long int termo)
{
	if (termo == 0)
		return 0;
	if (termo % 2 == 0 )
		return 	-1.0/CalcularExponencial(termo , termo) + CalcularSerieHarmonicaAlternada (termo - 1);
	else
		return 	1.0/CalcularExponencial(termo , termo) + CalcularSerieHarmonicaAlternada (termo - 1);

}

/* $RCSfile: aula0501a.c,v $ */
