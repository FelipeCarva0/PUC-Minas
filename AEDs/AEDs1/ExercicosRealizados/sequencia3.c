#include<stdio.h>
float fat( int n){
float f = 1;
    for (int i = 1; i <= n; i++) {
        f = f*i;
    }
    return f;
}
float soma(int x){
    float s=0;
 for(int i=0; i<=x;i++){

    s = s+ 1/fat(i);

 //printf("%f ", aux);
 }
return s;
}

int main(){
    float s;
    int x;
    scanf("%d", &x);
    s= soma(x);
    printf("%.2f", s);


}
