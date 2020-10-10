#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Funciones para generar mensaje de test
char* genState(const char* name_of_test, const int x, const int y) {
    
    /*
        Input:
            name_of_test = Nombre del test a realizar.
            x = Valor de variable x en estado inicial.
            y = Valor de variable y en estado inicial
        
        Output:
            message = Nombre de test personalizado
    */
    
    char* message;
    asprintf(&message, "%s: estado inicial (x->%d, y->%d)", name_of_test, x, y);
    return message;
}

char* genMsg(const char* var_name , 
                const int val_expected, 
                const int val_returned, 
                bool debug_mode) {
    /*
        Input:
            var_name = Nombre de variable de estado final a testear.
            val_expected = Valor esperado
            val_returned = Valor retornado por estudiante
            debug_mode = Flag para formatear devolucion
        
        Output:
            message = Mensaje de devolucion para el test unitario.
    */
    
    char* message;

    if (debug_mode) {
      asprintf(&message, "Estado final (%s->%d)", var_name, val_returned);

    } else {
      asprintf(&message, "Estado final (%s->). Valor esperado: %d, Valor retornado: %d.", 
        var_name, val_expected, val_returned);  
    }
    
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