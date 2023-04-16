#include<stdio.h> 

int main(){
int num,residuo,par=0,digito,input;
printf("-------------Bienvenido--------- \n");
printf("Ingrese un numero entero: ");
scanf("%d",&num);
input = num;
while(num>0){
digito = num % 10;
num = num / 10;
residuo = digito % 2;
if(residuo == 0)
par=par+digito;
} 
printf("\nLa suma de los digitos pares de %d es %d.",input,par); 
return 0; 
}