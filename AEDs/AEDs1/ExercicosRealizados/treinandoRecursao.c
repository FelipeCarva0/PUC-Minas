#include<stdio.h>

void ateN(int n){
    if(n==0){
   printf("0");
    }else{

        ateN(n-1);
        printf("%d ", n);
    }
}
int fatorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*fatorial(n-1);
    }

}

int main(){
    printf("Imprimir n numeros até 0 ");
    printf("\nDigite um valor maior que 0: ");
    int n;
    scanf("%d", &n);
    ateN(n);
    int fat = fatorial(n);
    printf("Fatorial é: %d", fat);
}
