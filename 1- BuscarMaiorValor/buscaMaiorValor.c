#include <stdio.h>
#include <stdlib.h>

int buscaMaiorValor(int valor1, int valor2){
    if(valor1 < valor2){
        return valor2;   
    } else {
        return valor1;
    }
}
int main(){
    int valor1, valor2;
    system("cls");
    
    printf("Escreva o primeiro valor inteiro:");
    scanf("%d", &valor1);
    printf("Escreva o segundo valor inteiro:");
    scanf("%d", &valor2);
    
    int maior = buscaMaiorValor(valor1, valor2);
    
    printf("\nEsse acaba sendo o maior valor %d", maior);
    return 0;
}