/*
*Universidade Federal do Rio de Janeiro
*Escola Politecnica
*Departamento de Eletronica e de Computacao
*EEL270 - Computacao II - Turma 2017/1
*Prof. Marcelo Luiz Drumond Lanza
*Autor: Igor Ferreira do Nascimento
*
*$Author: igor.nascimento $
*$Date: 2017/03/21 21:35:10 $
*$Log: aula0105.c,v $
*Revision 1.1  2017/03/21 21:35:10  igor.nascimento
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

printf("\n\nModificadores sinal combinados com Tipos basicos\n");

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

printf("\n\nModificadores largura e de sinal combinados com Tipos basicos\n");

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
 * $RCSfile: aula0105.c,v $
 */
}
