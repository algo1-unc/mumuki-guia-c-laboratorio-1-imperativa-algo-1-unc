Dada las siguientes expresiones:

>1. **(x + y + 1)**
2. **(z * z + y * 45 - 15 * x)**
3. **(y - 2 = (x * 3 + 1) % 5**
4. **(y / 2 * x)**
5. **(y < x * z)**

Codifique las respectivas funciones en C, para que puedan ser evaluadas en los estados:

>* Estado1: **(x->7, y->3, z->5)** 
* Estado2: **(x->1, y->10, z->8)**

utilizando la siguiente sintaxis:

```C
... exp1(...) {
  /*
    Input: Estado (x,y,z).
    Output: Evaluación de expresión "x + y + 1".
  */
  
  return ...;
}
```