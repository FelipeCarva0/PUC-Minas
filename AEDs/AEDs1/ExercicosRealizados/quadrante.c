#include<stdio.h>
int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if((x>=0)&&(y>=0)){
        printf("primeiro");
    }
    if((x<=0)&&(y>=0)){
        printf("segundo");
    }
    if((x<=0)&&(y<=0)){
        printf("terceiro");
    }
    if((x>=0)&&(y<=0)){
        printf("quarto");
    }
}
