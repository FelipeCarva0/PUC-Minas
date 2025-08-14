#include <stdio.h>

void numero(int x){
    int y=0;
    if(x!=0){
        y=x%10;
        printf("%d", y);
        x=x/10;
        numero(x);
    }
}
void inverteRecorrencia(int n){
    if(n==0){
        return;
    }else{
    printf("%d", (n%10));
        inverteRecorrencia(n/10);
    }


}
int main() {
  int num = 123;
  scanf("%d", &num);
printf("\nSem recorrencia: ");
  numero(num);
  printf("\n\nCom recorrencia: ");
inverteRecorrencia(num);

}
