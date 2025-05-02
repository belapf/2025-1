#include <stdio.h>

int main() {
    int numeros[10];
    int contado[10] = {0}; // contador para marcar se o número já foi contado

   
    printf("Digite 10 numeros:\n"); // laço para fazer a leitura dos 10 números
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nOcorrencia de cada numero distinto:\n");

    
    for (int i = 0; i < 10; i++) {// laço para fazer a contagem das ocorrências
        if (contado[i]) {
            continue; // função para verificar se já foi contado antes
        }

        int contador = 1;

        for (int j = i + 1; j < 10; j++) {
            if (numeros[i] == numeros[j]) {
                contador++;
                contado[j] = 1; // função para marcar como contado
            }
        }

        printf("%d aparece %d vezes\n", numeros[i], contador);
    }

    return 0;
}
