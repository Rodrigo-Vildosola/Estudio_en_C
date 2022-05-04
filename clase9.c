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

int main(int argc, char *argv[]){
    int op1 = 27;
    int op2 = 6;

    oper ff[] = {
        {'+', suma},
        {'x', mult},
        {'-', resta},
        {'*', pot}
    };

    for (int i = 0; i < sizeof(ff)/sizeof(oper) ; i++){
        printf("%d %c %d = %d\n", op1, ff[i].operador, op2, ff[i].funcion(op1, op2));
    }
    
    return 0;
}