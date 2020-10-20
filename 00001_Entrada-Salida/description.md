Dada las siguientes expresiones:

* exp1 = ```(x + y + 1)```
* exp2 = ```z * z + y * 45 - 15 * x```
* exp3 = ```y - 2 == (x * 3 + 1) % 5```
* exp4 = ```y / 2 * x```
* exp5 = ```y < x * z```

Codifique sus respectivas funciones en C, para que puedan ser evaluadas en los siguentes estados:

* Estado1: ```(x->7, y->3, z->5)```
* Estado2: ```(x->1, y->10, z->8)```

**IMPORTANTE!** No modifique el nombre de las funciones de la plantilla presentada.


>**NOTA:** Para simular el comando **scanf()** y probar sus funciones en diferentes estados iniciales `(x->, y->, z->)`, asigne valores a `X_VAR`, `Y_VAR` y `Z_VAR` y envie su solución en modo CONSULTA, en este modo podrá ver los resultados de las expresiones, que le aparezca en rojo no significa que no este bien. Para ello setea `CONSULTA true` y presione :arrow_forward:**Enviar**. Una vez concluida su consulta, **recuerde**:exclamation: que debe re-asignar `CONSULTA false` para que al enviar sus soluciones el sistema **"pueda corregir y dar por completo el ejercicio"**.