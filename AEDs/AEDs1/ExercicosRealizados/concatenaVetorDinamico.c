#include<stdio.h>
#include<stdlib.h>
void preencheVetor(int *v, int tam);

int main(){
    int *vetorA, *vetorB, *vetorC, tam1, tam2, tam3;
    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tam1);
    vetorA=(int *)malloc(tam1*sizeof(int));
    preencheVetor(vetorA,tam1);
    printf("\nDigite o tamanho do vetor B: ");
    scanf("%d", &tam2);
    vetorB=(int *)malloc(tam2*sizeof(int));
    preencheVetor(vetorB,tam2);
    tam3=tam1+tam2;
    vetorC=(int *)malloc(tam3*sizeof(int));

    for(int i=0;i<tam1;i++){
        vetorC[i]=vetorA[i];
    }

    for(int i=0;i<tam2;i++){
        vetorC[i+tam1]=vetorB[i];
    }
    for(int i=0;i<tam3;i++){
     printf("%d ", vetorC[i]);
    }
    free(vetorA);
    free(vetorB);


}


void preencheVetor(int *v, int tam){
        printf("Prencha o vetor de tamanho %d\n", tam);
    for(int i=0;i<tam;i++){
        scanf("%d", &v[i]);
    }
}
