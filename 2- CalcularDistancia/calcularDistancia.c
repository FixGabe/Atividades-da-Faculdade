#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcularDistancia(float x2, float x1, float y2, float y1){
    float termoX = pow(x2 - x1, 2);
    float termoY = pow(y2 - y1, 2);
    float final = termoX + termoY;
    float desgraca = sqrt(final);

    return desgraca;
}
int main(){
    float x1, x2, y1, y2;

    printf("Digite o x2:");
    scanf("%f", &x2);
    printf("Digite o x1:");
    scanf("%f", &x1);
    printf("Digite o y2:");
    scanf("%f", &y2);
    printf("Digite o y1:");
    scanf("%f", &y1);

    float distancia = calcularDistancia(x2, x1, y2, y1);

    printf("\nA distancia e %.2f", distancia);
    
    return 0;
}