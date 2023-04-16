#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Agenda Agenda;

struct Agenda
{
	int ID;
	char nombre[100];
	char telefono[100];
	char email[150];
};

void regresar()
{
	char tecla;
	
	do
	{
		fflush(stdin);
		printf("Presiona la tecla 'v' para regresar: ");
		scanf("%c", &tecla);
		
		if (tecla == 'v' || tecla == 'V'){
			system("cls");
			break;
		}
		
	} while(tecla != 'v' || tecla != 'V');
}

int main(/*int argc, char *argv[]*/) {
	
	//Declaración de variables
	int opcion_usuario;
	int leer_contacto;
	int borrar_contacto;
	int editar_contacto;
	int comparar;
	int contador = 0;
	char nuevo_nombre[50];
	char nuevo_telefono[50];
	char nuevo_email[50];
	
	//Nueva agenda
	Agenda contactos[] = {
		{ 1, "-", "-", "-"},
		{ 2, "-", "-", "-" },
		{ 3, "-", "-", "-" },
		{ 4, "-", "-", "-" },
		{ 5, "-", "-", "-" },
		{ 6, "-", "-", "-" },
		{ 7, "-", "-", "-" },
		{ 8, "-", "-", "-" },
		{ 9, "-", "-", "-" },
		{ 10, "-", "-", "-" },
	};
	
	do{
		
		for (int i = 0; i < 10; i++){
			
			comparar = strcmp(contactos[i].nombre, "-");
			
			if (comparar != 1) {
				contador += 1;
			}
		}
		
		printf("Bienvenido a tu agenda personal (%i contactos)\n\n", 10 - contador);
		printf("\t1. Listar contactos\n");
		printf("\t2. Crear un contacto\n");
		printf("\t3. Leer contacto\n");
		printf("\t4. Editar un contacto\n");
		printf("\t5. Borrar un contacto\n");
		printf("\t6. Salir del programa\n");
		printf("\nEscoge una opción: ");
		scanf("%i", &opcion_usuario);
		printf("\n");
		
		switch (opcion_usuario)
		{
			case 1:
				for (int i = 0; i < 10; i++){
					printf("ID: %i\n", contactos[i].ID);
					printf("Nombre: %s\n\n", contactos[i].nombre);
				}
				regresar();
				break;

			case 2:
				if (contador > 0){
					
					for (int i = 0; i < 10; i++){
						
						comparar = strcmp(contactos[i].nombre, "-");
						
						if (comparar != 1) {
							gets(nuevo_nombre);
							printf("Inserta el nombre: ");
							//scanf("%s", &nuevo_nombre);
							gets(nuevo_nombre);
							printf("Inserta el telefono: ");
							scanf("%s", &nuevo_telefono);
							printf("Inserta el email: ");
							scanf("%s", &nuevo_email);
							printf("\n");
							
							strcpy(contactos[i].nombre, nuevo_nombre);
							strcpy(contactos[i].telefono, nuevo_telefono);
							strcpy(contactos[i].email, nuevo_email);
							printf("Contacto añadido exitósamente\n\n");
							break;
						}
					}
					regresar();
					break;
				}
				else{
					printf("\nAgenda llena\n");
					regresar();
					break;
				}
				
			case 3:
				printf("¿Qué contacto deseas leer?: ");
				scanf("%i", &leer_contacto);
				leer_contacto -= 1;
				
				printf("\nID: %i\n", contactos[leer_contacto].ID);
				printf("Nombre: %s\n", contactos[leer_contacto].nombre);
				printf("Teléfono: %s\n", contactos[leer_contacto].telefono);
				printf("Email: %s\n\n", contactos[leer_contacto].email);
				
				regresar();
				break;
				
			case 4:
				printf("¿Qué contacto deseas editar?: ");
				scanf("%i", &editar_contacto);
				editar_contacto -= 1;
				
				comparar = strcmp(contactos[editar_contacto].nombre, "-");
				
				if (comparar == 1) {
					printf("\nInserta el nombre: ");
					scanf("%s", &nuevo_nombre);
					printf("Inserta el telefono: ");
					scanf("%s", &nuevo_telefono);
					printf("Inserta el email: ");
					scanf("%s", &nuevo_email);
					printf("\n");
					
					strcpy(contactos[editar_contacto].nombre, nuevo_nombre);
					strcpy(contactos[editar_contacto].telefono, nuevo_telefono);
					strcpy(contactos[editar_contacto].email, nuevo_email);
					printf("Contacto editado exitósamente\n\n");
					regresar();
					break;
				}
				else{
					printf("\nEl contacto se encuentra vacío\n\n");
					regresar();
					break;
				}
				
			case 5:
				printf("¿Qué contacto deseas borrar?: ");
				scanf("%i", &borrar_contacto);
				borrar_contacto -= 1;
				
				comparar = strcmp(contactos[borrar_contacto].nombre, "-");
				
				if (comparar == 1) {
					strcpy(contactos[borrar_contacto].nombre, "-");
					strcpy(contactos[borrar_contacto].telefono, "-");
					strcpy(contactos[borrar_contacto].email, "-");
					printf("\nContacto borrado exitósamente\n\n");
					regresar();
					break;
				}
				else{
					printf("\nEl contacto ya se encuentra vacío\n\n");
					regresar();
					break;
				}
				
			case 6:
				printf("Gracias por usar la agenda, vuelve pronto!");
				break;
				
			default:
				printf("Opción no válida. Escoja otra vez\n\n");
				regresar();
		}
		
	} while(opcion_usuario != 6);
	
	return 0;
}
