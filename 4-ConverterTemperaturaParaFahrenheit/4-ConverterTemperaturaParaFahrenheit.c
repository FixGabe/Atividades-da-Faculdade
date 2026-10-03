#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float converterTemperaturaParaF(float celsius) {
    float fahrenheit = (1.8 * celsius) + 32;
    return fahrenheit;
}

int main() {
    float fahrenheit, celsius;

    printf("Escreva a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = converterTemperaturaParaF(celsius);

    printf("A temperatura em Celsius %.2f em Fahrenheit fica %.2f\n", celsius, fahrenheit);
    
    return 0;
}