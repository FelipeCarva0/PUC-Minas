#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Carros{
    char modelo[200];
    int ano;
    float preco;
}Carros;
Carros cadastraCarros(){
    Carros carro;
    getchar();
   // printf("Digite o nome do modelo: ");
    fgets(carro.modelo,200,stdin);
    carro.modelo[strcspn(carro.modelo, "\n")] = 0;
   // printf("\nDigite o ano do carro: ");
    scanf("%d", &carro.ano);
   // printf("\nDigite o preco do carro: ");
    scanf("%f", &carro.preco);
    return carro;
}
void filtra(Carros *carro, float pmax, int n){
    printf("Carros com preco menor que %.2f:", pmax);
    for(int i=0;i<n;i++){
        if(carro[i].preco<=pmax){
          printf("\nMarca: %s, Ano: %d, Preco: %.2f", carro[i].modelo, carro[i].ano, carro[i].preco );
        }


    }
}
int main(){
    int n;
    float pmax;
  //  printf("Quer cadastrar quantos carros? ");
    scanf("%d", &n);
    Carros carro[n], filtro;
    for(int i=0;i<n;i++){
        carro[i]=cadastraCarros();
    }
   // printf("\nDigite o preco maximo: ");
    scanf("%f", &pmax);
    filtra(carro, pmax, n);
}
