#include <stdio.h>
int main()
{
    int filas, columnas, num;
    printf("Ingrese el numero de matrices que desea: ");
    scanf("%d", &num);
    printf("Ingrese el numero de filas que desea para su matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas que desea para su matriz: ");
    scanf("%d", &columnas);
    int matriz[num][filas][columnas];
    for (int n = 0; n < num; n++)
    {
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                matriz[n][i][j] = 0;
            }
        }
    }
for (int n = 0; n < num; n++)
{
if (n==num-1)
{
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                matriz[n][i][j] = 1;
            }
        }
}

}
    for (int n = 0; n < num; n++)
    {
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                printf("%d", matriz[n][i][j]);
            }
            printf("\n");
        }
       printf("\n");  
    }

    return 0;
}