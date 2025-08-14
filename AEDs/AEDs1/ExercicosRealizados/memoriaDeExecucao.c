#include<stdio.h>
int main(){
    int i, j=100;
    int a,b;
    printf("Digite o ultimo digito de sua matricula: ");
    scanf("%d", &a);
    printf("Digite o penultimo digito de sua matricula: ");
    scanf("%d", &b);
    for(i=0;i<a;i++){
        for(j=1; j<=b;j++){
            if(j%3==0)
                printf("%d \t", j);
        }

    }
    printf("\n i = %d ", i);
    printf("\n j = %d ", j);
    return 0;

}
