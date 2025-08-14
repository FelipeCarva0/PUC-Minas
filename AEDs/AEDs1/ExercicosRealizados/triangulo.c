#include<stdio.h>
#include <locale.h>
int main(){
    double l1, l2, l3;
    scanf("%lf", &l1);
    scanf("%lf", &l2);
    scanf("%lf", &l3);
    if((l2+l3>l1)&&(l1+l3>l2)&&(l1+l2>l3)){
       if((l1==l2)&&(l2==l3)){
        printf("Triangulo equilatero\n");
       }
       if((l1==l2)&&(l1!=l3)||(l1==l3)&&(l1!=l2)||(l2==l3)&&(l2!=l1)){
        printf("Triagulo isoceles\n");
       }
       if((l1!=l2)&&(l3!=l1)&&(l3!=l2)){
        printf("Triangulo escaleno\n");
       }
    }else{
    printf("Triangulo invalido\n");
    }
    return 0;
}
