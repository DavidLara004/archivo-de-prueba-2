#include "stdio.h"
int main(){
  int cal=0;
  do{
     printf("Deme la calificacion\n");
     scanf("%d", &cal);
  } while (cal < 0 || cal > 10);
  printf("\nGracias");
}
