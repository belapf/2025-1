#include <stdio.h>


int inverso(int n) {// Função para inverter os dígitos de um número inteiro positivo
    int invertido = 0;

    while (n > 0) {
        int digito = n % 10;           // pega o último dígito
        invertido = invertido * 10 + digito; // adiciona ao número invertido
        n = n / 10;                    // remove o último dígito
    }

    return invertido;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) { //Laço para verificar que o numero invertido seja positivo
        printf("Nao e possivel inverter esse numero\n");
    } else {
        int resultado = inverso(numero);
        printf("Numero invertido: %d\n", resultado);
    }

    return 0;
}
