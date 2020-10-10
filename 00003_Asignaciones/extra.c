#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Funciones para generar mensaje de test
char* genState(const char* name_of_test, const int x, const int y) {
    /*
        Formatea string con valores de estados pasados
    */
    
    char* message;
    asprintf(&message, "%s para estado (x->%d, y->%d", name_of_test, x, y);
    return message;
}


// Funciones para probar pejercicio
void my_exp1a(int *x0) {
    *x0 = 5;
}

void my_exp1b(int *x0, int *y0) {
    *x0 = *x0 + *y0;
    *y0 = *y0 + *y0;
}


void my_exp1c(int *x0, int *y0) {
    *y0 = *y0 + *y0;
    *x0 = *x0 + *y0;
}