#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void imprimirMatriz(int linhas, int colunas, int matriz[linhas][colunas]){
    
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int linhas, colunas;
    srand(time(NULL));


    printf("Digite a quantidade de linhas da matriz:");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas da matriz:");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                matriz[i][j] = rand() % 101;   
            }
        }
        printf("\nMatriz gerada:\n");
        imprimirMatriz(linhas, colunas, matriz);

        return 0;
}