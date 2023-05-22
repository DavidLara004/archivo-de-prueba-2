#include <stdio.h>
#include <stdlib.h>//Primera librería que permite el uso de la función randomizadora de numeros
#include <time.h>//Segunda librería que permite el uso de la función randomizadora de numeros
int main()
{
    srand(time(NULL));//Instrucción que inicializa el generador de números aleatorios
    int filas, columnas;//Las dos variables que representan filas y columnas
    printf("Ingrese el numero de filas que desea para su matriz: ");
    scanf("%d", &filas);//Obtiene el numero de filas que quiere el usuario
    printf("Ingrese el numero de columnas que desea para su matriz: ");
    scanf("%d", &columnas);//Obtiene el numero de columnas que quiere el usuario
    int matriz[filas][columnas];//Creacion y definicion de la matriz bidimensional
    //Se utiliza un doble for para que recorra tanto filas como columnas gracias a las variables contadoras i y j
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = rand() % 101;//Se le colocan valores random a todos los numeros de la matriz gracias a la funcion rand
        }
    }
    //Se utiliza un doble for para que recorra tanto filas como columnas gracias a las variables contadoras i y j
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d  ", matriz[i][j]);//Se imprime la matriz original
        }
        printf("\n");
    }
    printf("\n");
    //Se utiliza un doble for para que recorra tanto filas como columnas gracias a las variables contadoras i y j
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            printf("%d  ", matriz[j][i]);//Se imprime la matriz transpuesta al cambiar el orden de columnas y filas y al cambia el orden de impresión de las variables contadoras i y j.
        }
        printf("\n");
    }
    return 0;
}