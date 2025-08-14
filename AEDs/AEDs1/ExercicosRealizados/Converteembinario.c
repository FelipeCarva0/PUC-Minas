#include<stdio.h>
void bin( int x){
    if (x>0){
        bin(x/2);
        printf("%d", x%2);
    }
}
int main(){
 int n;
 //printf("Digite um numero ");
 scanf("%d", &n);
bin(n);
}
