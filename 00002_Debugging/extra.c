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


char* genBoolMsg( const bool val_expected, 
                  const bool val_returned, 
                  const bool debug_mode) {
    /*
        Input:
            val_expected = Valor (bool) esperado
            val_returned = Valor (bool) retornado por estudiante
            query_mode = Flag para formatear salida
        
        Output:
            message = Mensaje de devolucion para el test unitario.
    */
    
    char* message;
    if (debug_mode) {
      asprintf(&message, "Retornado=%s", val_returned ? "true" : "false");
    } else {
      asprintf(&message, "Esperado=%s, Retornado=%s.", val_expected ? "true" : "false", val_returned ? "true" : "false");  
    }
    
    return message;
}

// Funciones para testeo de ejercicio

bool my_exp1(int x) {
  return (x % 4 == 0);
}

bool my_exp2(int x, int y, int z) {

  return x + y == 0 && y - x == (-1) * z;
}

bool my_exp3(bool b, bool w) {
  
  return !b && w;
}