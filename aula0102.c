/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/23 01:06:11 $
*$Log: aula0102.c,v $
*Revision 1.1  2017/03/23 01:06:11  igor.nascimento
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

printf("Modificadores de Sinal\n");

printf("Tipo Unsigned void :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo Unsigned char :\n");
printf("\t\t%i ",sizeof(unsigned char));
if(sizeof(unsigned char)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo Unsigned int :\n");
printf("\t\t%i ",sizeof(unsigned int));
if(sizeof(unsigned int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo Unsigned double :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo Unsigned float :\n");
printf("\t\t Tipo invalido\n\n");


printf("Tipo Signed void :\n");
printf("\t\t Tipo invalido\n\n");


printf("Tipo Signed char :\n");
printf("\t\t%i ",sizeof(signed char));
if(sizeof(signed char)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo Signed double :\n");
printf("\t\t Tipo \n");

printf("Tipo Signed float :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo Signed int :\n");
printf("\t\t%i ",sizeof(signed int));
if(sizeof(signed int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

return OK;

/*
 * $RCSfile: aula0102.c,v $
 */
}
