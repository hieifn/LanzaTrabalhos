#Universidade Federal do Rio de Janeiro
#Escola Politecnica
#Departamento de Eletronica e de Computacao
#EEL270 - Computacao II - Turma 2017/1
#Prof. Marcelo Luiz Drumond Lanza
#Autor: Nome Completo
#
#$Author: igor.nascimento $
#$Date: 2017/05/24 23:48:17 $
#$Log: Makefile,v $
#Revision 1.35  2017/05/24 23:48:17  igor.nascimento
#Makefile aula 10 parte 2
#
#Revision 1.34  2017/05/24 23:47:31  igor.nascimento
#Makefile completo para aula 10
#
#Revision 1.33  2017/05/18 00:54:29  igor.nascimento
#Makefile final para a aula09
#
#Revision 1.32  2017/05/18 00:37:35  igor.nascimento
#Makefile para a aula 09
#
#Revision 1.31  2017/05/09 19:09:15  igor.nascimento
#Makefile final para a aula08
#
#Revision 1.30  2017/05/09 19:08:16  igor.nascimento
#Makefile referente a setima parte da aula08
#
#Revision 1.29  2017/05/09 19:07:57  igor.nascimento
#Makefile referente a sexta parte da aula08
#
#Revision 1.28  2017/05/09 19:07:31  igor.nascimento
#Makefile referente a quinta parte da aula08
#
#Revision 1.27  2017/05/09 19:06:53  igor.nascimento
#Makefile referente a quarta parte da aula08
#
#Revision 1.26  2017/05/09 19:06:13  igor.nascimento
#Makefile referente a terceira parte da aula08
#
#Revision 1.25  2017/05/09 19:05:47  igor.nascimento
#Makefile referente a segunda parte da aula08
#
#Revision 1.24  2017/05/09 19:05:15  igor.nascimento
#Makefile referente a aula08 parte 1.
#
#Revision 1.23  2017/05/02 17:30:31  igor.nascimento
#Makefile atualizado para a aula07 com a mudanca no CFLAGS para a strtof funcionar corretamente
#
#Revision 1.22  2017/04/24 17:13:16  igor.nascimento
#Makefile completo para a aula06 com erros corrigidos
#
#Revision 1.21  2017/04/24 17:08:19  igor.nascimento
#Makefile final para a aula05
#
#Revision 1.20  2017/04/24 16:59:30  igor.nascimento
#Makefile para terceira parte da aula 05
#
#Revision 1.19  2017/04/24 16:51:38  igor.nascimento
#Makefile para segunda parte da aula 5
#
#Revision 1.18  2017/04/24 16:47:31  igor.nascimento
#Makefile da aula 5 com biblioteca estatica que foi muito mal explicada
#
#Revision 1.17  2017/04/07 15:56:39  igor.nascimento
#Makefile final da aula04
#
#Revision 1.16  2017/04/07 15:52:24  igor.nascimento
#Makefile atualizado para terceira parte da aula04
#
#Revision 1.15  2017/04/07 15:46:33  igor.nascimento
#Makefile atualizado para segunda parte da aula 4
#
#Revision 1.14  2017/04/06 19:55:33  igor.nascimento
#Makefile agora com a aula4 de potencia
#
#Revision 1.13  2017/03/30 20:03:47  igor.nascimento
#Makefile atualizado para ultima parte da aula 03
#
#Revision 1.12  2017/03/30 19:59:27  igor.nascimento
#AULA03 For
#
#Revision 1.11  2017/03/30 19:53:15  igor.nascimento
#AULA 03 Do While
#
#Revision 1.10  2017/03/30 19:12:33  igor.nascimento
#AULA03 atualizacao do makefile
#Fibonacci funcionando
#
#Revision 1.9  2017/03/24 19:49:34  igor.nascimento
#Makefile agora em sua ultima versao possivel para MDC com while
#Fim da aula 02
#
#Revision 1.8  2017/03/24 19:40:30  igor.nascimento
#Makefile agora com a terceira parter do trabalho
#
#Revision 1.7  2017/03/23 23:27:29  igor.nascimento
#Makefile atualizado para implementar a aula0201b.c
#
#Revision 1.6  2017/03/23 23:11:49  igor.nascimento
#Makefile PRONTO para AULA02
#
#Revision 1.5  2017/03/20 19:59:52  igor.nascimento
#Makefile completado com a ultima versao
#tudo funcionando
#
#Revision 1.4  2017/03/20 19:29:07  igor.nascimento
#Makefile atualizado com aula0104
#Agora é feito as combinacoes possiveis entre modificadores de sinal e de largura
#Tudo ok.
#
#Revision 1.3  2017/03/16 19:48:36  igor.nascimento
#Makefile Atualizado para a aula 3
#Tudo ok
#
#Revision 1.2  2017/03/16 19:39:10  igor.nascimento
#Segunda versao do Makefile
#Agora realizando a compilacao e linkedicao da aula0102
#Tudo ok
#
#Revision 1.1  2017/03/16 19:23:46  igor.nascimento
#Initial revision
# 

CC = gcc
LD = gcc
CFLAGS = -ansi -Wall -std=c99
LFLAGS = -ansi -Wall

AULA0101OBJS = aula0101.o
AULA0102OBJS = aula0102.o
AULA0103OBJS = aula0103.o
AULA0104OBJS = aula0104.o
AULA0105OBJS = aula0105.o

AULA0202AOBJS = aula0201a.o aula0202.o
AULA0202BOBJS = aula0201b.o aula0202.o
AULA0202COBJS = aula0201c.o aula0202.o
AULA0202DOBJS = aula0201d.o aula0202.o

