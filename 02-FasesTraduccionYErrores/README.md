<!-- @format -->

# CONCLUSIONES DEL TP

## Punto 1 : Preprocesador

b) Al preprocesar el archivo hello2.c obtenemos el archivos hello2.i, el cual posee todo el contenido de la standard output, solo sus declaraciones. Por otro lado, los comentariso fueron removidos.

d) La primera linea define la firma de la funcion printf, la cual recibe una cadena de caracteres constantes (no podran variar su valor a lo largo del programa) y no podra ser apuntado por otro puntero (accedida). Por ultimo, los ... significan un array de longitud n (cantidad de parametros que se le pase) parametros posibles.

e) La diferencia radica en que hello3.i no hace uso de ninguna interfaz, por lo tanto el preprocesador no copia ninguna linea de codigo, solo limpia sus comentarios.

## Punto 2 : Compilador

c) La compilacion nos da el codigo "traducido" a lenguaje assembler. En el cual, podemos observar que: %eax (como todos los e..x) son registros, en este caso de propósito general, mientras que %rbp y %rsp son de propósito específico (son apuntadores a la punta de la pila y la base, respectivamente). %rbp siempre tiene un valor mayor a %rsp porque el stack comienza en una dirección de memoria alta y crece hacia abajo. Las lineas, hasta el call, encerradas dentro de "main:" estan haciendo lugar en la pila para poder ejecutar programa. El "call \_main" esta haciendo referencia a nuestro main y el "call: prontf", a nuestra funcion prontf. Por ultimo, las lineas debajo de "call: prontf" estan limpiando lo anteriormente cargado en la pila para ejecutar el programa.

## Punto 3: Vinculador

c) Luego de la correccion del error, impreme por consola lo que le dimos como input en el printf "La respuesta es 42".
