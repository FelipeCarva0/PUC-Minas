#include<stdio.h>
#include<math.h>
int main(){
    int j, i;
    int dec=0, x;
    int exp;
    scanf("%d", &x);
    int bin[x];
    //Preenche o vetor
    for(int i=0; i<x; i++){
        scanf("%d", &bin[i]);
    }
    //Multiplica cada posição por 2 elevado ao expoente correspondente
    for( i=x-1, j=0; i>=0, j<x; i--, j++){
            dec=dec+bin[j]*(pow(2,i));

    }
    printf("%d", dec);
      printf("\n i: %d\n j: %d", i,j );
}
//printf("N[%d] = %d\n", i, bin[i]);
