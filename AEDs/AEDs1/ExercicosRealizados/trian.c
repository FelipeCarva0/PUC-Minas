#include <stdio.h>

int main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);


    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a == b && b == c)
        {
            printf("Triangulo equilatero");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Triangulo isosceles");
        }
        else
        {
            printf("Triangulo escaleno\n");
        }
    }
    else
    {
        printf("Triangulo invalido");
    }

    return 0;
}
