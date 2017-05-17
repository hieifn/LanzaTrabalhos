#Universidade Federal do Rio de Janeiro
#Escola Politecnica
#Departamento de Eletronica e de Computacao
#EEL270 - Computacao II - Turma 2017/1
#Prof. Marcelo Luiz Drumond Lanza
#Autor: Nome Completo
#
#$Author: igor.nascimento $
#$Date: 2017/04/07 15:56:39 $
#$Log: Makefile,v $
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
CFLAGS = -ansi -Wall
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



AULA0802AOBJS = aula0801.o aula0802a.o



AULA0902OBJS = aula0901.o aula0902.o



AULA01 = aula0101\
	aula0102\
	aula0103\
	aula0104\
	aula0105\
	
AULA02 = aula0202a\
	aula0202b\
	aula0202c\
	aula0202d\
]
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

AULA08 = aula0802a\

AULA09 = aula0902\


EXECS = $(AULA01) $(AULA02) $(AULA03) $(AULA04) $(AULA05) $(AULA06) $(AULA08) $(AULA09)

LIBS = $(LIBMATEMATICA)


ALL = $(EXECS) $(LIBS)


.c.o :
	$(CC) $(CFLAGS) -c $<


all: $(ALL)


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

aula0502a : $(AULA0502AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502AOBJS) libmatematica.a

aula0502b : $(AULA0502BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502BOBJS) libmatematica.a

aula0502c : $(AULA0502COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502COBJS) libmatematica.a

aula0502d : $(AULA0502DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0502DOBJS) libmatematica.a




aula06: $(AULA06)

aula0602 : $(AULA0602OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0602OBJS)




aula08: $(AULA08)

aula0802a : $(AULA0802AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0802AOBJS)



aula09: $(AULA09)

aula0902 : $(AULA0902OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0902OBJS)


clean :
	rm -f *.o $(ALL) 
 
# $RCSfile: Makefile,v $
