all: Colheita_Miserável



Colheita_Miserável: main.o jogo.o
	gcc main.o jogo.o -o Colheita_Miserável -Wall
 
main.o: main.c jogo.h
	gcc -c main.c -Wall
 
jogo.o: jogo.c jogo.h
	gcc -c jogo.c -Wall


clean:
	-rm -f *.o

purge: clean
	-rm -f Colheita_Miserável
