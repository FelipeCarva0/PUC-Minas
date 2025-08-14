#include<stdio.h>
void ordena();
int main(){
    int n1, n2, n3, n;
    for(int i=n; i>0;i--){
    printf("Digite tres valores para serem ordenados em ordem crescente: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("\nEM ORDEM: ");
    ordena(n1, n2, n3);
}
  }
              //5      3       4
void ordena( int a, int b, int c){
    int temp=0;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    printf("%d %d %d", a, b, c);
}
