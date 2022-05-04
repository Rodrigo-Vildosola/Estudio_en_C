
typedef struct {
    char operador;
    int (*funcion)(int, int);
} oper;


int suma(int a, int b);

int mult(int a, int b);

int resta(int a, int b);

int pot(int a, int b);
