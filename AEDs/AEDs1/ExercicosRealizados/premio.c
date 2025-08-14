#include<stdio.h>

int main() {
    int p, d, b, pontos;

    // Solicitar entradas
    printf("Numero de paes vendidos na semana: ");
    scanf("%d", &p);
    printf("Numero de doces vendidos na semana: ");
    scanf("%d", &d);
    printf("Numero de bolos vendidos na semana: ");
    scanf("%d", &b);

    // Calcular pontos
    pontos = p * 1 + d * 2 + b * 3;

    // Verificar o prêmio com base nos pontos
    printf("Premio: ");
    if (pontos >= 150) {
        printf("B\n");
    } else if (pontos >= 120) {
        printf("D\n");
    } else if (pontos >= 100) {
        printf("P\n");
    } else {
        printf("N\n");
    }

    return 0;
}
