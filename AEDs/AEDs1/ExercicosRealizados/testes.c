#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *leString(char vetor[]);
void imprimiStrings(char *vetor[], int n);

int main() {
    int n;
    printf("Digite quantos elementos voce quer armazenar: ");
    scanf("%d", &n);
    getchar();  // Consumir o caractere de nova linha deixado pelo scanf

    // Declarar um array de ponteiros para string
    char *vetor[n];

    // Preencher o vetor com as strings
    for (int i = 0; i < n; i++) {
        vetor[i] = leString(*vetor);  // Chama a função para ler a string
        printf("%s\n", vetor[i]);   // Imprime a string na posição i
    }

    // Imprimir todas as strings armazenadas no vetor
    imprimiStrings(vetor, n);

    return 0;
}

char *leString(char vetor[]) {
    // Alocar dinamicamente para a string
    vetor = (char *)malloc(100 * sizeof(char));

    if (vetor == NULL) {
        printf("Erro de alocação de memória!\n");
        exit(1);  // Encerra o programa se não conseguir alocar memória
    }

    printf("\nDigite o nome do elemento: ");
    fgets(vetor, 100, stdin);
    //fflush(stdin);
    // Remove o caractere de nova linha '\n' se houver
   /* size_t len = strlen(vetor);
    if (len > 0 && vetor[len - 1] == '\n') {
        vetor[len - 1] = '\0';
    }*/

    return vetor;  // Retorna o ponteiro para a string
}

void imprimiStrings(char *vetor[], int n) {
    // Imprime todas as strings armazenadas no vetor
    printf("\nImprimindo todas as strings armazenadas:\n");
    for (int i = 0; i < n; i++) {
        printf("%s", vetor[i]);
    }
}

