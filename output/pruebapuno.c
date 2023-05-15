#include <stdio.h>

int menoramayor(int mayor, int menor) {
    int i;
    for (i=menor + 1; i<= mayor - 2; i++){
        printf( "%d ", i);
        }
    return i;
}
int main()
{
    //num1 es la variable destinada al primer numero ingresado,num2 es la variable destinada al segundo numero ingresado, mayor es la variable que ocupará el numero ingresado que sea mayor, menor es la variable que ocupará el numero ingresado que sea menor y la variable i se utiliza para el ciclo For. 
    int num1,num2,mayor,menor,i;
    printf("-------------Bienvenido--------- \n");
    // Lectura de los dos números ingresados por el usuario 
    printf("Ingrese el primer numero entero:");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero:");
    scanf("%d", &num2);
    // Uso del condicional If para los distintos casos que puedan ser ingresados por el usuario.
    // Caso en el cual el primer numero ingresado sea mayor que el segundo numero ingresado más uno. Esto para que pueda existir por lo menos un numero entre lo dos datos ingresados.
    if ( num1 > num2 + 1 ){
    // Se asigna 
    mayor=num1;
    menor=num2;
        printf("La cantidad de numeros entre %d y %d en un orden de menor a mayor son :  \n ", num1, num2);
    // Uso del ciclo For para imprimir en orden ascendente desde el numero menor más uno hasta el numero previo al numero mayor
    int result=menoramayor(mayor,menor);
    printf("%d", result);
    }
    // Caso en el cual el segundo numero ingresado sea mayor que el primer numero ingresado más uno. Esto para que pueda existir por lo menos un numero entre lo dos datos ingresados.
    if ( num2 > num1 + 1 ){
    mayor=num2;
    menor=num1;
        printf("La cantidad de numeros entre %d y %d en un orden de menor a mayor son :  \n ", num1, num2);
    // Uso del ciclo For para imprimir en orden ascendente desde el numero menor más uno hasta el numero previo al numero mayor
    int result=menoramayor(mayor,menor);
    printf("%d", result);
    }
    // Caso en el cual el primer numero ingresado sea igual que el segundo numero ingresado. También cuando no existen numeros entre los dos datos ingresados, siendo el segundo dato ingresado el inmediato inferior o el inmediato superior al primer dato ingresado.
    if ( num1 == num2 || num1 == num2 + 1 || num2 == num1 + 1 ){
    printf("No existen numeros entre los valores ingresados \n");
    }
    return 0;
}