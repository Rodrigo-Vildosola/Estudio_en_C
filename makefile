CC = gcc
flags = -Wall -Wundef -Wpedantic -Werror

p: funcion.o main.o
	$(CC) $(flags) main.o funcion.o -o p.exe

funcion.o: funcion.c
	$(CC) $(flags) -o funcion.o -c funcion.c

main.o: main.c
	$(CC) $(flags) -o main.o -c main.c

clean:
	rm p.exe *.o
