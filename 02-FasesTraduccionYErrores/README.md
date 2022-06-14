<!-- @format -->

# CONCLUSIONES DEL TP

## Punto 1 : Preprocesador

#### Preprocesar hello2.c, no compilar, y generar hello2.i. Analizar su contenido. ¿Qué conclusiones saca?
b) Al preprocesar el archivo hello2.c obtenemos el archivos hello2.i, el cual posee todo el contenido de la standard output, solo sus declaraciones. Por otro lado, los comentariso fueron removidos.

#### Investigar e indicar la semántica de la primera línea.
d) La primera linea define la firma de la función printf, la cual recibe una cadena de caracteres constantes (no podran variar su valor a lo largo del programa) y no podra ser apuntado por otro puntero (accedida). Por último, los ... significan un array de longitud n (cantidad de parametros que se le pase) parametros posibles.

#### Preprocesar hello3.c, no compilar, y generar hello3.i. Buscar diferencias entre hello3.c y hello3.i.
e) La diferencia radica en que hello3.i no hace uso de ninguna interfaz, por lo tanto el preprocesador no copia ninguna declaracion de función ni estructura, solo limpia sus comentarios.

## Punto 2 : Compilador

#### Leer hello4.s, investigar sobrelenguajeensamblador,eindicar de formar
sintética cual es el objetivo de ese código.
c) La compilación nos da el código "traducido" a lenguaje assembler. En el cual, podemos observar que: %eax (como todos los e..x) son registros, en este caso de propósito general, mientras que %rbp y %rsp son de propósito específico (son apuntadores a la punta de la pila y la base, respectivamente). %rbp siempre tiene un valor mayor a %rsp porque el stack comienza en una dirección de memoria alta y crece hacia abajo. Las lineas, hasta el call, encerradas dentro de "main:" estan haciendo lugar en la pila para poder ejecutar programa. El "call \_main" esta haciendo referencia a nuestro main y el "call: prontf", a nuestra funcion prontf. Por ultimo, las lineas debajo de "call: prontf" estan limpiando lo anteriormente cargado en la pila para ejecutar el programa.

## Punto 3: Vinculador

#### Ejecutar y analizar el resultado.
c) Luego de la corrección del error, impreme por consola lo que le dimos como input en el printf "La respuesta es 42".

## Punto 5: Remoción de prototipo

#### Explicar porqué funciona.
b) GCC (compilador que estoy usando) permite la declaración implícita, no tendremos su firma pero si su declaración, dado que irá a buscar esta función a la standard library y, en este caso, la encontrará. Dado que no aplica de manera estricta el estandar del 99. De igual manera nos indicara con un warning que deberiamos declarar una firma y una implementacion para nuestra función.

## Punto 6: Contratos y Módulos

#### Investigar como en su entorno de desarrollo puede generar un programa ejecutable que se base en las dos unidades de traducción (i.e., archivos fuente, archivos con extensión .c).Luego generar ese ejecutable y probarlo.
b) Para poder vincular ambos archivos .o (hello8.o y studio1.o), con el comando gcc, debemos usar:
gcc -include hello8.c studio1.c -o hello8 -std=c18

#### Responder ¿qué ocurre si eliminamos o agregamos argumentos a la invocación de prontf? Justifique.
c) En este caso, al modificar la implementación de la función prontf, no podemos definir su comportamineto, depende de nuestro microproscesador. Esto ocurre si no definimos una firma para la función.

#### Responder: ¿Qué ventaja da incluir el contrato en los clientes y en el proveedor.
d) La ventaja principal de la inclusion es que transformamos a nuestra función printf en un productor consumidor, lo que nos obliga tener que definir la firma de la función y su implementación. Así, quien la quiera utilizar tendra que atarse a como nosotros definimos la funcion y evitara problemas con los argumentos y sus tipos.

## Punto Extra

#### Investigue sobre bibliotecas. ¿Qué son? ¿Se puden distribuir? ¿Son portables? ¿Cuáles son sus ventajas y desventajas?.
Las bibliotecas estan formadas por uno o varios archivos escritos en un cierto lenguaje de programación determinado, con la finalidad de proporcionar funcionalidades extras al lenguaje (o solamente mejorar las existentes).

##### Ventajas:
- Código reutilizable.
- Mayor mantenibilidad, el código esta abstraido.
- Velocidad de desarrollo de software, funcionalidades prerealizadas.

##### Desventajas:
- Tenemos que aprender a usar sus funcionalidades.
- Nos atamos al uso de sus funcionalidades y podria generar, en algun futuro, dificultad para dejarla.
- Un cambio en la implimentación de alguna función, podria romper todo algun archivo que este haciendo uso de la biblioteca.