/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/23 01:06:22 $
*$Log: aula0103.c,v $
*Revision 1.1  2017/03/23 01:06:22  igor.nascimento
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

printf("\n\nModificadores largura combinados com Tipos basicos\n\n");

printf("Tipo Long int :\n");
printf("\t\t%i ",sizeof(long int));
if(sizeof(long int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo Long Long int :\n");
printf("\t\t%i ",sizeof(long long int));
if(sizeof(long long int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo Short int :\n");
printf("\t\t%i ",sizeof(short int));
if(sizeof(short int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}




printf("Tipo Long char :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo Long Long char :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo Short char :\n");
printf("\t\t Tipo invalido\n\n");




printf("Tipo Long void :\n");
printf("\t\t Tipo invalido\n\n");


printf("Tipo Long Long void :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo Short void :\n");
printf("\t\t Tipo invalido\n\n");






printf("Tipo Long float :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo Long Long float :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo Short float :\n");
printf("\t\t Tipo invalido\n\n");






printf("Tipo Long double :\n");
printf("\t\t%i ",sizeof(long double));
if(sizeof(long double)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo Long Long double :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo Short double :\n");
printf("\t\t Tipo invalido\n\n");

return OK;


/*
 * $RCSfile: aula0103.c,v $
 */
}
