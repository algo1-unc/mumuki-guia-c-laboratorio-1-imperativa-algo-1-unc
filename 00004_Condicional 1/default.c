// Permite intercambiar entre modo testeo y de consulta.
#define CONSULTA false

// Constantes para valores de estado inicial 
#define X_VAR ... 
#define Y_VAR ...


void fun(int *x0, int *y0) {
  int x = *x0;
  int y = *y0;
  
  // -> CODIGO AQUI <-
  
  *x0 = x;
  *y0 = y;
}