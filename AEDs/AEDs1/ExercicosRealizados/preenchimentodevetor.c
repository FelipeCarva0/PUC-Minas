#include<stdio.h>
int main(){
    int entrada, n[10];
    scanf("%d", &entrada);

    for(int i=0; i<10; i++){
       n[0]=entrada;
       n[i+1]=2*n[i];

    }
    for(int i=0; i<10; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
}
