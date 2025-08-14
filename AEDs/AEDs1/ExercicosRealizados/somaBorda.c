#include<stdio.h>
#include<stdlib.h>
void preencheMatriz(int lin, int col, int matriz[][col]){
    for(int i=0; i<lin; i++){
        for(int j=0;j<col;j++){
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
int somaBorda(int lin, int col, int matriz[][col]){
    int soma=0;
    for(int i=0; i<lin;i++){
        for(int j=0;j<col;j++){
            if((i==0)||(j==0)||(i==lin-1)||(j==col-1)){
                soma=soma+matriz[i][j];
                //printf("%d ", soma);
            }
        }
    }
    return soma;
}

int main(){
    int n, m;
    printf("Digite o numero de linhas: ");
    scanf("%d", &n);
    printf("\nDigite o numero de colunas: ");
    scanf("%d", &m);
    int matriz[n][m];
    preencheMatriz(n, m, matriz);
    imprimiMatriz(n, m, matriz);
    int borda=somaBorda(n,m,matriz);
    printf("A soma dos numeros da borda e: ");
    printf("%d", borda);
}
