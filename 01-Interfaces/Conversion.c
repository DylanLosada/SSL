#include "./headers/Conversion.h"

double CelsuiusToFahrenheit(double temperaturaAConvertir)
{
    return (temperaturaAConvertir * 9 / 5) + 32;
}

double FahrenheitToCelsuius(double temperaturaAConvertir)
{
    return (5.0 / 9.0) * (temperaturaAConvertir - 32);
}