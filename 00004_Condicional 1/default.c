// Permite intercambiar entre modo testeo y de consulta.
#define CONSULTA false

// Valores de estado inicial para consulta
#define X_VAR 1
#define Y_VAR 1


void fun(int *x0, int *y0) {
  int x = *x0;
  int y = *y0;
  
  // -> CODIGO AQUI <-
  
  *x0 = x;
  *y0 = y;
}