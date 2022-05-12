#ifndef TABLA_DE_CONVERSION_H
#define TABLA_DE_CONVERSION_H
#include <stdio.h>

void PrintTablas();
void PrintTablaCelsius();
void PrintTablaFahrenheit();
void PrintFilas(char *nombreTabla, double FuncionDeConversion(double));
void PrintFila(double temperatura, double temperaturaCovertida);

#endif /* TABLA_DE_CONVERSION_H */