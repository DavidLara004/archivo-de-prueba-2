#include<stdio.h>
int main(){
    int mat1[2][3]={0,0,0,0,0,0}; //[filas][columnas]
    int mat2[2][3]={0,0,0,0,0,0};
    int resul[2][3]={0,0,0,0,0,0};
    for(int i=0;i<2;i++){ //i=filas
        for(int j=0;j<3;j++){ //j=columnas
            scanf("%d",&mat1[i][j]);
        } 
    }
    for(int i=0;i<2;i++){ 
        for(int j=0;j<3;j++){
            scanf("%d",&mat2[i][j]);
        } 
    }
    printf("Su primera matriz es:\n");
    for(int i=0;i<2;i++){ 
        for(int j=0;j<3;j++){ 
            printf("%d  ",mat1[i][j]);
        } 
        printf("\n");
    }
    printf("Su segunda matriz es:\n");
    for(int i=0;i<2;i++){ 
        for(int j=0;j<3;j++){
            printf("%d  ",mat2[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++){ 
        for(int j=0;j<3;j++){
            resul[i][j]=mat1[i][j]+mat2[i][j];
        } 
    }
    printf("Su matriz resultante es:\n");
    for(int i=0;i<2;i++){ 
        for(int j=0;j<3;j++){
            printf("%d  ",resul[i][j]);
        } 
        printf("\n");
    }
    return 0;
}