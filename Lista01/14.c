#include <stdio.h>
#include <string.h> //função para usar a biblioteca de strings
#include <ctype.h> // função para usar a biblioteca de manipulação de caracteres 


void CifraCesar(char mensagem[], int deslocamento) {// Função para criptografar uma string com a Cifra de César
    for (int i = 0; mensagem[i] != '\0'; i++) { //laço para percorrer todas as letras da mensagem
        char caractere = mensagem[i];

        if (isupper(caractere)) { //estrutura condicional para o caso da letra ser maiúscula
            mensagem[i] = ((caractere - 'A' + deslocamento) % 26) + 'A';
        }
        else if (islower(caractere)) {// estrutura condicional para o caso da letra ser minúscula
            mensagem[i] = ((caractere - 'a' + deslocamento) % 26) + 'a';
        }
    }
}

int main() {//função principal
    char texto[100];
    int deslocamento;

    printf("Digite a mensagem que deseja criptografar: "); //interação com o usuário
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0'; // função para remover o '\n'

    printf("Digite o deslocamento da mensagem ");
    scanf("%d", &deslocamento);

    CifraCesar(texto, deslocamento);

    printf("Mensagem criptografada: %s\n", texto);

    return 0;
}
