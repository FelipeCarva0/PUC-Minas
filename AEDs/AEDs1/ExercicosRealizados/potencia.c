#include<stdio.h>

int pot(int, int);
int main(){
    int x, y, r;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &x, &y);
    printf("%d", pot(x,y));
}
int pot(int a, int b){
    if(b==0){
        return 1;
    }else{
        return a*pot(a,b-1);
    }
}
