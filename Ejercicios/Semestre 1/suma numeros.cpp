#include <stdio.h>

int main() {
    int nums;
    int i;
    int j;
    int suma;
    printf("Ingrese la cantidad de numeros que desea \n ");
    scanf("%d",&nums);
    int lista[100000];
    suma=0;
    for (i=1;i<=nums;++i)
    {
     printf("Ingrese el numero %d \n ",i);    
     scanf("%d", &lista[i]);
     suma=suma+lista[i];
    }
    for (i=1;i<=nums;++i)
    {
     printf("%d \n ",lista[i]);    
    }
    printf("La suma de todos los numeros mencionados anteriormente da: %d \n ", suma);
    return 0;
}
