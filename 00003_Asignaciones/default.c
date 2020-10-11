// Permite intercambiar entre modo testeo y de consulta.
#define CONSULTA false

// Valores de estado inicial para consulta
#define X_VAR 1
#define Y_VAR 1


void exp_1a(int *x0) {
  int x = *x0;

  // -> CODIGO AQUI <-
  
  *x0 = x;
}

void exp_1b(int *x0, int *y0) {
  int x = *x0;
  int y = *y0;
  
  // -> CODIGO AQUI <-
  
  *x0 = x;
  *y0 = y;
}


void exp_1c(int *x0, int *y0) {
  int x = *x0;
  int y = *y0;
  
  // -> CODIGO AQUI <-
  
  *x0 = x;
  *y0 = y;
}
