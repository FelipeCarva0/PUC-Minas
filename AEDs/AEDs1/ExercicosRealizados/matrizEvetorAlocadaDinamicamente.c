#include<stdio.h>  // A biblioteca stdio.h (Standard Input/Output) fornece funções para entrada e saída padrão.
/*printf(): Usada para imprimir dados na tela.

scanf(): Usada para ler dados da entrada padrão (geralmente o teclado).

fopen(), fclose(): Funções para abrir e fechar arquivos.

fgets(), fputs(): Usadas para ler e escrever strings em arquivos.*/


#include<stdlib.h>  //A biblioteca stdlib.h fornece funções para gerenciamento de memória, controle de processos e conversões.
/*malloc(), calloc(), realloc(), free(): Funções para alocação e liberação de memória dinâmica.

exit(): Finaliza o programa.

atoi(), atof(): Conversões de strings para inteiros e floats, respectivamente.

rand(), srand(): Funções para geração de números aleatórios.*/


#include<time.h> //A biblioteca time.h fornece funções para manipulação de datas e horas.
/*time(): Retorna o tempo atual em segundos desde a "época" (geralmente 1 de janeiro de 1970).

difftime(): Calcula a diferença entre dois tempos.

localtime(), gmtime(): Convertem o tempo em formato de time_t para uma estrutura de tempo local ou UTC.

strftime(): Formata a data e hora em uma string legível.*/


#include<ctype.h> //A biblioteca ctype.h fornece funções para verificar e manipular caracteres.
/*isalpha(): Verifica se um caractere é uma letra.

isdigit(): Verifica se um caractere é um dígito.

isspace(): Verifica se um caractere é um espaço em branco (como espaço, tabulação, etc.).

toupper(), tolower(): Convertem um caractere para maiúsculo ou minúsculo.*/


int main(){
//Criando uma matriz sem alocação dinamica
int nlin, ncol;
    printf("Digite quantas linhas tera a matriz: ");
    scanf("%d", &nlin);
    printf("\nDigite quantas colunas tera a matriz: ");
    scanf("%d", &ncol);
    int matriz[nlin][ncol];
    //poderia ser a função preenche matriz
    for(int i=0;i<nlin;i++){
        for(int j=0;j<ncol;j++){
                printf("\nDigite o valor da posiaoo(%d,%d): ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //imprime a matriz
    for(int i=0;i<nlin;i++){
        for(int j=0;j<ncol;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    //Criando uma matriz com alocação dinamica
    int nlinD, ncolD, **matrizD;
    printf("Digite quantas linhas tera a matriz: ");
    scanf("%d", &nlinD);
    printf("\nDigite quantas colunas tera a matriz: ");
    scanf("%d", &ncolD);

    matrizD=(int **)malloc(nlinD*sizeof(int *));
    for(int i=0;i<nlinD;i++){
        matrizD[i]=(int*)malloc(ncolD*sizeof(int));
    }
    //preenche
    for(int i=0;i<nlinD;i++){
        for(int j=0;j<ncolD;j++){
                printf("\nDigite o valor da posiaoo(%d,%d): ", i,j);
            scanf("%d", &matrizD[i][j]);
        }
    }
    //imprimi
    for(int i=0;i<nlinD;i++){
        for(int j=0;j<ncolD;j++){
            printf("%d ", matrizD[i][j]);
        }
        printf("\n");
    }
    //outro maneira de varrer a matriz:
    printf("\nVarrendo a matriz de outra forma: \n");
    for(int i=0;i<nlinD;i++){
        for(int j=0;j<ncolD; j++){
            printf("%d ", *(*(matrizD+i)+j));
        }
        printf("\n");
    }



    //É importante liberar a memoria alocada, se for uma matriz deve desalocar a memoria de cada linha e depois a matriz inteira

    // Libera a memória alocada para as linhas
    for (int i = 0; i < nlinD; i++) {
        free(matrizD[i]); // Libera cada linha individualmente
    }

    // Libera a memória alocada para o vetor de ponteiros
    free(matrizD); // Libera o vetor de ponteiros

    return 0;

}


