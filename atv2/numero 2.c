#include <stdio.h>
#include <stdlib.h>

// Função de comparação para usar com a função qsort
int comparar(const int *a, const int *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    FILE *arquivo;
    int *valores;
    int tamanho = 0;

    // Abrir o arquivo para leitura
    arquivo = fopen("valores.txt", "r");

    //verificação se o arquivo existe
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Contar quantos valores existem no arquivo
    while (fscanf(arquivo, "%*d") != EOF) {
        tamanho++;
    }

    // Voltar ao início do arquivo
    fseek(arquivo, 0, SEEK_SET);

    // Alocar memória para armazenar os valores
    valores = (int *)malloc(tamanho * sizeof(int));

    if (valores == NULL) {
        printf("Erro ao alocar memória.\n");
        fclose(arquivo);
        return 1;
    }

    // Ler os valores do arquivo
    for (int i = 0; i < tamanho; i++) {
        fscanf(arquivo, "%d", &valores[i]);
    }

    // Fechar o arquivo
    fclose(arquivo);

    // Ordenar os valores usando a função qsort
    qsort(valores, tamanho, sizeof(int), comparar);

    // Exibir os valores ordenados
    printf("Valores ordenados em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(valores);

    return 0;
}
