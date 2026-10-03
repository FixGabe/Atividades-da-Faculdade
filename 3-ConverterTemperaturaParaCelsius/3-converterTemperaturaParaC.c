#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float converterTemperaturaParaC(float fahrenheit) {
    float celsius = (fahrenheit - 32) / 1.8;
    return celsius;
}

int main() {
    float fahrenheit, celsius;

    printf("Escreva a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = converterTemperaturaParaC(fahrenheit);

    printf("A temperatura em Fahrenheit %.2f em celsius fica %.2f\n", fahrenheit, celsius);
    
    return 0;
}