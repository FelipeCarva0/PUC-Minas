#include<stdio.h>
int main(){
    int entrada, n[10];
    scanf("%d", &entrada);

       n[0]=entrada;
    for(int i=1; i<10; i++){
       n[i] = 2 * n[i - 1];

    }
    for(int i=0; i<10; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
}
