#### **Programas como transformadores de estados**

**1)** El objetivo de este proyecto es introducir:

* el concepto de estado y de programas como transformadores de estado;
* el modelo computacional imperativo, y sus diferencias con el modelo funcional;
* la implementación en lenguaje "C" de programas imperativos vistos en el teórico-práctico


**2)** Recordar:

Se compila así (siendo **miarchivo.c** el codigo que escribí, y **miprograma** el ejecutable que me va a generar):

```
$> gcc -Wall -Wextra -std=c99 miarchivo.c -o miprograma
```

Luego, para ejecutarlo:

```
$>./miprograma
```

Para compilar para **gdb**, agregar el flag **-g** al momento de compilar el .c y escribir en la terminal:

```
$> gcc -Wall -Wextra -std=c99 -g miarchivo.c -o miprograma
$> gdb miprograma
Setear breakpoints (puntos de cortes) - Ej linea 5 y linea 15
$> b 5
$> b 15
Empezar a ejecutar el programa
$> run
Ver estado de variables
$> display var
Continuar hasta el siguiente breakpoint 
$> c
```



