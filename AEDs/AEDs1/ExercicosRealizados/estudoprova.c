#include <stdio.h>
/*void seque(int num, int i) {
  if (num > 0){
    printf("%d",i); //antes da recursao printa 12345
    seque(num-1,i+1);
    printf("%d",i); //depois da recursao monta a pilha 12345 e "volta ela ao contrario" printando 54321
  }
}
void palin(int num, int i) {
  if (num > 0){
    printf("%d",i); //antes da recursao printa 12345
    seque(num-1,i+1);
    printf("%d",i); //depois da recursao monta a pilha 12345 e "volta ela ao contrario" printando 54321
  }
}*/


//ESCREVA UM PROGRAMA EM C QUE RECEBA UM INTEIRO TIPO 123 E RETORNE 321
/*int fibo( int n){
if(n==1 || n==2){
    return 1;
}else{
return fibo(n-1)+fibo(n-2);
}
}*/
void nume(int n){
while(n!=0){
    int y=n%10;
    printf("%d", y);
    n=n/10;
}

}
int main() {
  int num = 123;
  scanf("%d", &num);
  nume(num);
}
