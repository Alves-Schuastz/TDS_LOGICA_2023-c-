#include <stdio.h>
#define tamanho 70
#define NOMES 5

int maiuscula(char *nome){

    if (nome[0] >= 'A' && nome[0] <= 'Z'){
        printf("\nesta maiuscula");
    }
    else{
        printf("\nesta errada!, vamos corrigir");

       nome[0]= nome[0]-32;
       printf("\n%s", nome);
    }
}

int verificar(char *nome) {
    int i = 0;

    while (nome[i] != '\0') {
        if (!( (nome[i] >= 'A' && nome[i] <= 'Z') || (nome[i] >= 'a' && nome[i] <= 'z') || nome[i] == ' '))  {
            printf("\nO caracter '%c' está incorreto", nome[i]);
            return 1;
        }
        i++;
    }

    printf("\nEstá correto!");
    return 0;
}

// Função para remover espaços iniciais
void espacos(char *nome) {
    int i = 0;
    int j = 0;

    // Ignora espaços iniciais
    while (nome[i] == ' ') {
        i++;
    }

    // Copia os caracteres sem remover espaços iniciais
    while (nome[i] != '\0') {
        nome[j] = nome[i];
        i++;
        j++;
    }
    nome[j] = '\0';
}

void adicionarNome(char *nome) {
    printf("\nInsira um nome a ser adicionado: ");
    scanf(" %[^\n]", nome);

    maiuscula(nome);
    while (verificar(nome)) {
        printf("\nInsira um nome válido: ");
        scanf(" %[^\n]", nome);
    }

    espacos(nome);
}

int main() {
    char lista[NOMES][tamanho];

    printf("Digite 5 nomes:\n");

    for (int i = 0; i < NOMES; i++) {
        printf("\nPara o nome %d:\n", i + 1);
        adicionarNome(lista[0]);
    }

    printf("\nLista de Nomes:\n");
    for (int i = 0; i < NOMES; i++) {
        printf("Nome %d: %s\n", i + 1, lista[i]);
    }

    return 0;
}
