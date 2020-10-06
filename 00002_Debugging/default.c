#include <stdbool.h>

// Funciones de recuperaciń de estados hayados
... getX(void) {
  return ...;
}

... getY(void) {
  return ...;
}

... getZ(void) {
  return ...;
}

... getB(void) {
  return ...;
}

... getW(void) {
  return ...;
}

// Funciones para la evaluación de las expresiones
... exp1(...) {
  int x = getX(); 
  return ...;
}

... exp2(...) {
  int x, y, z = getX(), getY(), getZ();
  return ...;
}

... exp3(...) {
  bool b, w = getB(), getW();
  return ...;
}