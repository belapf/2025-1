#include <stdio.h>
#include <string.h> //função para utilizar a biblioteca string

#define MAX 100 //define o tamanho máximo para contatos


struct Contato {// estrutura para representar um contato
    char nome[50];
    char telefone[20];
    char email[50];
};


void AdicionarContato(struct Contato contatos[], int *n) {// função para adicionar um novo contato
    if (*n >= MAX) {
        printf("Agenda cheia.\n");
        return;
    }

    printf("\nAdicionando contato %d:\n", *n + 1);

    getchar(); //função para limpar o buffer
    printf("Nome: ");
    fgets(contatos[*n].nome, sizeof(contatos[*n].nome), stdin);
    contatos[*n].nome[strcspn(contatos[*n].nome, "\n")] = '\0';

    printf("Telefone: ");
    fgets(contatos[*n].telefone, sizeof(contatos[*n].telefone), stdin);
    contatos[*n].telefone[strcspn(contatos[*n].telefone, "\n")] = '\0';

    printf("Email: ");
    fgets(contatos[*n].email, sizeof(contatos[*n].email), stdin);
    contatos[*n].email[strcspn(contatos[*n].email, "\n")] = '\0';

    (*n)++; 
    printf("Contato adicionado com sucesso!\n");
}


void BuscarContato(struct Contato contatos[], int n) {// função para buscar contato por nome
    char NomeBusca[50];
    int encontrado = 0;

    getchar(); // função para limpar o buffer
    printf("Digite o nome do contato que deseja buscar: "); //interação com o usuário
    fgets(NomeBusca, sizeof(NomeBusca), stdin);
    NomeBusca[strcspn(NomeBusca, "\n")] = '\0';

    for (int i = 0; i < n; i++) { //laço para percorrer todos os contatos enquanto faz a busca
        if (strcmp(contatos[i].nome, NomeBusca) == 0) {
            printf("\nContato encontrado:\n");
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Email: %s\n", contatos[i].email);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {//estrutura condicional caso o contato não seja encontrado
        printf("Contato \"%s\" nao foi encontrado.\n", NomeBusca);
    }
}


void ListarContatos(struct Contato contatos[], int n) {// Função para exibir todos os contatos
    if (n == 0) {
        printf("Nenhum contato cadastrado.\n");
        return;
    }

    printf("\nLista de contatos:\n");
    for (int i = 0; i < n; i++) {//laço para percorrer e listar todos os contatos registrados pelo usuário
        printf("\nContato %d:\n", i + 1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Email: %s\n", contatos[i].email);
    }
}

int main() { //função principal
    struct Contato contatos[MAX];
    int n = 0, opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Adicionar contato\n");
        printf("2 - Buscar contato por nome\n");
        printf("3 - Listar todos os contatos\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                AdicionarContato(contatos, &n);
                break;
            case 2:
                BuscarContato(contatos, n);
                break;
            case 3:
                ListarContatos(contatos, n);
                break;
            case 4:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
