#include<stdio.h>
void main(){
int x,y,z;
int r=0;

 printf("enter any number: \n");
 scanf("%d",&x);
 while(x>0){
y=x%10;
r=r*10+y;
x=x/10;
 }

printf("number obtained by reversing is: %d", r);
}

