#include<stdio.h>
int fatorial( int a){
    if(a<=1){
        return 1;
    }else{
    return (a*fatorial(a-1));
    }
}
float soma(int b){
 float s=3;
 for(int i=1;b>=i;i++){
    s=s+b/(fatorial(b)-2);
 }
return s;
}
int main(){
    int x;
    printf("Digite um valor para descobrir seu fatorial: ");
        scanf("%d", &x);
    printf("O fatorial e: %f", soma(x));
}
