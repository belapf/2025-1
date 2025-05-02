#include <stdio.h>


int potencia(int base, int expoente) {// Função que calcula base x expoente usando multiplicações
    int resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado *= base; // faço para multiplicar a base por ela mesma
    }

    return resultado;
}


int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    
    if (expoente < 0) {// condição para verificar se o expoente é negativo
        printf("Essa conta nao pode ser feita\n");
    } else {
        int resultado = potencia(base, expoente);
        printf("%d elevado a %d e igual a %d\n", base, expoente, resultado); // exibe o resultado da conta 
    }

    return 0;
}
