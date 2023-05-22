#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int A[3][3];
    int i,j;
    srand(time(NULL));
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
       A[i][j] = rand() % 10 + 1;
        }    
    }
   
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d ", A[i][j]);
        }    
        printf("\n");
    }
    return 0;
}
