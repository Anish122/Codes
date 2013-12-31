#include<stdio.h>
void main(){
int x,y,a;
printf("enter the first number \n");
scanf("%d", &a);
 printf("enter the count of number for which u want the sum:\n");
 scanf("%d",&x);
if (a>0){
 if (x>1){
 y= ((x/2)*(2*a+(x-1)*1));
 printf("%d",y);
 }
 else{
    printf("invalid entry");
 }
}
else{
    printf("first number should be greater than 0: \n ");
}
}

