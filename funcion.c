#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct operacion {
    char operador;
    int (*funcion)(int, int);
};

typedef struct operacion oper;

int suma(int a, int b){
    return a+b;
}

int mult(int a, int b){
    return a*b;
}

int resta(int a, int b){
    return a-b;
}

int pot(int a, int b){
    return pow(a, b);
}