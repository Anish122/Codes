#include <stdio.h>


int sum(int x);

int sum(x){
if(x>0)
x= x+ sum(x-1);

return(x);
}


void main(){
    int a;
printf("enter the count: \n");
scanf("%d",&a);
printf("sum= %d \n",sum(a));
return 0;

}
