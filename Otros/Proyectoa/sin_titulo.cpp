#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i;
	int suma=0;
	int lista [100];
	int num;
	int contador;
	srand(time(NULL));
	printf("Los numeros generados aleatoriamente son: ");
	for (i = 0 ; i < 100; i++ )
	{
		lista[i]= rand() %100;
	}
	
	printf("Ingrese un numero entre el 0 y el 100 \n ");
	scanf("%d", &num);
	contador=0;
	for (i = 0 ; i < 100; i++ )
	{
		if (num<lista[i]) {
			contador+=1;
			suma+= lista[i];
		}     
	}
	printf("Existen %d elementos mayores al numero %d \n ", contador,num);
	printf("El total de la suma es; %d \n ", suma);
	contador=0;
	for (i = 0 ; i < 100; i++ )
	{
		if (num>lista[i]) {
			contador+=1;
		}     
	}
	printf("Existen %d elementos menores al numero %d \n ", contador,num);
	contador=0;
	for (i = 0 ; i < 100; i++ )
	{
		if (num==lista[i]) {
			contador+=1;
		}     
	}
	printf("Existen %d elementos iguales al numero %d \n ", contador,num);
	
	return 0;
}
