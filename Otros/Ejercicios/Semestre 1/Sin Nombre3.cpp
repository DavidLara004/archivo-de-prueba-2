#include <stdio.h>
int main(){
int i;
int a;
   printf("Las cantidades deseadas son:\n");
for (i=1;i<11;i++){
    if(i==5){
        printf("%d\n",i);
        continue;
    }
    a=i+10;
    printf("%d\n",a);
}
return 0;
      }
