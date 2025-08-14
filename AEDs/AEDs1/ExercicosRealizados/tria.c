#include <stdio.h>

int main() {
    double a, b, c;



    scanf("%lf %lf %lf", &a, &b, &c);


    if ((a + b > c) && (a + c > b) && (b + c > a)) {

        if (a == b && b == c) {
            printf("Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Isosceles\n");
        } else {
            printf("Escaleno\n");
        }
    } else {
        printf("Triangulo invalido\n");
    }

    return 0;
}
