#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Lê o valor de N

    int soldas[2 * N];
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &soldas[i]); // Lê as soldas
    }

    int cobertos[N + 1]; // Vetor para marcar quais pontos de solda foram cobertos
    for (int i = 0; i <= N; i++) {
        cobertos[i] = 0; // Inicializa com 0
    }

    int count = 0; // Contador de soldas necessárias
    for (int i = 0; i < 2 * N; i++) {
        if (soldas[i] >= 1 && soldas[i] <= N) {
            if (cobertos[soldas[i]] == 0) { // Se ainda não foi coberto
                cobertos[soldas[i]] = 1; // Marca como coberto
                count++;
            }
        }

        // Se já cobrimos todos os N pontos, podemos parar
        if (count == N) {
            printf("%d\n", i + 1); // Retorna o número de soldas necessárias
            return 0; // Finaliza o programa
        }
    }

    // Se não cobrimos todos os pontos de solda
    printf("0\n");
    return 0;
}
