#include <stdio.h>
#include <stdlib.h>

int main () {
	int num1,num2,i,suma;
	printf("Ingrese un numero entre el 0 y el 100 \n ");
	scanf("%d", &num1);
	int lista[100];
	suma=0;
	for (i=1;i<=num1;i++)
	{ 
		printf("ingrese numero %d \n",i);
		scanf("%d", &lista[i]);
		suma+=lista[i];
	}
	
	for (i=1; i<=num1;i++){ 
		printf("%d \n", lista[i]);
	}
	printf("suma %d \n ", suma);
return 0;
}
