// Permite intercambiar entre modo testeo y de consulta.
#define CONSULTA false

// Valores de estado inicial para consulta
#define X_VAR 1
#define Y_VAR 1
#define Z_VAR 1
#define M_VAR 1


void program1(int *x0, int *y0, int *z0, int *m0) {
  int x = *x0;
  int y = *y0;
  int z = *z0;
  int m = *m0;
  
  // -> CODIGO AQUI <-
  
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
  
  // -> CODIGO AQUI <-
  
  *x0 = x;
  *y0 = y;
  *z0 = z;
  *m0 = m;
}