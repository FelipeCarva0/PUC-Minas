#include<stdio.h>
int main(){
    float salat=1000;
    int ano;
    printf("Digite o ano atual:");
    scanf("%d", &ano);
    for(int i=1996;i<=ano;i++){
        salat=salat*1.015;

    }
    printf("Salario atual: %f", salat);
}
