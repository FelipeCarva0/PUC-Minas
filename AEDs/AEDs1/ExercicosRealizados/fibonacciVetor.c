#include<stdio.h>

int fibonacci(int n);
int main(){
    int rep;
    int fibo[64];
    scanf("%d", &rep);
    for(int i=0; i<rep; i++){
            scanf("%d", &fibo[i]);
    }

    for(int i=0; i<rep; i++){
        printf("Fib(%d) = %d\n", fibo[i], fibonacci(fibo[i]));
    }
}

int fibonacci(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}
