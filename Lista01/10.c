#include <stdio.h>


int fibonacci(int n) {// função recursiva para calcular o n-ésimo número de Fibonacci
    if (n <= 1) {
        return n;  // base da recursão: fibonacci(0) = 0 e fibonacci(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Chamada recursiva
    }
}

int main() { // função principal 
    int n;

    printf("Digite o valor de n para calcular o n-esimo numero de Fibonacci: "); // interação com o usuário para solicitar o n-ésimo número que ele deseja
    scanf("%d", &n);

    int resultado = fibonacci(n);
    printf("O %d-esimo numero de Fibonacci e: %d\n", n, resultado);

    return 0;
}