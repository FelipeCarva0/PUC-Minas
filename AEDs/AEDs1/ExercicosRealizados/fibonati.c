#include<stdio.h>
int fibonati(int n){
if((n==0)||(n==1)){
    return n;
}else{
 return(fibonati(n-1)+fibonati(n-2));
}
}

int main(){
    int a;
    printf("Digite um a posição da sequencia de fibonati:");
    scanf("%d", &a);
    printf("Fibonate : %d", fibonati(a));
}
