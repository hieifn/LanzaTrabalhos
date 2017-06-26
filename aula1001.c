/*
 * *Universidade Federal do Rio de Janeiro
 * *Escola Politecnica
 * *Departamento de Eletronica e de Computacao
 * *EEL270 - Computacao II - Turma 2017/1
 * *Prof. Marcelo Luiz Drumond Lanza
 * *Autor: Igor Ferreira do Nascimento
 * *
 * *$Author: igor.nascimento $
 * *$Date: 2017/05/24 23:46:21 $
 * *$Log: aula1001.c,v $
 * *Revision 1.1  2017/05/24 23:46:21  igor.nascimento
 * *Initial revision
 * *
 * *
 * *
 * */


#define		_XOPEN_SOURCE		500

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>



#define		OK				0
#define		NUMERO_ARGUMENTOS_INVALIDO	1
#define		ERRO_ABRINDO_ARQUIVO		2
#define		ARQUIVO_CORROMPIDO		3
#define		ERRO_LENDO_ARQUIVO		4
#define		ERRO_ESCREVENDO_ARQUIVO		5


#define		_MY_DEBUG_			100
#define		NUMERO_ARGUMENTOS		2
#define		COMPRIMENTO_MAXIMO_NOME		50


int
main(int argc, char *argv[])
{

	char copy[COMPRIMENTO_MAXIMO_NOME + 2];
	char nomeArqTemp[1024];
	int Apontador;
	FILE *leitura, *escrita;
	char copy2[100];

	if(argc != NUMERO_ARGUMENTOS)
	{
		printf("Uso: %s <arquivo-entrada>", argv[0]);
		exit(NUMERO_ARGUMENTOS_INVALIDO);
	}
	

	if (!(leitura = fopen(argv[1], "r")))
	{
		printf("Erro abrindo o arquivo: \"%s\"\n", argv[1]);
		printf("Erro (#%i): %s \n", errno, strerror(errno));
		fclose(leitura);
		exit(ERRO_ABRINDO_ARQUIVO);
	}

	strcpy(nomeArqTemp,"TempXXXXXX");

	Apontador = mkstemp(nomeArqTemp);
	
	escrita = fdopen(Apontador, "w");

	while( (fgets(copy, COMPRIMENTO_MAXIMO_NOME, leitura)) != NULL)
	{
		printf(">>> \"%s\"\n", copy);
		if (copy[strlen(copy) - 1] == '\n')
		{
			copy[strlen(copy) - 1] = '\0';
			fprintf(escrita, "%s\r\n", copy);
		}
		else
			fprintf(escrita, "%s", copy);
			
	/*	if(strlen(copy) > COMPRIMENTO_MAXIMO_NOME)
		{
			printf("Arquivo corrompido\nLinha Muito longa\n");
			fclose(leitura);
			fclose(escrita);
			remove(argv[2]);
			exit(ARQUIVO_CORROMPIDO);
		}
	*/
	}

	if(ferror(leitura))
	{
		printf("Erro lendo arquivo: \"%s\"\n", argv[1]);
		printf("Erro(#%i): %s\n", errno, strerror(errno));
		fclose(leitura);	
		fclose(escrita);	
		remove(argv[2]);
		exit(ERRO_LENDO_ARQUIVO);	
	}
	
	if(ferror(escrita))
	{
		printf("Erro escrevendo arquivo: \"%s\"\n", nomeArqTemp);
		printf("Erro(#%i): %s\n", errno, strerror(errno));
		fclose(leitura);	
		fclose(escrita);	
		remove(nomeArqTemp);
		exit(ERRO_ESCREVENDO_ARQUIVO);	
	}

	snprintf( copy2, 100, "%s.bak", argv[1]);

	rename(argv[1], copy2);

	
	rename(nomeArqTemp, argv[1]);

	fclose(leitura);
	fclose(escrita);
	return OK;
}



/* $RCSfile: aula1001.c,v $ */
