// Permite intercambiar entre modo testeo y de consulta.
#define CONSULTA false

// Constantes para valores de estado inicial 
#define X_VAR ... 
#define Y_VAR ...
#define Z_VAR ...
#define M_VAR ...


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