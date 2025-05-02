#include <stdio.h>
#include <stdbool.h> // biblioteca para usar bool, true, false


bool primo(int n) { // Função que verifica se um número é primo
    if (n < 2) {
        return false; // 0 e 1 não são primos
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // se tiver algum divisor, então não é primo
        }
    }
    return true; // se passou por todo o laço sem divisores, então é primo
}

int main() { // função principal 

    int inicio, fim;  // função para ler os dois números que o usuário digitar 
    printf("Digite o primeiro numero: ");
    scanf("%d", &inicio);
    printf("Digite o segundo numero: ");
    scanf("%d", &fim);

    
    if (inicio > fim) {// laço que garante que inicio seja menor que fim
        int temporaria = inicio;
        inicio = fim;
        fim = temporaria;
    }

    printf("Numeros primos entre %d e %d:\n", inicio, fim);

   
    for (int i = inicio; i <= fim; i++) { // laço para listar todos os primos no intervalo
        if (primo(i)) {
            printf("%d ", i); // imprime os números primos encontrados
        }
    }

    printf("\n");
    return 0;
}
