#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i;
    srand (time(NULL));
    int num[10];
    for (i =0 ; i < 10; i++)
    {
        num[i]=rand()%100;
    }
    for (i =0 ; i < 10; i++)
    {
        printf("%d", num[i]);
    }
    printf("\n");
    for (i = 9 ; i >= 0; i--)
    {
        printf("%d", num[i]);
    }
    return 0;
}
