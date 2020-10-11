#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Funciones para generar mensaje de test

char* genState( const char* name_of_test, 
                const int x, const int y, const int z, 
                const bool query_mode) {
    /*
        Input:
            name_of_test = Nombre del test a realizar.
            x,y,z = Valores de variables en estado inicial.
            query_mode = Flag para formatear salida
        
        Output:
            message = Nombre de test personalizado
    */
    
    char* message;
    char* mode = "";

    if (query_mode)  {
        mode = "(MODO CONSULTA)";
    }

    asprintf(&message, "[%s %s, Sigma0(x->%d, y->%d, z->%d)]", mode, name_of_test, x, y, z);
    
    return message;
}

char* genIntMsg(const char* function_name, 
                const int val_expected, 
                const int val_returned, 
                const bool debug_mode) {
    /*
        Input:
            function_name = Nombre de funcion a testear.
            val_expected = Valor (int) esperado
            val_returned = Valor (int) retornado por estudiante
            query_mode = Flag para formatear salida
        
        Output:
            message = Mensaje de devolucion para el test unitario.
    */
    
    char* message;
    
    if (debug_mode) {
      asprintf(&message, "%s(), devolvio '%d'", function_name, val_returned);
    } else {
      asprintf(&message, "Dado %s(), Esperado=%d, Retornado=%d.", 
        function_name, val_expected, val_returned);  
    }
    
    return message;
}

char* genBoolMsg( const char* function_name, 
                  const bool val_expected, 
                  const bool val_returned, 
                  const bool debug_mode) {
    /*
        Input:
            function_name = Nombre de funcion a testear.
            val_expected = Valor (bool) esperado
            val_returned = Valor (bool) retornado por estudiante
            query_mode = Flag para formatear salida
        
        Output:
            message = Mensaje de devolucion para el test unitario.
    */
    
    char* message;
    
    if (debug_mode) {
      asprintf(&message, "%s(), devolvio '%s'", function_name, val_returned ? "true" : "false");
    } else {
      asprintf(&message, "Dado %s(), Esperado=%s, Retornado=%s.", 
        function_name, val_expected ? "true" : "false", val_returned ? "true" : "false");  
    }
    
    return message;
}


// Funciones para testeo de ejercicio

int my_exp1(int x, int y) {
    int res = x + y + 1;
    return res;
}

int my_exp2(int x, int y, int z) {
    int res = z * z + y * 45 - 15 * x;
    return res;
}

bool my_exp3(int x, int y) {
    bool res = (y - 2)  == (x * 3 + 1) % 5;
    printf("%d", res);
    return  res;
}

int my_exp4(int x, int y) {
    int res = y / 2 * x;
    return res;
}

bool my_exp5(int x, int y, int z) {
    bool res = y < x * z;
    return res;
}

