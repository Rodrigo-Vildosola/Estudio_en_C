#include <stdio.h>
#include <math.h>

#include "funcion.h"

int main(int argc, char *argv[]){
    int op1 = 3;
    int op2 = 3;

    oper ff[] = {
        {'+', suma},
        {'x', mult},
        {'-', resta},
        {'^', pot}
    };

    for (int i = 0; i < sizeof(ff)/sizeof(oper) ; i++){
        printf("%d %c %d = %d\n", op1, ff[i].operador, op2, ff[i].funcion(op1, op2));
    }
    
    return 0;
}
