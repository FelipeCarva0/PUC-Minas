#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *leString(char vetor[]);
void imprimiStrings( char *vetor[], int n);
char *maiorString(char *vetor[], int n);
char *maiorStringlex(char *vetor[], int n);

int main(){
    int n;
    char str[100];
    char maiorstr[100];
    char maiorstrle[100];
    //printf("Digite quantos elementos voce quer armazenar: ");
    scanf("%d", &n);
    fflush(stdin);
    char *vetor[n];
    for(int i=0;i<n;i++){
    vetor[i]=leString(str);
    }
    //imprimiStrings(vetor, n);
   // maiorstr= maiorString(vetor, n);
    strcpy(maiorstr, maiorString(vetor, n));
    printf("%s", maiorstr);
    strcpy(maiorstrle, maiorStringlex(vetor, n));
    printf("%s", maiorstrle);
    fflush(stdin);
}

char *leString(char vetor[]){
    vetor = (char *)malloc(100 * sizeof(char)); //Por que se eu não alocar dinamicamente o vetor aqui, meu codigo vai imprimir somente o ultimo array digitado?
    //printf("\nDigite o nome do elemento: ");
    fgets(vetor, 100, stdin);
    fflush(stdin);

    return vetor;
}

void imprimiStrings( char *vetor[], int n){
    for(int i=0;i<n;i++){
        printf("%s", vetor[i]);
    }

}
char *maiorString(char *vetor[], int n){
    int i=0;
    char *maiorVetor=(char *)malloc(100 * sizeof(char));
    strcpy(maiorVetor,vetor[i]);
    for( i=0;i<n;i++){
       if(strlen(vetor[i])>strlen(maiorVetor)){
        strcpy(maiorVetor,vetor[i]);

       }else{
       }
    }
    return maiorVetor;

}
char *maiorStringlex(char *vetor[], int n){
    char *maiorString = (char *) malloc(100*sizeof(char));
    int i=0;
    maiorString=vetor[i];
    for(i=0; i<n;i++){

        int result = strcmp(vetor[i],maiorString);
        if(result>0){
            maiorString=vetor[i];
        }

    }
    return maiorString;

}