AULA0302AOBJS = aula0301a.o aula0302.o
AULA0302BOBJS = aula0301b.o aula0302.o
AULA0302COBJS = aula0301c.o aula0302.o
AULA0302DOBJS = aula0301d.o aula0302.o

AULA0402AOBJS = aula0401a.o aula0402.o
AULA0402BOBJS = aula0401b.o aula0402.o
AULA0402COBJS = aula0401c.o aula0402.o
AULA0402DOBJS = aula0401d.o aula0402.o

LIBMATEMATICAOBJS = aula0401a.o

AULA0502AOBJS = aula0501a.o aula0502.o
AULA0502BOBJS = aula0501b.o aula0502.o
AULA0502COBJS = aula0501c.o aula0502.o
AULA0502DOBJS = aula0501d.o aula0502.o


AULA0602OBJS = aula0601.o aula0602.o


AULA0702OBJS = aula0701.o aula0702.o


AULA0802AOBJS = aula0801.o aula0802a.o
AULA0802BOBJS = aula0801.o aula0802b.o
AULA0803AOBJS = aula0801.o aula0803a.o
AULA0803BOBJS = aula0801.o aula0803b.o
AULA0805AOBJS = aula0804.o aula0805a.o
AULA0805BOBJS = aula0804.o aula0805b.o
AULA0806AOBJS = aula0804.o aula0806a.o
AULA0806BOBJS = aula0804.o aula0806b.o

AULA0902OBJS = aula0901.o aula0902.o
AULA0903OBJS = aula0901.o aula0903.o



AULA1001OBJS = aula1001.o
AULA1002OBJS = aula1002.o



AULA01 = aula0101\
	aula0102\
	aula0103\
	aula0104\
	aula0105\
	
AULA02 = aula0202a\
	aula0202b\
	aula0202c\
	aula0202d\

AULA03 = aula0302a\
	aula0302b\
	aula0302c\
	aula0302d\

AULA04 = aula0402a\
	aula0402b\
	aula0402c\
	aula0402d\

LIBMATEMATICA = libmatematica.a
AULA05 = aula0502a\
	aula0502b\
	aula0502c\
	aula0502d\

AULA06 = aula0602\


AULA07 = aula0702\


AULA08 = aula0802a\
	aula0802b\
	aula0803a\
	aula0803b\
	aula0805a\
	aula0805b\
	aula0806a\
	aula0806b\
	
AULA09 = aula0902\
	aula0903\



AULA10 = aula1001\
	aula1002\



EXECS = $(AULA01) $(AULA02) $(AULA03) $(AULA04) $(AULA05) $(AULA06) $(AULA07) $(AULA08) $(AULA09) $(AULA10)

LIBS = $(LIBMATEMATICA)


ALL = $(EXECS) $(LIBS)


.c.o :
	$(CC) $(CFLAGS) -c $<


all: $(EXECS)


aula01: $(AULA01)

aula0101 : $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)

aula0102 : $(AULA0102OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0102OBJS)

aula0103 : $(AULA0103OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0103OBJS)

aula0104 : $(AULA0104OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0104OBJS)
	
aula0105 : $(AULA0105OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0105OBJS)



aula02: $(AULA02)

aula0202a : $(AULA0202AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202AOBJS)
	
aula0202b : $(AULA0202BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202BOBJS)

aula0202c : $(AULA0202COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202COBJS)

aula0202d : $(AULA0202DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202DOBJS)




aula03: $(AULA03)

aula0302a : $(AULA0302AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302AOBJS)
	
aula0302b : $(AULA0302BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302BOBJS)

aula0302c : $(AULA0302COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302COBJS)

aula0302d : $(AULA0302DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302DOBJS)




aula04: $(AULA04)

aula0402a : $(AULA0402AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402AOBJS)
	
aula0402b : $(AULA0402BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402BOBJS)

aula0402c : $(AULA0402COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402COBJS)

aula0402d : $(AULA0402DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402DOBJS)


libmatematica.a: $(LIBMATEMATICAOBJS)
	ar	-r	$@	$(LIBMATEMATICAOBJS)



aula05: $(AULA05)

aula0502a : $(AULA0502AOBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502AOBJS) -L. -lmatematica

aula0502b : $(AULA0502BOBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502BOBJS) -L. -lmatematica

aula0502c : $(AULA0502COBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502COBJS) -L. -lmatematica

aula0502d : $(AULA0502DOBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502DOBJS) -L. -lmatematica




aula06: $(AULA06)

aula0602 : $(AULA0602OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0602OBJS)





aula07: $(AULA07)

aula0702 : $(AULA0702OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0702OBJS)





aula08: $(AULA08)

aula0802a : $(AULA0802AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0802AOBJS)

aula0802b : $(AULA0802BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0802BOBJS)

aula0803a : $(AULA0803AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0803AOBJS)

aula0803b : $(AULA0803BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0803BOBJS)

aula0805a : $(AULA0805AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0805AOBJS)

aula0805b : $(AULA0805BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0805BOBJS)

aula0806a : $(AULA0806AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0806AOBJS)

aula0806b : $(AULA0806BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0806BOBJS)


aula09: $(AULA09)

aula0902 : $(AULA0902OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0902OBJS)

aula0903 : $(AULA0903OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0903OBJS)




aula10: $(AULA10)

aula1001 : $(AULA1001OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA1001OBJS)

aula1002 : $(AULA1002OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA1002OBJS)




clean :
	rm -f *.o $(ALL) 
 
# $RCSfile: Makefile,v $
