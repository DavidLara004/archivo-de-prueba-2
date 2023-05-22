#include <stdio.h>
main()
{
    int num, i, sum;
    printf("Ingrese el nu   mero que quiere: \n ");
    scanf("%d", &num);
    for(i=1; i< 10; i++){
    sum=num*i;
    printf("%d x %d=%d \n", num,i,sum);
    }
    return 0;
}