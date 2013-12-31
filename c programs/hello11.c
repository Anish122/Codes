#include<stdio.h>
void main(){
int x,y,z;

 printf("enter any year \n");
 scanf("%d",&x);
 y= x%4;
 if (y==0){
    printf("leap year \n");
 }
 else{
    printf("not a leap year");
 }

}

