#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Funciones para generar mensaje de test
char* genState( const char* name_of_test, 
                const int x, const int y,
                const int z, const int m,
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
    
    asprintf(&message, "%s %s, Sigma0(x->%d, y->%d, z->%d, m->%d)", mode, name_of_test, x, y, z, m);
    
    return message;
}

char* genMsg(   const char* var_name,
                const int x_test, const int y_test,
                const int z_test, const int m_test,
                const int x_student, const int y_student,
                const int z_student, const int m_student,
                const bool query_mode) {
    
    char* message;

    if (query_mode) {
        asprintf(&message, "Sigma(x->%d, y->%d, z->%d, m->%d)", 
            x_student, y_student, z_student, m_student);  

    } else {
        asprintf(&message, "chequeo (%s): Esperado(x->%d, y->%d, z->%d, m->%d) | Retornado(x->%d, y->%d, z->%d, m->%d)", 
            x_test, y_test, z_test, m_test, x_student, y_student, z_student, m_student);  
    }
    
    return message;
}

// Funciones para probar pejercicio

void program1(int *x0, int *y0, int *z0, int *m0) {
    int x = *x0;
    int y = *y0;
    int z = *z0;
    int m = *m0;
  
    if (x < y) {
        m = x;
    } else {
        m = y;
    }

    *x0 = x;
    *y0 = y;
    *z0 = z;
    *m0 = m;
}

void program2(int *x0, int *y0, int *z0, int *m0) {
    int x = *x0;
    int y = *y0;
    int z = *z0;
    int m = *m0;

    if (m >= z) {
        m = z;
    } 

    *x0 = x;
    *y0 = y;
    *z0 = z;
    *m0 = m;
}