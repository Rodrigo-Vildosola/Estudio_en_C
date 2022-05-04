p: funcion.o main.o
	gcc main.o funcion.o -o p

funcion.o:
	gcc -o funcion.o -c funcion.c

main.o:
	gcc -o main.o -c main.c
