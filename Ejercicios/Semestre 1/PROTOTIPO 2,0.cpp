#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main() {
	int op, num1, num2, x, y, respuesta = 0;
	while(1){
		system("cls");
		printf("---------Bienvenido-------- \n");
		printf("Escoja el tipo de secuencia que desea (con el numero correspondiente) \n ");
		printf("1. Secuencia Recursiva \n ");
		printf("2. Secuencia no Recursiva \n ");
		printf("3. Salir del programa \n ");
		scanf("%d", &op);
		if (op==1 || op==2 || op==3){
			switch(op){
			case 1:
				system("cls");
				printf("---------------Secuencia Recursiva---------- \n ");
				printf("Ingrese el primer numero \n ");
				scanf("%d", &num1);
				printf("Ingrese el segundo numero \n ");
				scanf("%d", &num2);
				x = num1;
				y = num2;
				if (x<y){
					respuesta = 0;
					printf("Su respuesta es: Q(%d, %d) = %d\n\n", num1, num2, respuesta);
				}else{
					while(x>=y){
						x-=y;
						respuesta++;
						printf("Q (%d, %d) + 1\n", x, y);
					}
					printf("Su respuesta es: Q(%d, %d) = %d\n\n", num1, num2, respuesta);
				}
				break;
			case 2:{
				system("cls");
				printf("-----------Secuencia no Recursiva-------- \n ");
				printf("Ingrese el primer numero \n ");
				scanf("%d", &num1);
				printf("Ingrese el segundo numero \n ");
				scanf("%d", &num2);
				printf("La respuesta es: ");
				respuesta = (int) num1/num2;
				printf("Q (%d, %d) = %d / %d\n=%d\n\n", num1, num2, num1, num2, respuesta);
				break;
			}
			default:;
				system("cls");
				printf("---------Gracias, vuelva pronto-------- \n");
				exit(0);
				break;
			}
		}
		else{
			printf("Caracter no valido. Solo se permite poner un numero del 1 al 3, dependiendo la opcion que necesite.\n");
		}
		printf("Presione una tecla para volver");
		getch();
	}
	return 0;
}
