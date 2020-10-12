// Permite intercambiar entre modo testeo y de consulta.
#define CONSULTA false

// Valores de estado inicial para consulta
#define X_VAR 1
#define Y_VAR 1
#define RES_VAR true


void ciclo2(int *x0, int *i0, bool *res0) {
    int x = *i0;
    int i = *i0;
    bool res = *res0;

    // -> CODIGO AQUI <-

    *x0 = x;
    *i0 = i;
    *res0 = res;
}