#include <stdio.h>

#define N 3 // função para definir o tamanho das matrizes

int main() {
    int matriz01[N][N], matriz02[N][N], soma[N][N];

    
    printf("Digite os elementos da primeira matriz (3x3):\n");// função para leitura dos elementos da primeira matriz
    for (int i = 0; i < N; i++) { // laço for para percorrer todos os elementos da matriz 
        for (int j = 0; j < N; j++) {
            printf("Matriz01[%d][%d]: ", i, j);
            scanf("%d", &matriz01[i][j]); // função scanf para ler os valores informados 
        }
    }

   
    printf("\nDigite os elementos da segunda matriz (3x3):\n"); // funçaõ para leitura dos elementos da segunda matriz
    for (int i = 0; i < N; i++) { // laço for para percorrer todos os elementos da matriz 
        for (int j = 0; j < N; j++) {
            printf("Matriz02[%d][%d]: ", i, j);
            scanf("%d", &matriz02[i][j]); // função scanf para ler os valores informados 
        }
    }

    
    for (int i = 0; i < N; i++) {// laço for para somar as duas matrizes
        for (int j = 0; j < N; j++) {
            soma[i][j] = matriz01[i][j] + matriz02[i][j];
        }
    }

    
    printf("\nResultado da soma das matrizes:\n");// função para exibir o resultado
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
