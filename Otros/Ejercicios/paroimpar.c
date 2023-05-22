#include <stdio.h>

int main() {
    int num;
    int b;
    printf("Ingrese el numero que desea saber si es par o impar\n");
    scanf("%d", &num);
    if (num%2==0) {
      printf("El numero ingresado es par \n");  
    }
    else {
        b=num%2;
        printf("El numero ingresado es impar y su residuo es %f\n", b);
    }

    return 0;
}