#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand (time(NULL));   
    int filas, columnas;
    printf("Ingrese el numero de filas que desea para su matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas que desea para su matriz: ");
    scanf("%d", &columnas);
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = rand() % 101;
        }
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}