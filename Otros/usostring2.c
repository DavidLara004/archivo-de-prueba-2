#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
srand(time(NULL));
int nomb[10];
for (int i=0;i<10;i++){
nomb[i]=rand()%100;
}
for (int i=0;i<10;i++){
printf("%d ",nomb[i]);
}
printf("\n");
for (int i=9;i>=0;i--){
printf("%d ",nomb[i]);
} 
return 0;
}

