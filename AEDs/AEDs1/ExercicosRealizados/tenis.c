
#include <stdio.h>

int main() {
    char resultado;
    int vitorias = 0;

    // Leitura dos resultados dos 6 jogos

        scanf(" %c", &resultado);
        if (resultado == 'V') {
            vitorias++;
        }
        scanf(" %c", &resultado);
        if (resultado == 'V') {
            vitorias++;
        }
        scanf(" %c", &resultado);
        if (resultado == 'V') {
            vitorias++;
        }
        scanf(" %c", &resultado);
        if (resultado == 'V') {
            vitorias++;
        }
        scanf(" %c", &resultado);
        if (resultado == 'V') {
            vitorias++;
        }
        scanf(" %c", &resultado);
        if (resultado == 'V') {
            vitorias++;
        }
    // Determinação do grupo
    if (vitorias >= 5) {
        printf("1\n"); // Grupo 1
    } else if (vitorias >= 3) {
        printf("2\n"); // Grupo 2
    } else if (vitorias >= 1) {
        printf("3\n"); // Grupo 3
    } else {
        printf("-1\n"); // Não faz parte de nenhum grupo
    }

    return 0;
}

