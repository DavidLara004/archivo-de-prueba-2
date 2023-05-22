#include <stdio.h>
int main()
{
    //num1 es la variable destinada al primer numero ingresado,num2 es la variable destinada al segundo numero ingresado
    int num1,num2,mayor,menor,i;
    printf("-------------Bienvenido--------- \n");
    printf("Ingrese el primer numero entero:");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero:");
    scanf("%d", &num2);
    if ( num1 > num2 ){
    mayor=num1;
    menor=num2;
    }
    if ( num2 > num1 ){
    mayor=num2;
    menor=num1;
    }
    printf("La cantidad de numeros entre %d y %d en un orden de menor a mayor son :  \n ", num1, num2);
    for (i=menor + 1; i<=mayor - 1; i++){
        printf( "%d ", i);
    
  }
    return 0;
}

