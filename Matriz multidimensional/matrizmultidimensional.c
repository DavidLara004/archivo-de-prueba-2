#include <stdio.h>
int main()
{
    int filas, columnas, num;
    printf("Ingrese el numero de matrices que desea: ");
    scanf("%d", &num);//Escaneo del numero de matrices que desea el usuario.
    printf("Ingrese el numero de filas que desea para su matriz: ");
    scanf("%d", &filas);//Escaneo del numero de filas que desea el usuario para todas las matrices.
    printf("Ingrese el numero de columnas que desea para su matriz: ");
    scanf("%d", &columnas);//Escaneo del numero de columnas que desea el usuario para todas las matrices.
    int matriz[num][filas][columnas];//Creacion del arreglo tridimensional para la matriz
    for (int n = 0; n < num; n++)//Uso de un triple ciclo for que recorra el numero de matrices, las filas y las columnas ingresadas por el usuario
    {
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                matriz[n][i][j] = 0; // Todos los elementos de las diferentes filas y columnas de las distintas matrices van a valer 0. 
            }
        }
    }
//Uso de un ciclo for que recorra el numero de matrices ingresadas por el usuario
for (int n = 0; n < num; n++)
{
//Uso del condicional If para que identifique a la última matrices
if (n==num-1)
{
    //Uso de un doble ciclo for que recorra el numero de filas y  columnas ingresadas por el usuario.
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                matriz[n][i][j] = 1; //Todos los elementos de la ultima matriz, tanto en filas como columnas, pasan a ser 1.
            }
        }
}

}
//Uso de un triple ciclo for que recorra el numero de matrices, las filas y las columnas ingresadas por el usuario
    for (int n = 0; n < num; n++)
    {
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                printf("%d", matriz[n][i][j]); //Se imprime las matrices necesitadas por el usuario
            }
            printf("\n"); //Uso de \n para imprimir de manera correcta y legible para el usuario
        }
       printf("\n");  //Uso de \n para imprimir de manera correcta y legible para el usuario
    }

    return 0;
}