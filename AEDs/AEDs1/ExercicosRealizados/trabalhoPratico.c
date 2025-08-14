#include<stdio.h>
typedef struct Ingredientes{
    int id;
    char nome[100];
    float preco;

}Ingredientes;

typedef struct Pizzas{
    int id;
    char nome[100];
    char tamanho;
    float preco;
    Ingredientes *ingrediente;

}Pizzas;
Pizzas cadastrarPizza(){


}

    // r - read     Lê o conteudo do arquivo
    // w - write    Escreve no arquivo
    // a - append   Anexa coisa no arquivo

int main(){
    /*  FILE *file; //declara uma variável chamada file que pode apontar para uma estrutura do tipo FILE, que será usada para manipular arquivos
    file = fopen("trabalhoPraticoPizza.txt", "w"); // Se eu fizer dessa forma sem dizer onde será o diretório, o arquivo txt será criado onde está o arquivo c
    //file = fopen("C:\\Users\\Felipe Carvalho\\OneDrive\\Desktop\\CodeBlocks\\pizza.txt", "w"); //Usar duas barras na string para ser copilada como a contra barra de acesso a diretório

    if(file==NULL){
        printf("O arquivo nao pode ser aberto");
        return 0;
    }

    fprintf(file, "Cadastro de pizza");
    fclose(file);   */



    return 0;

}
