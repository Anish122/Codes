#include <stdio.h>
void main(){
    int a,b,d,result=0;
printf("enter any integer \n");
scanf("%d",&a);
d=a;
while(a>0){
    b=a%10;
result = result*10+b;
    a=a/10;
}

printf("reverse of %d is %d",d,result);
}
