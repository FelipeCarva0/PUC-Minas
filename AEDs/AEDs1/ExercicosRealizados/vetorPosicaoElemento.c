#include<stdio.h>
int main(){
    int x, maior, posicao;
    scanf("%d", &x);
    int n[x];
    //preenche o vetor
    for(int i=0; i<x; i++){
        scanf("%d", &n[i]);
    }
    //maior=n[0];
    for(int i=0; i<x; i++){
       if(n[i]>=maior){

        maior=n[i];
        posicao=i;
       }
    }
    printf("%d %d", maior,posicao);
}

