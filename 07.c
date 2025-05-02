#include <stdio.h>
#include <string.h> //biblioteca para usar strings 

#define MAX 100 // função para definir o número máximo de alunos


struct Aluno {// Definindo a struct Aluno
    char nome[50];
    int matricula;
    float media;
};

int main() { // função principal 
    struct Aluno alunos[MAX];
    int n;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    getchar(); 

   
    for (int i = 0; i < n; i++) { // laço for para fazer o cadastro dos alunos
        printf("\nCadastro do aluno %d:\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';// Remove o '\n' do final da string

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Media: ");
        scanf("%f", &alunos[i].media);

        getchar(); // função para limpar o buffer após de ler o float
    }

    
    printf("\nAlunos aprovados (media >= 7.0):\n");// função para exibir dos alunos aprovados, media adotada = 7
    for (int i = 0; i < n; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Nome: %s | Matricula: %d | Media: %.2f\n",
                   alunos[i].nome, alunos[i].matricula, alunos[i].media);
        }
    }

    return 0;
}
