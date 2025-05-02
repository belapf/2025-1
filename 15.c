#include <stdio.h>
#include <string.h> //função para usar a biblioteca de strings
#include <ctype.h> // função para usar a biblioteca de manipulação de caracteres 

#define MAX_ERROS 5 //função para limitar o número de vezes que o usuário pode errar, ou seja, sua quantidade de vidas

int main() {
    char Palavra[] = "software";  // palavra escolhida para o jogo
    int tamanho = strlen(Palavra);
    char LetrasDescobertas[tamanho];
    char letra;
    int tentativas = 0, acertos = 0;
    int i, repetiu;

    for (i = 0; i < tamanho; i++) {// função para inicializar o vetor 
        LetrasDescobertas[i] = '_';
    }

    printf("---------JOGO DA FORCA DA ISA---------\n"); 

    while (tentativas < MAX_ERROS && acertos < tamanho) { //laço de repetição enquanto
        printf("\nPalavra: ");
        for (i = 0; i < tamanho; i++) //laço for para repetir enquanto houverem vidas para o usuário 
            printf("%c ", LetrasDescobertas[i]);

        printf("\nVidas: %d", MAX_ERROS - tentativas);
        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);
        letra = tolower(letra);
       
        repetiu = 0; //função para verificar se a letra já foi descoberta
        for (i = 0; i < tamanho; i++) {
            if (LetrasDescobertas[i] == letra) {
                repetiu = 1;
                break;
            }
        }

        if (repetiu) {
            printf("Voce ja tentou essa letra, escolhe outra\n");
            continue;
        }

        int encontrou = 0;// função para verificar se a letra digitada está na palavra escolhida
        for (i = 0; i < tamanho; i++) {
            if (Palavra[i] == letra && LetrasDescobertas[i] == '_') {
                LetrasDescobertas[i] = letra;
                encontrou = 1;
                acertos++;
            }
        }

        if (!encontrou) {
            printf("Letra incorreta!\n");
            tentativas++;
        }
    }

    if (acertos == tamanho) {
        printf("\nParabens! Voce descobriu a palavra %s\n", Palavra);
    } else {
        printf("\nVoce perdeu! A palavra era: %s\n", Palavra);
    }

    return 0;
}

