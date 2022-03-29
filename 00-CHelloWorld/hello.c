/* Qué: 00-CHelloWorld
 * Realizar un programa con salida en un archivo de texto
 * Quiénes: Dylan Losada
 * Cuando: 29/03/2022
 */

#include <stdio.h>
#include <string.h>

int main() {
    FILE* output = fopen("output.txt", "w+b");
    char* message = "Hellow, World!";
    fwrite(message, 1, strlen(message), output);
    fclose(output);
    return 0;
}
