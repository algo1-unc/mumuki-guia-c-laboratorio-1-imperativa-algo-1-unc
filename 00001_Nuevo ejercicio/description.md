Dado los siguientes dos estados:

* estado1 = (x->7, y->3, z->5)
* estado2 = (x->1, y->10, z->8)

y las siguientes expresiones:

1. **(x + y + 1)**
2. **(z * z + y * 45 - 15 * x)**
3. **(y - 2 = (x * 3 + 1) % 5**
4. **(y / 2 * x)**
5. **(y < x * z)**

Codifique sus respectivas funciones en C, utilizando la siguiente sintaxis:

```C
... exp1(...) {
  /*
    Función que toma un estado (x,y,z) y retorna el resultado
    de evaluar la expresión "x + y + 1".
  */
  
  return ...;
}
```