#include<stdio.h>
#include<stdlib.h>
void preencheMatriz(int col, int lin, int matriz[][col]);
void imprimiMatriz(int col, int lin, int matriz[][col]);
void somaCol(int lin, int col, int matriz[][col]);

int main(){
int n, m;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &n);
    printf("\nDigite o numero de linhas da matriz: ");
    scanf("%d", &m);
    int vetor[m];
    int matriz[n][m];
    preencheMatriz(n, m, matriz);
    imprimiMatriz(n, m, matriz);
    somaCol(n,m,matriz);

}
void preencheMatriz(int lin, int col, int matriz[][col]){
    for(int i=0; i<lin;i++){
        for(int j=0; j<col; j++){
            printf("\nDigite o valor da posicao (%d,%d) ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimiMatriz(int lin, int col, int matriz[][col]){
    for(int i=0; i<lin; i++){
        for(int j=0;j<col;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
void somaCol(int lin, int col, int matriz[][col]){
    int vetor[col];
    int soma=0;
    for(int i=0;i<col;i++){
        for(int j=0;j<lin;j++){
            soma=soma+matriz[j][i];
        }
        vetor[i]=soma;
        soma=0;
        printf("%d ",vetor[i]);
    }
    //return *vetor;

}
