#include<stdio.h>
int main(){
int num[10];
int numero;
int i;
int posicion;
num[0]=23;
num[1]=31;
num[2]=66;
num[3]=98;
num[4]=42;
num[5]=29;
num[6]=87;
num[7]=53;
num[8]=94;
num[9]=22;
printf("Ingrese el numero que necesita: ");
scanf("%d", &numero);
for (i = 0; i < 10; i++)
{
if (num[i]==numero)
{
    posicion=i+1;
}

}
printf("El numero fue encontrado en la posicion: %d", posicion);
return 0;
}
