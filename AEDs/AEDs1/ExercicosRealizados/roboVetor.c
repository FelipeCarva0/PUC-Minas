#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    //Lê as soldas
    int soldas[2 * n];
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &soldas[i]);
    }
    // Vetor para marcar quais pontos de solda foram cobertos
    int cobertos[n + 1];
    for (int i = 0; i <= n; i++) {
        cobertos[i] = 0;
    }
    // Contador de soldas necessárias
    int count = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (soldas[i] >= 1 && soldas[i] <= n) {
            if (cobertos[soldas[i]] == 0) { // Se ainda não foi coberto
                cobertos[soldas[i]] = 1; // Marca como coberto
                count++;
            }
        }
        // Se já cobrimos todos os N pontos, podemos parar
        if (count == n) {
            printf("%d\n", i + 1);
            return 0;

    }
     printf("0\n");
    return 0;
}

