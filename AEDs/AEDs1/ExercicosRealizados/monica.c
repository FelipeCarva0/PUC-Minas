#include <stdio.h>

int main() {
    int A, B, M, C;
    scanf("%d", &M);
    scanf("%d", &A);
    scanf("%d", &B);
    C = M - (A + B);
    if((M>=40)&&(M<=110)&&(A>=1)&&(A<M)&&(B>=1)&&(B<M)&&(A!=B)){
        if((A>B)&&(A>C)){
            printf("%d", A);
        }
        if((B>A)&&(B>C)){
            printf("%d", B);
        }
        if((C>A)&&(C>B)){
            printf("%d", C);
        }

    }else{
    printf("Nao atende as restricoes propostas.");
    }
    return 0;
}
