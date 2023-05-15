#include <stdio.h>
int main()
{
//Leer un numero entero y determinar a cuanto es igual el promedio entero de sus digitos
int num, digitos,suma;
printf("Ingrese el numero \n");
scanf("%d", &num);
while (num>=0)
{
digitos=num%10;
num=num/10;
suma=0;
suma=suma+digitos;
}
printf("%d", suma/num);
    return 0;
}