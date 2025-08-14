#include<stdio.h>
int main(){
    int idade=12, altura=7;
    int *ponteiro= &idade; //Ponteiro Sempre recebe endereço de uma váriavel &
    int **ptr;
    *ptr =  ponteiro;
    printf("%d\n", idade);      //Mostra o conteúdo de idade
    printf("%p\n", &idade);     //Mostra o endereço de idade
    printf("%d\n", *ponteiro);  //Mostra o conteúdo apontado por ponteiro(idade)
    printf("%p\n", ponteiro);   //Mostra o endereço do conteúdo que ponteiro aponta(endereço de idade)
    printf("%p\n", &ponteiro);  //Mostra o endereço de ponteiro
    printf("%p\n", *&ponteiro); //Mostra o endereço da variável que o ponteiro aponta
    printf("%p\n", &*ponteiro); //Mostra o endereço da variável que o ponteiro aponta
    printf("%d\n", **ptr);      //Mostra o conteúdo apontado pelo ponteiro
    printf("%d\n", *ptr);
}

int main(){


}
