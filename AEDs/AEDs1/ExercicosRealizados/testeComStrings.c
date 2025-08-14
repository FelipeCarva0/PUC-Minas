#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nome[10], str[10], *letra;
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    //Remove o \n no final
    if (nome[strlen(nome) - 1] == '\n') {
        nome[strlen(nome) - 1] = '\0';
    }


    printf("\nTamanho: %d", strlen(nome));
    printf("\nDigite outra string: ");
    fgets(str, sizeof(str), stdin);
    strcat(nome, str);
    printf("\n %s", strcat(nome, str));
    printf("%s", nome);
    printf("%d", strlen(nome));
    letra=strchr(nome, 'a');
    printf("\n%c", *letra);
}
