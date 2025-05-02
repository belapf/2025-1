#include <stdio.h>

#define TAM 4 // função para definir o tamanho da matrize

int main() {
    int matriz[TAM][TAM];
    int SomaDiagonal = 0; // função para somar os elementos da diagonal da matriz 

    
    printf("Digite os elementos da matriz 4x4:\n");// função para fazer a leitura da matriz
    for (int i = 0; i < TAM; i++) { // laço for para percorrer todos os elementos da matriz 
        for (int j = 0; j < TAM; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for (int i = 0; i < TAM; i++) {// função para fazer a soma da diagonal principal
        SomaDiagonal += matriz[i][i];
    }

    
    printf("\nSoma da diagonal principal: %d\n", SomaDiagonal);// função para exibir a soma

    return 0;
}
