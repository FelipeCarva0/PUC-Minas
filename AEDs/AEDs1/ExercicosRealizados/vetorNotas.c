#include<stdio.h>
int main(){
    int x, cont;
    float media, menor, maior, soma=0;
    //quantidade de notas
    scanf("%d", &x);
    float n[x];
    //preenche o vetor
    for(int i=0; i<x; i++){
        scanf("%f", &n[i]);
        cont++;
    }
    //faz o somatorio para usar na média
    for(int i=0; i<x; i++){
       soma=soma+n[i];
    }
    media=soma/cont; //Calcula a média
    //Faz os menores e maiores valores
            menor=n[0];
    for(int i=0; i<x; i++){
       if(n[i]<menor){
        menor=n[i];
       }
       if(n[i]>maior){
        maior=n[i];
       }
    }
    printf("%.1f %.1f %.1f", maior, menor, media);
}
