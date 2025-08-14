#include<stdio.h>
int main(){
    int n, soma=0, contneg;
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }
    for(int i=0; i<n; i++){
        if(vetor[i]<0){
          contneg++;
        }
        if(vetor[i]>=0){
            soma=soma+vetor[i];
        }
    }
    printf("%d %d", contneg, soma);
}
