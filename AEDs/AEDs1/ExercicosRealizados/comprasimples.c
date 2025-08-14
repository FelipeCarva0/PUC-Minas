#include<stdio.h>
int main(){
int codpeca1, numpeca1, codpeca2, numpeca2;
float valpeca1, valpeca2, total;
//printf("Digite o codigo da peca 1: ");//
scanf("%d", &codpeca1);
//printf("Digite o numero de pecas 1: ");//
scanf("%d", &numpeca1);
//printf("Digite o valor unitario da peca 1: ");//
scanf("%f", &valpeca1);
//printf("Digite o codigo da peca 2: ");//
scanf("%d", &codpeca2);
//printf("Digite o numero de pecas 2: ");//
scanf("%d", &numpeca2);
//printf("Digite o valor unitario da peca 2: ");//
scanf("%f", &valpeca2);
total=valpeca1*numpeca1+valpeca2*numpeca2;
printf("VALOR A PAGAR: R$ %.2f", total  );
return 0;
}
