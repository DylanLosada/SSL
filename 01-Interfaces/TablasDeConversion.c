#include "./headers/TablasDeConversion.h"
#include "./headers/Conversion.h"

int main(void)
{
    PrintTablas();
    return 0;
}

void PrintTablas()
{
    PrintTablaCelsius();
    PrintTablaFahrenheit();
}

void PrintFilas(char *nombreTabla, double FuncionDeConversion(double))
{
    const double UPPER = 300.0;

    puts("/////////////////////////////////////////////////\n");
    printf("\t  TABLA DE CONVERSION DE %s\n", nombreTabla);
    for (double tempToConvert = 0.0; tempToConvert <= UPPER; tempToConvert += 20.0)
    {
        double temperaturaConvertida = FuncionDeConversion(tempToConvert);
        PrintFila(tempToConvert, temperaturaConvertida);
    }
    puts("/////////////////////////////////////////////////");
    puts("\n\n");
}

void PrintFila(double temperatura, double temperaturaCovertida)
{
    printf("|\t%3.f\t\t\t\t%2.1f\t|\n", temperatura, temperaturaCovertida);
}

void PrintTablaCelsius()
{
    PrintFilas("C a F", CelsuiusToFahrenheit);
}

void PrintTablaFahrenheit()
{
    PrintFilas("F a C", FahrenheitToCelsuius);
}