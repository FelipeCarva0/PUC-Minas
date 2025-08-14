#include<stdio.h>
int main(){
    int num;
    float num1;
    scanf("%d", &num);
    scanf("%f", &num1);
    printf("Decimal: %5.5d \n", num);
    printf("Hexadecimal: %x \n", num);
    printf("Octal: %o \n", num);
    printf("Char: %c \n", num);
    printf("Com 6 casas decimais: %.6f \n", num1);
    printf("Com 2 casas decimais: %.2f \n", num1);
    printf("Notacao cientifica (lower): %e \n", num1);
    printf("Notacao cientifica (upper): %E \n", num1);

}
