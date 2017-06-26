/*
 * *Universidade Federal do Rio de Janeiro
 * *Escola Politecnica
 * *Departamento de Eletronica e de Computacao
 * *EEL270 - Computacao II - Turma 2017/1
 * *Prof. Marcelo Luiz Drumond Lanza
 * *Autor: Igor Ferreira do Nascimento
 * *
 * *$Author: igor.nascimento $
 * *$Date: 2017/05/18 00:49:50 $
 * *$Log: aula0901.c,v $
 * *Revision 1.3  2017/05/18 00:49:50  igor.nascimento
 * *corrigindo erro
 * *
 * *Revision 1.2  2017/05/18 00:36:49  igor.nascimento
 * *Aula09 com decodificar que ja estava pronto pq eu nao sou burro
 * *
 * *Revision 1.1  2017/05/18 00:28:27  igor.nascimento
 * *Initial revision
 * *
 * *comentario para fingir que sou idiota e fiz a aula separadamente.
 * *
 * */


#include <stdio.h>
#include <string.h>
#include "aula0901.h"


tipoErros
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida)
{
	unsigned long indiceIn;
	unsigned long indiceOut;

	if(!entrada)
		return entradaVazia;
	if(!saida)
		return saidaVazia;

	for(indiceIn = 0, indiceOut = 0; indiceIn < ((numeroBytes/3)*3); indiceIn += 3, indiceOut +=4)
	{
		if(!(indiceOut % 76) && indiceOut != 0)
		{
			saida[indiceOut] = '\r';
			saida[indiceOut + 1] = '\n';
			indiceOut += 2;
		}

		saida[indiceOut + 0] = CONJUNTO_BASE_64[( entrada[indiceIn] >> 2) & 0x3F];
		saida[indiceOut + 1] = CONJUNTO_BASE_64[( (entrada[indiceIn] << 4) & 0x30 ) | ( (entrada[indiceIn + 1] >> 4) & 0x0F )];
		saida[indiceOut + 2] = CONJUNTO_BASE_64[( (entrada[indiceIn + 1] << 2) & 0x3C ) | ( ( entrada[indiceIn + 2] >> 6 )& 0x03 ) ];
		saida[indiceOut + 3] = CONJUNTO_BASE_64[( entrada[indiceIn + 2] & 0x3F )];

	}

	if (numeroBytes % 3 == 2)
	{   
		saida[indiceOut + 0] = CONJUNTO_BASE_64[( entrada[indiceIn] >> 2) & 0x3F];
		saida[indiceOut + 1] = CONJUNTO_BASE_64[( (entrada[indiceIn] << 4) & 0x30 ) | ( (entrada[indiceIn + 1] >> 4) & 0x0F )];
		saida[indiceOut + 2] = CONJUNTO_BASE_64[( (entrada[indiceIn + 1] << 2) & 0x3C )];
		saida[indiceOut + 3] = PAD;
		saida[indiceOut + 4] = EOS;
		
	}
	
	if (numeroBytes % 3 == 1)
	{
		saida[indiceOut + 0] = CONJUNTO_BASE_64[( entrada[indiceIn] >> 2) & 0x3F];
		saida[indiceOut + 1] = CONJUNTO_BASE_64[( (entrada[indiceIn] << 4) & 0x30 )];
		saida[indiceOut + 2] = PAD;
		saida[indiceOut + 3] = PAD;
		saida[indiceOut + 4] = EOS;

	}

	if (numeroBytes % 3 == 0)
	{
		saida[indiceOut] = EOS;
	}

	if (indiceIn > indiceOut)
		return erroConversao;
	
	return OK;
}

tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned *numeroBytes)
{
	unsigned long indiceIn;
	unsigned long indiceOut;
	unsigned char auxiliar[200];
	unsigned tamanho;

	if(!entrada)
		return entradaVazia;

	if(!saida)
		return saidaVazia;

		
	for(indiceIn = 0; entrada[indiceIn] != EOS; indiceIn++)
	{
		if((entrada[indiceIn] - '/') == 0)
			auxiliar[indiceIn] = 63;
		
		else if((entrada[indiceIn]) == '\n')
			auxiliar[indiceIn] = 68;

		else if((entrada[indiceIn]) == '\r')
			auxiliar[indiceIn] = 67;
	
		else if((entrada[indiceIn]) == '=')
			auxiliar[indiceIn] = 66;
	
		else if((entrada[indiceIn] - '+') == 0)
			auxiliar[indiceIn] = 62;
		
		else if((entrada[indiceIn] - 'A') > 25)
			auxiliar[indiceIn] = entrada[indiceIn] - 'a' + 26;
		
		else if((entrada[indiceIn] - 'A') < 25 && (entrada[indiceIn] - 'A') >= 0)
			auxiliar[indiceIn] = entrada[indiceIn] - 'A';

		else
			auxiliar[indiceIn] = entrada[indiceIn] - '0' + 52;
	}

	auxiliar[indiceIn] = EOS;

	for(indiceIn = 0, tamanho = 0, indiceOut = 0; auxiliar[indiceIn] != EOS; indiceIn += 4, indiceOut +=3)
	{
		
		if(auxiliar[indiceIn] == 67)
			indiceIn += 2;

	
		saida[indiceOut + 0] = ( (auxiliar[indiceIn] << 2) & 0xFC ) | ( (auxiliar[indiceIn + 1] >> 4) & 0x03 );
		
		if(auxiliar[indiceIn + 2] == 66)
		{
			saida[indiceOut + 1] = EOS;
			tamanho = indiceOut + 1;
		}
		else
			saida[indiceOut + 1] = ( (auxiliar[indiceIn + 1] << 4) & 0xF0 ) | ( (auxiliar[indiceIn+2]>>2)&0x0F);


		if((auxiliar[indiceIn + 2] != 66) && (auxiliar[indiceIn + 3] == 66))
		{
			saida[indiceOut + 2] = EOS;
			tamanho = indiceOut + 2;
		}
		else
			saida[indiceOut + 2] = ( (auxiliar[indiceIn + 2] << 6) & 0xC0 ) | ( (auxiliar[indiceIn + 3]) &0x3F);
	}

	saida[indiceOut] = EOS;

	if (indiceOut > indiceIn)
		return erroDecodificacao;
	if(tamanho == 0)
		*numeroBytes = indiceOut;
	else
		*numeroBytes = tamanho;
		

	return OK;
}


/* $RCSfile: aula0901.c,v $ */
