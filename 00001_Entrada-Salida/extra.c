#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Funciones para generar mensaje de test

char* genState(const char* name_of_test, const int x, const int y, const int z) {
    /*
        Formatea string con valores de estados pasados
    */
    
    char* message;
    asprintf(&message, "%s para estado (x->%d, y->%d, z->%d)", name_of_test, x,y,z);
    return message;
}

char* genIntDebugMsg(const char* function_name , const int val_returned) {
    /*
        Toma el nombre de la funcion y su resultado (Int), 
        y crea el mensaje de devolucion.
    */
    
    char* message;
    asprintf(&message, "%s(), devolvio '%d'", function_name, val_returned);
    return message;
}

char* genBoolDebugMsg(const char* function_name , const bool val_returned) {
    /*
        Toma el nombre de la funcion y su resultado (Bool), 
        y crea el mensaje de devolucion.
    */
    
    char* message;
    asprintf(&message, "%s(), devolvio '%s'", 
        function_name, val_returned ? "true" : "false");
    return message;
}


char* genIntMsg(const char* function_name , const int val_expected, const int val_returned) {
    /*
        Toma el nombre de la funcion y el valor de resultado esperado (Int), 
        y crea el mensaje de devolucion para el test unitario.
    */
    
    char* message;
    asprintf(&message, "Dado %s(). Valor esperado:%d, Valor retornado:%d.", 
        function_name, val_expected, val_returned);
    return message;
}

char* genBoolMsg(const char* function_name , const bool val_expected, const bool val_returned) {
    /*
        Toma el nombre de la funcion y el valor de resultado esperado (Bool), 
        y crea el mensaje de devolucion para el test unitario.
    */
    char* message;
    asprintf(&message, "Dado %s(). Valor esperado:%s, Valor retornado:%s.", 
        function_name, val_expected ? "true" : "false", val_returned ? "true" : "false");
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

