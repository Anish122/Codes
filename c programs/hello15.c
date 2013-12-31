#include<stdio.h>

int factorial();

void main(){
    int x,fact1;
printf("enter the number for whom u want to find the factorial \n");
scanf("%d",&x);
fact1=factorial(x);
printf("factorial of %d is %d ", x, fact1);

}

int factorial(int y){
if (y==0){
return 1;
}
else{
int fact,i;
for(i=y;i>0;i--){
fact= y * factorial(y-1);}
return (fact);
}
}
