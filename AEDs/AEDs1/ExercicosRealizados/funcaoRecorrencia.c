#include<stdio.h>
int f(int);
int main(){
    int a;
    scanf("%d", &a);
    printf("%d", f(a));
}
 int f(int n){
    if(n==0){
        return 1;
    }
    if(n>0){
    return 2 * f(n-1);
    }

 }
