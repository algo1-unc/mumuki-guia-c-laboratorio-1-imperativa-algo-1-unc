#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Funciones para generar mensaje de test
// Funciones para generar mensaje de test
char* genState( const char* name_of_test, 
                const int x, const int i, const bool res,
                const bool query_mode) {
    
    /*
        Input:
            name_of_test = Nombre del test a realizar.
            x, i, res = Valor de variables en estado inicial.
            query_mode = Flag para formatear salida.
        
        Output:
            message = Nombre de test personalizado
    */
    
    char* message;
    char* mode = "";
    
    if (query_mode)  {
      mode = "(MODO CONSULTA)";
    }
    
    asprintf(&message, "[%s %s, Sigma0(x->%d, i->%d, res->%s)]", 
        mode, name_of_test, x, i, res ? "true" : "false");
    
    return message;
}

char* genMsg(   const char* var_name,
                const int x_test, const int i_test, const bool res_test,
                const int x_student, const int i_student, const bool res_student,
                const bool query_mode) {
    
    char* message;

    if (query_mode) {
        asprintf(&message, "SigmaN(x->%d, i->%d, res->%s)", 
            x_student, i_student, res_student ? "true" : "false");

    } else {
        asprintf(&message, "chequeo (%s): Esperado(x->%d, i->%d, res->%s) | Retornado(x->%d, i->%d, res->%s)",
            var_name, x_test, i_test, res_test ? "true" : "false", 
            x_student, i_student, res_student ? "true" : "false");  
    }
    
    return message;
}

// Funciones para probar ejercicio
void my_ciclo2(int *x0, int *i0, bool *res0) {
    int x = *i0;
    int i = *i0;
    bool res = *res0;

    i = 2;
    res = true;

    while (i <= x && res) {
        res = res && (x % i != 0);
        i = i + 1;
    }

    *x0 = x;
    *i0 = i;
    *res0 = res;
}