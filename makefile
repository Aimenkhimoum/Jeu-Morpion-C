all : morpion_jeu


morpion.o: morpion.c morpion.h
	gcc -Wall -c morpion.c 
   
morpion_jeu.o: morpion_jeu.c morpion.h
	gcc -Wall -c morpion_jeu.c
 
 morpion_jeu: morpion_jeu.o morpion.o 
	gcc -o morpion_jeu morpion_jeu.o morpion.o
 	
clean: 
	rm -f morpion_jeu *.o *~
