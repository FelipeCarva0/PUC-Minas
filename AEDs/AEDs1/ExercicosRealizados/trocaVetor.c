#include<stdio.h>
int main(){
    int aux;
    int n[20];
//Dá valor para cada posição do vetor
    for(int i=0; i<20; i++){
        //printf("Digite os valores da posição do array ");
        scanf("%d", &n[i]);
    }
    //Troca os valores do array
    for(int i=0; i<10; i++){
        aux=n[19-i];
        n[19-i]=n[i];
        n[i]=aux;
    }
    //Mostra os valores trocados
    for(int i=0; i<20; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

}
