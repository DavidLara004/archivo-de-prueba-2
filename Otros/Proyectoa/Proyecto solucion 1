#include <stdio.h>

int main() {
	
	//Declaración de variables
	int opcion_usuario, i;
	int leer_contacto;
	int contacto_borrado;
	int editar_contacto;
	char nombre[100] = "";
	char telefono[100] = "";
	char email[100] = "";
	
	//Array de la agenda con los contactos
	char *agenda[10][4] = { { "1", "-", "-", "-" },
	{ "2", "-", "-", "-" },
	{ "3", "-", "-", "-" },
	{ "4", "-", "-", "-" },
	{ "5", "-", "-", "-" },
	{ "6", "-", "-", "-" },
	{ "7", "-", "-", "-" },
	{ "8", "-", "-", "-" },
	{ "9", "-", "-", "-" },
	{ "10", "-", "-", "-" } };
	
	
	//Bucle do-while para ejecutar el programa
	do
	{
		//Bienvenida y menú de la agenda
		printf("*Bienvenido a tu agenda personal*\n\n");
		printf("\t1. Listar contactos\n");
		printf("\t2. Crear un contacto\n");
		printf("\t3. Leer contacto\n");
		printf("\t4. Editar un contacto\n");
		printf("\t5. Borrar un contacto\n");
		printf("\t6. Salir del programa\n");
		printf("\nEscoge una opción (solo el número): ");
		scanf("%i", &opcion_usuario);
		printf("\n");
		
		
		//switch case para ejecutar la opción que escoja el usuario
		switch (opcion_usuario)
		{
			
			//Opción 1: Listar contactos
		case 1:
			
			//Bucle for para que se listen todos los contactos
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					switch (j)
					{
					case 0:
						printf("Contacto: %s\n", agenda[i][j]);
						break;
						
					case 1:
						printf("Nombre: %s\n\n", agenda[i][j]);
						break;
					}
				}
			}
			break;
			
			
		case 2:
			
			for (i = 0; i < 10; i++)
			{
				if (agenda[i][1] != "-")
				{
					continue;
				}
				else if(agenda[i][1] == "-")
				{
					gets(nombre);
					printf("\nInserta el nombre: ");
					gets(nombre);
					printf("Inserta el telefono: ");
					gets(telefono);
					printf("Inserta el email: ");
					gets(email);
					printf("\n");
					
					agenda[i][1] = nombre;
					agenda[i][2] = telefono;
					agenda[i][3] = email;
					break;
				}
				else
				{
					printf("La agenda está llena\n\n");
				}
			}
			break;
			
			//Opción 3: Leer un contacto (todos los datos)
		case 3:
			
			printf("¿Qué contacto deseas leer?: ");
			scanf("%i", &leer_contacto);
			leer_contacto -= 1;
			
			for (int i = leer_contacto; i <= leer_contacto; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					switch (j)
					{
					case 0:
						printf("\nContacto: %s\n", agenda[i][j]);
						break;
						
					case 1:
						printf("Nombre: %s\n", agenda[i][j]);
						break;
						
					case 2:
						printf("Teléfono: %s\n", agenda[i][j]);
						break;
						
					case 3:
						printf("Email: %s\n\n", agenda[i][j]);
						break;
						
					default:
						printf("xd");
					}
				}
			}
			
			break;
			
		case 4:
			
			printf("¿Qué contacto deseas editar?: ");
			scanf("%i", &editar_contacto);
			editar_contacto -= 1;
			
			for (int i = editar_contacto; i <= editar_contacto; i++)
			{
				if (agenda[i][1] == "-")
				{
					printf("\nNo se puede editar este contacto, se encuentra vacío\n\n");
				}
				else
				{
					gets(nombre);
					printf("\nInserta el nombre: ");
					gets(nombre);
					printf("Inserta el telefono: ");
					gets(telefono);
					printf("Inserta el email: ");
					gets(email);
					printf("\n");
					
					agenda[i][1] = nombre;
					agenda[i][2] = telefono;
					agenda[i][3] = email;
				}
				break;
			}
			break;
			
			
		case 5:
			
			printf("¿Qué contacto deseas borrar?: ");
			scanf("%i", &contacto_borrado);
			contacto_borrado -= 1;
			
			for (int i = contacto_borrado; i <= contacto_borrado; i++)
			{
				for (int j = 1; j < 4; j++)
				{
					switch (j)
					{
					case 1:
						if (agenda[i][j] == "-")
						{
							printf("\nEl contacto ya se encuentra vacío\n\n");
						}
						else
						{
							agenda[i][j] = "-";
							printf("\nContacto borrado exitósamente\n\n");
						}
						break;
						
					case 2:
						agenda[i][j] = "-";
						break;
						
					case 3:
						agenda[i][j] = "-";
						break;
						
					default:
						printf("xd");
					}
				}
			}
			break;
			
		case 6:
			printf("Gracias por usar la agenda, vuelve pronto!");
			break;
			
		default:
			printf("Opción no válida. Escoja otra vez\n\n");
		}
		
	} while(opcion_usuario != 6);
	
	return 0;
}
