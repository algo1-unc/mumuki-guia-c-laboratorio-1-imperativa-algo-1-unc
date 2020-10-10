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
    
    asprintf(&message, "%s %s, Sigma1(x->%d, y->%d)", mode, name_of_test, x, y);
    
    return message;
}

char* genMsg( const char* var_name , 
              const int val_expected, 
              const int val_returned, 
              const bool query_mode) {
    /*
        Input:
            var_name = Nombre de variable de estado final a testear.
            val_expected = Valor esperado
            val_returned = Valor retornado por estudiante
            query_mode = Flag para formatear salida
        
        Output:
            message = Mensaje de devolucion para el test unitario.
    */
    
    char* message;

    if (query_mode) {
      asprintf(&message, "SigmaN(%s->%d)", var_name, val_returned);

    } else {
      asprintf(&message, "SigmaN(%s->), Esperado=%d, Retornado=%d.", 
        var_name, val_expected, val_returned);  
    }
    
    return message;
}

// Funciones para probar pejercicio

void my_fun(int *x0, int *y0) {
  if (*x0 >= *y0) {
    *x0 = 0;    
  } else {
    *x0 = 2;
  }
}