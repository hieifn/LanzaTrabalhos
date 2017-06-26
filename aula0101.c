/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/21 21:34:21 $
*$Log: aula0101.c,v $
*Revision 1.1  2017/03/21 21:34:21  igor.nascimento
*Initial revision
*
* 
*
*/


#include <stdio.h>
#define OK 		0
#define MIN_BYTES	1
int
main(void)
{

printf("Tipos Basicos\n");

printf("Tipo Char :\n");
printf("\t\t%i ",sizeof(char));
if(sizeof(char)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo Integer :\n");
printf("\t\t%i ",sizeof(int));
if(sizeof(int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo Double :\n");
printf("\t\t%i ",sizeof(double));
if(sizeof(double)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo Float :\n");
printf("\t\t%i ",sizeof(float));
if(sizeof(double)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}


printf("Tipo void: \n");

printf("\t\t%i ",sizeof(void));
if(sizeof(void)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

return OK;

/*
 * $RCSfile: aula0101.c,v $
 */
}
