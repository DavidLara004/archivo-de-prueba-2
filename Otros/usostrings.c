#include <stdio.h>
#include <string.h>
int main()
{
    char n[30];
    int random[30];
    printf("Ingrese:");
    fgets (n,30,stdin);
    printf("Que hay;");
    for (int i = strlen(n); i>=0; i--)
    {
        printf ("%c \n ", n[i]);
    }
    return 0;
}