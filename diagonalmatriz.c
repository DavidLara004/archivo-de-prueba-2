#include<stdio.h>
int main(){
int filas, columnas;
printf("Ingrese el numero de filas que desea para su matriz: ");
scanf("%d", &filas);
printf("Ingrese el numero de columnas que desea para su matriz: ");
scanf("%d", &columnas);
int matriz[filas][columnas];
for(int i=0;i<filas;i++){ 
        for(int j=0;j<columnas;j++){ 
            matriz[i][j]=0;
        } 
    }
for(int i=0;i<filas;i++){ 
        for(int j=0;j<columnas;j++){ 
        printf("%d",matriz[i][j]);
        } 
        printf("\n");
    }
    return 0;
}