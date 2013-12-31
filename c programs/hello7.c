#include<stdio.h>
void main(){
int x,y,z;

 printf("enter first number \n");
 scanf("%d",&x);
 if (x>0){
    y=x%2;
    if (y==0){
      printf("entered number is an even number");
    }
    else{
      printf("entered number is a odd number");
    }
 }
 else{
    printf("entered number is neither -ve nor +ve. it is a negative number");
 }

}


