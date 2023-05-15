#include <stdio.h>
int main()
{
    char nombre[40];
    printf("Ingrese:");
    fgets (nombre,40,stdin);
    printf ("Hola, %s \n ", nombre);
    return 0;
}