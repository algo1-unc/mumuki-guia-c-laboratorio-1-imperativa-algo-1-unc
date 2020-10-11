#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Funciones para generar mensaje de test

char* genState( const char* name_of_test, 
                const int x, const int y, const int z, 
                const bool b, const bool w,
                const bool query_mode) {
    /*
        Input:
            name_of_test = Nombre del test a realizar.
            x,y,x,b,w = Valores de variables en estado inicial.
            query_mode = Flag para formatear salida
        
        Output:
            message = Nombre de test personalizado
    */
    
    char* message;
    char* mode = "";

    if (query_mode)  {
        mode = "(MODO CONSULTA)";
    }

    asprintf(&message, "[%s %s, Sigma0(x->%d, y->%d, z->%d, b->%s, w->%s)]",
            mode, name_of_test, x, y, z, b ? "true" : "false", w ? "true" : "false");
    
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