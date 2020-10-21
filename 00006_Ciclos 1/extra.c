#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Funciones para generar mensaje de test
char* genState( const char* name_of_test, 
                const int i,
                const bool query_mode) {
    
    /*
        Input:
            name_of_test = Nombre del test a realizar.
            i = Valor de variables en estado inicial.
            query_mode = Flag para formatear salida.
        
        Output:
            message = Nombre de test personalizado
    */
    
    char* message;
    char* mode = "";
    
    if (query_mode)  {
      mode = "(MODO CONSULTA)";
    }
    
    asprintf(&message, "[%s %s, Sigma0(i->%d)]", mode, name_of_test, i);
    
    return message;
}

char* genMsg(   const char* var_name,
                const int i_test, const int i_student,
                const bool query_mode) {
    
    char* message;

    if (query_mode) {
        asprintf(&message, "Sigma1(i->%d)", i_student);  

    } else {
        asprintf(&message, "chequeo (%s): Esperado(i->%d) | Retornado(i->%d)", var_name, i_test, i_student);  
    }
    
    return message;
}

// Funciones para probar ejercicio

void my_exp_1h(int *i0) {
  int i = *i0;
  while(i != 0) {
    i = i - 1;
  }
  *i0 = i;
}

void my_exp_1i(int *i0) {
  int i = *i0;
  while(i != 0) {
    i = 0;
  }
  *i0 = i;
}