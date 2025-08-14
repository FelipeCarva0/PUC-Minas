#include<stdio.h>
int main(){
    int m, n, soma, i=0;
    scanf("%d %d", &m, &n);
    if(m>=n){
    for(n=n; m>=n; n++){
        printf("%d ", n);
        soma=soma+n;
    }
    }else {
     for(m=m; n>=m; m++){
        printf("%d ", m);
        soma=soma+m;
    }
    }
    printf("Soma = %d", soma);
}
