#include <stdio.h>

#include <stdlib.h>
#include <ctype.h>
int contaCaractere(char *frase, char c){ //iterativa

    int count=0,i=0;

    while(frase[i] != '\0'){
        if(toupper(frase[i])== toupper(c)){
            count++;
        }
        i++;
    }

    return count;

}


int contaCaractere2(char *frase, char c){ //RECURSIVA
    int count, i=0;
    //passo base
    if(*frase =='\0'){
        return 0;
    }
    // comparacao frase com caractere
    count = (toupper(frase[i])== toupper(c))?1:0;
    //passo recursivo
    return count + contaCaractere2(frase+1,c);
}

int main()
{
    char frase[50],caractere;
    printf("Digite a frase:");
    fgets(frase,sizeof(frase),stdin);
    printf("Digite o caractere:");
    scanf(" %c",&caractere);
    int totalChar = contaCaractere2(frase,caractere);
    printf("O total e: %d",totalChar);


    /*int tam =10;
    int *vet;
    vet = preencherVetor2(tam);
    preencherVetor(vet,tam);
    imprimirVetor(vet,tam);
    somaVetor(vet,tam);
    maiorElemento(vet,tam);
    nomeIterativo(nome);
*/

}
