#include<stdio.h>
#include<locale.h>
#include<string.h>
#include <stdlib.h>
typedef struct produto{
    int id;
    char nome[100];
    float preco;
    int qtde;
}produto;
produto cadastrarProduto();
void imprimiProduto(produto prod);
float precoMedio(produto p[], int n);

int main(){
    int n;
    float precoM;
    printf("Quer cadastrar quantos produtos? ");
    scanf("%d", &n);
    produto produtos[n];
    setlocale(LC_ALL, "Portuguese");
    for(int i=0;i<n;i++){
    produtos[i]= cadastrarProduto();
    }
    for(int i=0;i<n;i++){
    imprimiProduto(produtos[i]);
    }
    precoM = precoMedio(produtos, n);
    printf("\nPreço medio: %.2f", precoM);
}
produto cadastrarProduto(){
    produto prod;
    printf("Digite o id do produto: ");
    scanf("%d", &prod.id);
    //fflush(stdin);
    scanf("%c");  //Pode usar o scanf("%c") para receber o \n quando dá enter
    printf("\nDigite o nome do produto: ");
    fgets(prod.nome, 100, stdin);
    fflush(stdin);
    printf("\nDigite o preço: ");
    scanf("%f", &prod.preco);
    fflush(stdin);
    printf("\nDigite a quantidade de produtos: ");
    scanf("%d", &prod.qtde);
    fflush(stdin);
    return prod;
}
void imprimiProduto(produto prod){
    puts("\n--------------------Produto cadastrado --------------------");
    printf("\nID: %d", prod.id);
    printf("\nNOME: %s", prod.nome);
    printf("PREÇO: %.2f", prod.preco);
    printf("\nQUANTIDADE: %d", prod.qtde);
}
float precoMedio(produto *p, int n){
    float soma=0;
    for(int i=0;i<n;i++){
        soma=soma + p[i].preco;
    }
    return soma/n;
}

