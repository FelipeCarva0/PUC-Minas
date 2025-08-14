#include<stdio.h>
int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1%15==0){ //N1
            printf("Divisivel por ambos\n");
    }else{
        if(n1%3==0){
            printf("Divisivel por 3\n");
        }
        if(n1%5==0){
            printf("Divisivel por 5\n");
        }

    }
    if((n1%3!=0)&&(n1%5!=0)){
        printf("Nao e divisivel por 3 nem por 5\n");
    }
    if(n2%15==0){ //N2
            printf("Divisivel por ambos\n");
    }else{
        if(n2%3==0){
            printf("Divisivel por 3\n");
        }
        if(n2%5==0){
            printf("Divisivel por 5\n");
        }

    }
    if((n2%3!=0)&&(n2%5!=0)){
        printf("Nao e divisivel por 3 nem por 5\n");
    }
    if(n3%15==0){ //N3
            printf("Divisivel por ambos\n");
    }else{
        if(n3%3==0){
            printf("Divisivel por 3\n");
        }
        if(n3%5==0){
            printf("Divisivel por 5\n");
        }

    }
    if((n3%3!=0)&&(n3%5!=0)){
        printf("Nao e divisivel por 3 nem por 5\n");
    }
}
