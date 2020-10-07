#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Funciones para generar mensaje de test

char* genState(const char* name_of_test, const int x, const int y, const int z, const bool b, const bool w) {
    /*
        Formatea string con valores de estados pasados
    */
    
    char* message;
    asprintf(&message, "%s para estado (x->%d, y->%d, z->%d, b->%s, w->%s)",
        name_of_test, x, y, z, b ? "true" : "false", w ? "true" : "false");
    return message;
}

char* genIntMsg(const char* function_name , const int val_expected, const int val_returned, bool debug_mode) {
    /*
        Toma el nombre de la funcion y el valor de resultado esperado (Int), 
        y crea el mensaje de devolucion para el test unitario.
    */
    
    char* message;
    if (debug_mode) {
      asprintf(&message, "%s(), devolvio '%d'", function_name, val_returned);
    } else {
      asprintf(&message, "Dado %s(). Valor esperado:%d, Valor retornado:%d.", 
        function_name, val_expected, val_returned);  
    }
    
    return message;
}

char* genBoolMsg(const char* function_name , const bool val_expected, const bool val_returned, bool debug_mode) {
    /*
        Toma el nombre de la funcion y el valor de resultado esperado (Bool), 
        y crea el mensaje de devolucion para el test unitario.
    */
    char* message;
    if (debug_mode) {
      asprintf(&message, "%s(), devolvio '%s'", function_name, val_returned ? "true" : "false");
    } else {
      asprintf(&message, "Dado %s(). Valor esperado:%s, Valor retornado:%s.", 
        function_name, val_expected ? "true" : "false", val_returned ? "true" : "false");  
    }
    
    return message;
}