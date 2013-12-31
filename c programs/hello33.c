#include <stdio.h>
int fact(int x);
void main(){
    int a;
printf("enter the positive integer: \n");
scanf("%d",&a);
printf("%d!= %ld \n",a,fact(a));
}
int fact(int x){
if(x!=1){
return x * fact(x-1);
}
}




