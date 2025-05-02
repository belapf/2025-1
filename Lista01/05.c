#include <stdio.h>
#include <stdbool.h> // biblioteca para usar bool, true, false

#define TAM 5  // funçaõ para definir o tamanho do vetor

int main() {
    int vetor1[TAM], vetor2[TAM];
    int comuns[TAM]; // vetor para armazenar os elementos comuns
    int QuantidadeComuns = 0;

    printf("Digite %d numeros para o primeiro vetor:\n", TAM); // interação com o usuário
    for (int i = 0; i < TAM; i++) { // laço para percorrer o tamanho do vetor 
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite %d numeros para o segundo vetor:\n", TAM); // segunda interação com o usuário
    for (int i = 0; i < TAM; i++) { // laço para percorrer o tamanho do vetor 
        printf("vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

   
    for (int i = 0; i < TAM; i++) {  // laço for para percorrer o vetor e verificar os elementos comuns
        for (int j = 0; j < TAM; j++) {
            if (vetor1[i] == vetor2[j]) {
                bool existe = false;  // função bool para verificar se já foi adicionado ao vetor de comuns
                for (int k = 0; k < QuantidadeComuns; k++) {
                    if (comuns[k] == vetor1[i]) {
                        existe = true;
                        break;
                    }
                }

                if (!existe) {
                    comuns[QuantidadeComuns] = vetor1[i];
                    QuantidadeComuns++;
                }
            }
        }
    }

    
    printf("\nElementos comuns entre os vetores:\n");// função para exibir o resultado
    if (QuantidadeComuns == 0) { // função condicional para verificar se há elementos em comum encontrados
        printf("Nenhum elemento comum encontrado.\n");
    } else {
        for (int i = 0; i < QuantidadeComuns; i++) {
            printf("%d ", comuns[i]);
        }
        printf("\n");
    }

    return 0;
}