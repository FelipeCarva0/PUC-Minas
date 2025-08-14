//Adicionando as bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Aqui fica os prototipos das funções

void hi();  //procedimento sem parametros
void preencheVetor(int tamanho, int *vetor);
void imprimiVetor(int tamanho, int *vetor);
void preencherMatriz(int lin, int col , int **matriz);
void imprimirMatriz(int lin,int col,int **matriz);

int main(){
    int opcao=100, var1, var2, var3, var4, tamVetor, *vetor, x; //declaração das variaveis inteiras
    int  col=1, lin=1;
     int matriz[lin][col];

    while(opcao!= 0){               //Vai repetir o programa até que o usuario digite 0
        printf("\n \n");            //  O \n é quebra de linha
        printf("Escolha uma opcao: \n");
        printf("0-Encerra o Programa  \n");
        printf("1-Diz hello world \n");
        printf("2-Fala se um valor e maior que 10  \n");
        printf("3-Printa os numeros de 0 ate o valor desejado  \n");
        printf("4-Mexe com vetores  \n");
        printf("5-Mexe com matriz \n");
        printf("6-  \n");
        scanf("%d", &opcao);       //scanf para receber um valor, usa & para salvar o valor no endereço da variavel

        switch(opcao){          //Usa o switch case para escolher quais funçôes usar - O switch funciona da seguinte forma: Recebe uma variavel e testa se é igual em cada caso, se for igual ela executa o que estiver dentor do case, o break é para sair do case.

            case 1:
            hi();           //Na chamada da função sempre tem que por parenteses

            break;          //Break para sair do case
            case 2:
                printf("Digite um valor: ");
                scanf("%d", &var1);
                var2 = var1>10 ? printf("O valor digitado e maior que 10") : printf("O valor digitado e menor que 10"); //Operador ternario  variable = condition ? expressionTrue : expressionFalse;
                break;
            case 3:

                printf("Ate qual valor voce quer que o programa digite? ");
                scanf("%d", &var3);
                for(int i=0; i<var3; i++){
                    printf("%4.d", i+1);
                    if((i+1)%10==0){
                        printf("\n");
                    }
            }
            break;
            case 4:
                printf("\nQual o tamanho do array que vc quer?");
                scanf("%d", &tamVetor);
               vetor = (int *)malloc(tamVetor * sizeof(int)); // Alocação de memória para o vetor
                preencheVetor(tamVetor, vetor);
                imprimiVetor(tamVetor, vetor);
                free(vetor);
                break;
            case 5:
                printf("Digite a quantidade de linhas da matriz ");
                scanf("%d", &lin);
                printf("Digite a quantidade de colunas da matriz ");
                scanf("%d", &col);
                // Alocação da matriz
                int **matriz = (int **)malloc(lin * sizeof(int *));
                for (int i = 0; i < lin; i++) {
                    matriz[i] = (int *)malloc(col * sizeof(int));
                }
                preencherMatriz(lin, col, matriz);
                imprimirMatriz(lin, col, matriz);
                // Liberação da memória da matriz
                for (int i = 0; i < lin; i++) {
                    free(matriz[i]);
                }
                free(matriz);
                break;

        }   //fim do switch
    }   //fim do while
    printf("\n \nPrograma encerrado!");
    return 0; //Boa pratica colocar um return 0 no fim do código, mostra para a maquina que o código foi bem executado
}   //fim do main

//Funções
void hi(){
printf("Hello world");
}

void preencheVetor(int tamanho, int *vetor){
    int var5;
    for(int i=0;i<tamanho;i++){
        printf("\nDigite o valor para a posicao %d do array: ", i);
        scanf("%d", &var5);
        vetor[i]= var5;
    }
}

void imprimiVetor(int tamanho, int *vetor){
    printf("\n Seu array e: ");
    for(int i=0; i<tamanho;i++){
        printf("%d ", vetor[i]);
    }
}



void preencherMatriz(int lin, int col , int **matriz){
    //Varre a matriz inteira
    for(int i=0; i<lin; i++){ //varre as linhas
        for(int j=0; j<col; j++){ //varre as colunas
            printf("Digite o valor da posicao (%d,%d) ", i, j);
            scanf("%d", &matriz[i][j]);
        }

    }
}

void imprimirMatriz(int lin,int col,int **matriz){
    for(int i=0; i<lin; i++){ //varre as linhas
        for(int j=0; j<col; j++){ //varre as colunas
            printf("%d ",  matriz[i][j]);
        }
        printf("\n");
    }

}


