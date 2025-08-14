#include<stdio.h>
#include<stdlib.h>
void imprimiString(char *vet);
void imprimiVetor(int *vet, int n);
int main(){
    char str[100];
    int n, *array;
    printf("Digite a string: ");
    fgets(str,sizeof(str),stdin);
    imprimiString(str);
    printf("\nDigite o tamanho vetor: ");
    scanf("%d", &n);
    array=(int*)malloc(n*sizeof(int));
    printf("\nPreencha o vetor: \n");
    for(int i=0; i<n;i++){
        scanf("%d", &array[i]);
    }
    imprimiVetor(array, n);
    free(array);
}
void imprimiString(char *vet){
int i=0;
 if(vet[i]=='\0'){
    return;
 }else{
    printf("%c", vet[i]);
    imprimiString(&vet[i+1]);
    return;
 }
}
void imprimiVetor(int *vet, int n){
    if(n==0){
        return;
    }else{
    printf("%d", *vet);
    imprimiVetor(vet+1, n-1);
    return;
    }
}

