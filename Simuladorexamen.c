#include <stdio.h>
int main()
{
    int candidatos[5];
    int voto;
    int i;
    while (voto!=0)
    {
    printf("Ingrese el primer voto: ");
    scanf("%d", &voto);
     if (voto>=1 && voto<=5)
    {
    candidatos[voto-1]++;
    }
    if (voto==0)
    {
        break;
    }
    if (voto<0 || voto>5)
    {
        continue;
    }
    
    }
    for (i = 0; i < 5; i++)
    {
    printf("Candidato %d : %d", i,candidatos[i]);
    }
    return 0;
}