#include <stdio.h>
int main()
{
    int i,sum;
    
    
    printf("Los primeros 20 multiplos de 3 son:\n");
    for(i=1; i<= 20; i++){
    sum=3*i;
    printf("3 x %d = %d \n", i,sum);
    }
    return 0;
}