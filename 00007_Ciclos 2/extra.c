#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Funciones para generar mensaje de test
char* genState( const char* name_of_test, 
                const int x, const int y, const int i,
                const bool query_mode) {
    
    /*
        Input:
            name_of_test = Nombre del test a realizar.
            x, y, i = Valor de variables en estado inicial.
            query_mode = Flag para formatear salida.
        
        Output:
            message = Nombre de test personalizado
    */
    
    char* message;
    char* mode = "";
    
    if (query_mode)  {
      mode = "(MODO CONSULTA)";
    }
    
    asprintf(&message, "[%s %s, Sigma0(x->%d, y->%d, i->%d)]", mode, name_of_test, x, y, i);
    
    return message;
}

char* genMsg(   const char* var_name,
                const int x_test, const int y_test, const int i_test,
                const int x_student, const int y_student, const int i_student,
                const bool query_mode) {
    
    char* message;

    if (query_mode) {
        asprintf(&message, "SigmaN(x->%d, y->%d, i->%d)", 
            x_student, y_student, i_student);

    } else {
        asprintf(&message, "chequeo (%s): Esperado(x->%d, y->%d, i->%d) | Retornado(x->%d, y->%d, i->%d)",
            var_name, x_test, y_test, i_test, x_student, y_student, i_student);  
    }
    
    return message;
}

// Funciones para probar ejercicio
void my_ciclo1(int *x0, int *y0, int *i0) {
    int x = *x0;
    int y = *y0;
    int i = *i0;

    i = 0;
    while (x >= y) {
        x = x - y;
        i = i + 1;
    }

    *x0 = x;
    *y0 = y;
    *i0 = i;
}