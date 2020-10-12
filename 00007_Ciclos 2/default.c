// Permite intercambiar entre modo testeo y de consulta.
#define CONSULTA false

// Valores de estado inicial para consulta
#define X_VAR 1
#define Y_VAR 1
#define I_VAR 1


void ciclo1(int *x0, int *y0, int *i0) {
    int x = *i0;
    int y = *y0;
    int i = *i0;

// -> CODIGO AQUI <-

    *x0 = x;
    *y0 = y;
    *i0 = i;
}