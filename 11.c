#include <stdio.h>


int BuscaBinaria(int vetor[], int tamanho, int alvo) {// Função de busca binária
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) { //estrutura condicional ''enquanto'' 
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == alvo) { // estrutura condicional para verificar se o elemento foi encontrado
            return meio; // caso o elemento seja encontrado
        } else if (vetor[meio] < alvo) {
            inicio = meio + 1; // função para buscar na metade direita
        } else {
            fim = meio - 1; // função para buscar na metade esquerda
        }
    }

    return -1; // função para retornar o elemento não encontrado
}

int main() { //função principal 
    int vetor[] = {1, 2, 3, 4, 5, 6, 7}; // elementos contidos no vetor 
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); 
    int alvo;

    printf("Digite o numero a ser buscado: "); //interação com o usuário
    scanf("%d", &alvo);

    int resultado = BuscaBinaria(vetor, tamanho, alvo);

    if (resultado != -1) { //função condicional para verificar se o número foi encontrado e em qual posição
        printf("Elemento %d encontrado na posicao %d.\n", alvo, resultado);
    } else {
        printf("Elemento %d nao encontrado no vetor.\n", alvo);
    }

    return 0;
}
