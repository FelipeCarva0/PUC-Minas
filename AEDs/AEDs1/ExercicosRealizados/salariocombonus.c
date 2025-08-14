//rtet

#include<stdio.h>
#include<math.h>
int main(){
    char nome[30];
    double sal, vend, salf;
    fgets(nome, sizeof(nome), stdin);
    scanf("%lf", &sal);
    scanf("%lf", &vend);
    salf = vend*0.15+sal;
    printf("TOTAL = R$ %.2lf", salf);

}
