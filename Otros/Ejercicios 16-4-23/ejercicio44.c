#include <stdio.h>

int main()
{
  int num, i, fact = 1;
  printf("-------------Bienvenido--------- \n");
  printf("Escribe un numero para calcular su factorial\n");
  scanf("%d", &num);

  for (i = num; i > 1; i--){
    fact = fact * i;
}
  printf("El factorial de %d es %d\n", num, fact);
  return 0;
}