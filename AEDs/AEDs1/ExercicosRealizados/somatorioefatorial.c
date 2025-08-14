#include<stdio.h>
int soma(int a){
    int r=0;
    for(int i=a; i>0;i--){
        r=r+i;
    }
    return r;
}
int fat(int b){
    int re=1;
    for(int i=b; i>0;i--){
    re=re*b;
    }
    return re;
}
int main(){
    int x,y, f, s;
    scanf("%d %d", &x, &y);
    f=fat(x);
    s=soma(y);
    printf("Fatorial: %d", f);
    printf("Soma: %d", s);
}
