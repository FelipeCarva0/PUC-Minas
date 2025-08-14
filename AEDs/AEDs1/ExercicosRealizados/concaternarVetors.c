#include<stdio.h>
int main(){
    int n, m, z;
    //Tamanho do vetor A
    scanf("%d", &n);
    int a[n];
    //Tamanho do vetor B
    scanf("%d", &m);
    int b[m];
    //Tamanho do vetor C
    z=n+m;
    int c[z];
    //Recebe os valores de A
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    //Recebe os valores de B
    for(int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    //Concatena os valores no vetor C
     for(int i=0; i<n; i++){
        c[i]=a[i];
    }
    for(int i=n; i<z; i++){
        c[i]=b[i-n];
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
     printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ", b[i]);
    }
     printf("\n");
    for(int i=0; i<z; i++){
        printf("%d ", c[i]);
    }


}
