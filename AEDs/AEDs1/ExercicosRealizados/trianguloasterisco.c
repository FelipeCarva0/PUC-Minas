#include<stdio.h>
void triangulo (int num);
int main(){
    int num;
    //printf("Digite um numero inteiro positivo nao nulo ");
    scanf("%d", &num);
    triangulo(num);
}
void triangulo (int num){
    for(int i=1; i<=num;i++){
        for(int j=1; j<=i;j++){
            printf("*");
}
            printf("\n");
}



}
