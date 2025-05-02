#include <stdio.h>
#include <string.h> //função para utilizar a biblioteca string

#define MAX 100 // define a quantidade de produtos 

struct Produto { // definição da struct Produto
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
};


void CadastrarProduto(struct Produto produtos[], int *n) { // função para cadastrar produtos
    if (*n >= MAX) {
        printf("Limite de produtos atingido.\n");
        return;
    }

    printf("\nCadastro do produto %d:\n", *n + 1);

    printf("Nome: ");
    getchar(); // função para limpar o buffer
    fgets(produtos[*n].nome, sizeof(produtos[*n].nome), stdin);
    produtos[*n].nome[strcspn(produtos[*n].nome, "\n")] = '\0'; // função para remover '\n'

    printf("Codigo do produto: ");
    scanf("%d", &produtos[*n].codigo);

    printf("Quantidade: ");
    scanf("%d", &produtos[*n].quantidade);

    printf("Preco: ");
    scanf("%f", &produtos[*n].preco);

    (*n)++; // função para incrementar o contador de produtos
    printf("Produto cadastrado com sucesso!\n");
}


void BuscarProduto(struct Produto produtos[], int n) { // Função para buscar produto por código
    int codigo;
    printf("Digite o codigo do produto para busca: ");
    scanf("%d", &codigo);

    for (int i = 0; i < n; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado:\n");
            printf("Nome: %s\n", produtos[i].nome);
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Quantidade: %d\n", produtos[i].quantidade);
            printf("Preco: R$ %.2f\n", produtos[i].preco);
            return;
        }
    }
    printf("O produto com codigo %d nao foi encontrado.\n", codigo);
}


void ListarProdutos(struct Produto produtos[], int n) { // Função para listar todos os produtos
    printf("\nLista de Produtos:\n");
    for (int i = 0; i < n; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preco: R$ %.2f\n", produtos[i].preco);
        printf("------------------------\n");
    }
}

int main() { //função principal
    struct Produto produtos[MAX];
    int n = 0, opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Buscar produto por codigo\n");
        printf("3 - Listar todos os produtos\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                CadastrarProduto(produtos, &n);
                break;
            case 2:
                BuscarProduto(produtos, n);
                break;
            case 3:
                ListarProdutos(produtos, n);
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
