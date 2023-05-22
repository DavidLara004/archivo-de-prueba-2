#include <stdio.h>
int main()
{
    int num=0;
    int i;
    int sum; 
    sum=0;
    printf("Ingrese un numero");
    scanf("%d", &num);
    for (i=1; i<=num; i++) {
    sum=sum+i;
    printf("%d ",sum );
    }
    return 0;
}
