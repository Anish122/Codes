#include <stdio.h>
void main(){
    int a,b,d;
    int counter=0;
printf("enter any integer \n");
scanf("%d",&a);
d=a;
while(d>0){
    b=d/10;
    counter++;
    d=b;
}
printf("# of count in %d is %d",a,counter);
}
