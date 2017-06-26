/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/23 01:06:30 $
*$Log: aula0104.c,v $
*Revision 1.1  2017/03/23 01:06:30  igor.nascimento
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

printf("Modificadores sinal combinados com Largura\n");

printf("Tipo Signed Long int :\n");
printf("\t\t%i ",sizeof(signed long int));
if(sizeof(signed long int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo signed Long Long int :\n");
printf("\t\t%i ",sizeof(signed long long int));
if(sizeof(signed long long int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo signed Short int :\n");
printf("\t\t%i ",sizeof(signed short int));
if(sizeof(signed short int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}





printf("Tipo signed Long char :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo signed Long Long char :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo signed Short char :\n");
printf("\t\t Tipo invalido\n\n");




printf("Tipo signed Long void :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo signed Long Long void :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo signed Short void :\n");
printf("\t\t Tipo invalido\n\n");





printf("Tipo signed Long float :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo signed Long Long float :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo signed Short float :\n");
printf("\t\t Tipo invalido\n\n");






printf("Tipo signed Long double :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo signed Long Long double :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo signed Short double :\n");
printf("\t\t Tipo invalido\n\n");






printf("Tipo Unsigned Long int :\n");
printf("\t\t%i ",sizeof(unsigned long int));
if(sizeof(unsigned long int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo unsigned Long Long int :\n");
printf("\t\t%i ",sizeof(unsigned long long int));
if(sizeof(unsigned long long int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}

printf("Tipo unsigned Short int :\n");
printf("\t\t%i ",sizeof(unsigned short int));
if(sizeof(unsigned short int)>MIN_BYTES)
	{printf("bytes\n");}
else
	{printf("byte\n");}





printf("Tipo unsigned Long char :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo unsigned Long Long char :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo unsigned Short char :\n");
printf("\t\t Tipo invalido\n\n");





printf("Tipo unsigned Long void :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo unsigned Long Long void :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo unsigned Short void :\n");
printf("\t\t Tipo invalido\n\n");






printf("Tipo unsigned Long float :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo unsigned Long Long float :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo unsigned Short float :\n");
printf("\t\t Tipo invalido\n\n");






printf("Tipo unsigned Long double :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo unsigned Long Long double :\n");
printf("\t\t Tipo invalido\n\n");

printf("Tipo unsigned Short double :\n");
printf("\t\t Tipo invalido\n\n");

return OK;
/*
 * $RCSfile: aula0104.c,v $
 */
}
