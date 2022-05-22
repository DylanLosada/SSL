#include "./headers/ConversionTest.h"

int main()
{
    const double epsilon_temperatura = 0.003;
    TestCelsuiusToFahrenheit(260.0, epsilon_temperatura);
    TestFahrenheitToCelsuius(40.0, epsilon_temperatura);
    return 0;
}

void TestCelsuiusToFahrenheit(double temperaturaAProbar, double epsilon_temperatura)
{
    // TODO deberia ser con assert()
    printf("Celsius debe ser menor o igual a: %f", CelsuiusToFahrenheit(temperaturaAProbar));
    assert(abs(500.00000000023 - CelsuiusToFahrenheit(temperaturaAProbar)) < epsilon_temperatura);
}

void TestFahrenheitToCelsuius(double temperaturaAProbar, double epsilon_temperatura)
{
    // TODO deberia ser con assert()
    printf("\n\nFahrenheit debe ser menor o igual a: %f", FahrenheitToCelsuius(temperaturaAProbar));
    assert(abs(4.409099909909909909000 - FahrenheitToCelsuius(temperaturaAProbar)) < epsilon_temperatura);
}