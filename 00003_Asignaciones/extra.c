#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Funciones para generar mensaje de test
char* genState( const char* name_of_test, 
                const int x, 
                const int y, 
                const bool query_mode) {
    
    /*
        Input:
            name_of_test = Nombre del test a realizar.
            x, y = Valor de variables en estado inicial.
            query_mode = Flag para formatear salida.
        
        Output:
            message = Nombre de test personalizado
    */
    
    char* message;
    char* mode;
    
    if (query_mode)  {
      mode = "(MODO CONSULTA)";
    } else {
      mode = "(MODO TEST)";
    }
    
    asprintf(&message, "%s %s, Sigma0(x->%d, y->%d)", mode, name_of_test, x, y);
    
    return message;
}

char* genMsg(   const char* var_name,
                const int x_test, const int y_test,
                const int x_student, const int y_student,
                const bool query_mode) {
  
  /*
        Input:
            var_name = Nombre de variable a testear
            *_test = valores correctos de funciones de testeo
            *_student = valores reotnados por funciones de estudiantes
            query_mode = Flag para formatear salida
        
        Output:
            message = Mensaje de devolucion para el test unitario.
    */
    
    char* message;

    if (query_mode) {
        asprintf(&message, "Sigma(x->%d, y->%d)", 
            x_student, y_student);  

    } else {
        asprintf(&message, "Error (%s->): Esperado(x->%d, y->%d) | Retornado(x->%d, y->%d)", 
            var_name, x_test, y_test, x_student, y_student);  
    }
    
    return message;
}

// Funciones para probar ejercicio

void my_exp_1a(int *x0) {
    *x0 = 5;
}

void my_exp_1b(int *x0, int *y0) {
    *x0 = *x0 + *y0;
    *y0 = *y0 + *y0;
}


void my_exp_1c(int *x0, int *y0) {
    *y0 = *y0 + *y0;
    *x0 = *x0 + *y0;
}