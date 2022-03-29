#include <stdio.h>
#include <string.h>

int main() {
    FILE* output = fopen("output.txt", "w+b");
    char* message = "Hellow, World!";
    fwrite(message, 1, strlen(message), output);
    fclose(output);
    return 0;
}
