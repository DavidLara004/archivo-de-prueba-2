#include <stdio.h>
int main()
{

    int a, b, suma, resta, producto;
    printf("Introduce el valor del primer numero: ");
    scanf("%i", &a);
    printf("Introduce el valor del segundo numero: ");
    scanf("%i", &b);
    suma=a+b;
    resta=a-b;
    producto=a*b;
    printf("\n La suma es: %i", suma);
    printf("\n La resta es: %i", resta);
    printf("\n El producto es: %i", producto);
    return 0;
}
