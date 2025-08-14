#include<stdio.h>
void losango (int num);
int main(){
    int num;
    //printf("Digite um numero inteiro positivo nao nulo ");
    scanf("%d", &num);
    losango(num);
}
void losango (int num){
    for(int i=1; i<=num; i++){

        for(int j=1; j<=num-i;j++){
            printf(" ");
        }

        for(int j=1; j<= 2*i-1; j++){
            printf("*");
        }
        printf("\n");


    }
    for(int i=num-1; i>0; i--){
    for(int j=1;j<=num-i; j++){
            printf(" ");
        }
        for(int j=1; j<=2*i-1;j++){ //for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}





