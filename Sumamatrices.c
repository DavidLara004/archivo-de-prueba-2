#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int matrizA[3][2];          // Definir arreglo bidimensional para matriz A
    int matrizB[3][2];          // Definir arreglo bidimensional para matriz B
    int resultado[3][2];        // Definir arreglo bidimensional para matriz de resultado
    for (int i = 0; i < 3; i++) // Uso de ciclo for para recorrer las filas de la matriz
    {
        for (int j = 0; j < 2; j++) // Uso del ciclo for para recorrer las columnass de la matriz
        {
            matrizA[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++) // Uso de ciclo for para recorrer las filas de la matriz
    {
        for (int j = 0; j < 2; j++) // Uso del ciclo for para recorrer las columnass de la matriz
        {
            matrizB[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++) // Uso de ciclo for para recorrer las filas de la matriz
    {
        for (int j = 0; j < 2; j++) // Uso del ciclo for para recorrer las columnass de la matriz
        {
            resultado[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++) // Uso de ciclo for para recorrer las filas de la matriz
    {
        for (int j = 0; j < 2; j++) // Uso del ciclo for para recorrer las columnass de la matriz
        {
            scanf("%d", &matrizA[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) // Uso de ciclo for para recorrer las filas de la matriz
    {
        for (int j = 0; j < 2; j++) // Uso del ciclo for para recorrer las columnass de la matriz
        {
            scanf("%d", &matrizB[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) // Uso de ciclo for para recorrer las filas de la matriz
    {
        for (int j = 0; j < 2; j++) // Uso del ciclo for para recorrer las columnass de la matriz
        {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++) // Uso de ciclo for para recorrer las filas de la matriz
    {
        for (int j = 0; j < 2; j++) // Uso del ciclo for para recorrer las columnass de la matriz
        {
            printf("%i ", resultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}