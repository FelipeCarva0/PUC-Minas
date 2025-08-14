#include<stdio.h>
int main(){
    float nota, media, soma=0;
    int i=0;
    while(nota>=0){
        soma=soma+nota;
        printf("Digite a nota: ");
        scanf("%f", &nota);
        i=i+1;
    }
    media=soma/(i-1);
    printf("A media das notas e: %f", media);


}
