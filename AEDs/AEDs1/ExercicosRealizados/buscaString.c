#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int buscaString(char *str, char *str2);
char *leString();
void imprimiStrings(char *vetor[], int n);

int main(){
    int n, ocor=0;
    char str2[50];
   // printf("Quer ler quantas strings? ");
    scanf("%d", &n);
    getchar();

    //printf("Qual palavra voce busca?");
    fgets(str2,50, stdin);
    str2[strcspn(str2, "\n")] = '\0';
    for (int i = 0; str2[i]; i++) {
        str2[i] = toupper(str2[i]);
    }

    char **array=(char**)malloc(n*sizeof(char*));
    for(int i=0; i<n;i++){
        array[i]=leString();
    }
   // imprimiStrings(array, n);
    for(int i=0; i<n;i++){
       ocor= ocor + buscaString(array[i],str2);

    }
    printf("%d", ocor);

   // printf("%c",strstr(array[0], str2));

}
char *leString(){
    char *str=(char*)malloc(50*sizeof(char));
    fgets(str, 50, stdin);
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    return str;

}
void imprimiStrings(char *vetor[], int n) {
    // Imprime todas as strings armazenadas no vetor
    printf("\nImprimindo todas as strings armazenadas:\n");
    for (int i = 0; i < n; i++) {
        printf("%s", vetor[i]);
    }
}
int buscaString(char *str, char *str2){
int    cont=0;
if(strstr(str, str2)!=NULL){
    cont=cont+1;
}
    return cont;
}
