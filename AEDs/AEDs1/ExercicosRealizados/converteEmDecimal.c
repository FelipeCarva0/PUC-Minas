#include <stdio.h>

int dec(int bin) {
    if (bin == 0) {
        return 0;
    } else {
        int ultimoDigito = bin % 10;
        int restoBinario = bin / 10;
        return ultimoDigito + 2 * dec(restoBinario);
    }
}

int main() {
    int numeroBinario;
    //printf("Digite um número binário: ");
    scanf("%d", &numeroBinario);
    int resultado = dec(numeroBinario);
    printf("%d", resultado);
    return 0;
}
