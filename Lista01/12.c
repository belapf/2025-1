#include <stdio.h>
#include <string.h> //função para utilizar a biblioteca string
#include <ctype.h> //função para utilizar a biblioteca de manipulação de caracteres


int ehPalindromo(char str[]) { // Função que verifica se uma string é palíndromo
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        while (inicio < fim && !isalnum(str[inicio])) inicio++; // Ignora espaços e transforma em minúsculas
        while (inicio < fim && !isalnum(str[fim])) fim--;

        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0; // Não é palíndromo
        }
        inicio++;
        fim--;
    }

    return 1; // É palíndromo
}

int main() { //função principal
    char texto[100];

    printf("Digite uma palavra:"); //interação com o usuário
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0'; // Remove o '\n'

    if (ehPalindromo(texto)) { // estrutura condicional para verificar e exibir se é palíndromo
        printf("E palindromo!\n");
    } else {
        printf("Nao e um palindromo.\n");
    }

    return 0;
}
