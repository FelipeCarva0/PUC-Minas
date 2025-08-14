#include<stdio.h>
int fat(int n){
    int temp=n;
    for( int i=n-1; i>0; i--){
        temp=temp*i;
    }
    return temp;
}
float soma(int n){
    float aux=1.0;
    for(int i=1; i<=n; i++){
        aux=aux+(1.0/fat(i));
    }
    return aux;
}
int main(){
    int n;
    float total;
    printf("Digite o limite superior");
        scanf("%d", &n);
        total=soma(n);
        printf("O valor da soma e %f", total);

}


