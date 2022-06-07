<!-- @format -->

# CONCLUSIONES DEL TP

## Punto 1 : Preprocesador

b) Al preprocesar el archivo hello2.c obtenemos el archivos hello2.i, el cual posee todo el contenido de la standard output, solo sus declaraciones. Por otro lado, los comentariso fueron removidos.

d) La primera linea define la firma de la función printf, la cual recibe una cadena de caracteres constantes (no podran variar su valor a lo largo del programa) y no podra ser apuntado por otro puntero (accedida). Por último, los ... significan un array de longitud n (cantidad de parametros que se le pase) parametros posibles.

e) La diferencia radica en que hello3.i no hace uso de ninguna interfaz, por lo tanto el preprocesador no copia ninguna declaracion de función ni estructura, solo limpia sus comentarios.

## Punto 2 : Compilador

c) La compilación nos da el código "traducido" a lenguaje assembler. En el cual, podemos observar que: %eax (como todos los e..x) son registros, en este caso de propósito general, mientras que %rbp y %rsp son de propósito específico (son apuntadores a la punta de la pila y la base, respectivamente). %rbp siempre tiene un valor mayor a %rsp porque el stack comienza en una dirección de memoria alta y crece hacia abajo. Las lineas, hasta el call, encerradas dentro de "main:" estan haciendo lugar en la pila para poder ejecutar programa. El "call \_main" esta haciendo referencia a nuestro main y el "call: prontf", a nuestra funcion prontf. Por ultimo, las lineas debajo de "call: prontf" estan limpiando lo anteriormente cargado en la pila para ejecutar el programa.

## Punto 3: Vinculador

c) Luego de la corrección del error, impreme por consola lo que le dimos como input en el printf "La respuesta es 42".

## Punto 5: Remoción de prototipo

a) C permite la declaración implícita, no tendremos su firma pero si su declaración, dado que irá a buscar esta función a la standard library y, en este caso, la encontrará. Printf no es la única que goza de esta ventaja, otra puede ser abs() de <stdlib.h>.

## Punto 6: Contratos y Módulos

b) Para poder vincular ambos archivos .o (hello8.o y studio1.o), con el comando gcc, debemos usar:
gcc -include hello8.c studio1.c -o hello8 -std=c18

c) En este caso, al modificar la función prontf o su implementación, debemos hacerlo en ambos archivos o nos indicara un error en tiempo de compilación.

d) La ventaja principal de la inclusion es que transformamos a nuestra función printf en un productor consumidor, lo que nos obliga tener que definir la firma de la función y su implementación. Así, quien la quiera utilizar tendra que atarse a como nosotros definimos la funcion y evitara problemas con los argumentos y sus tipos.
