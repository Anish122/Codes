#include <stdio.h>
#include <math.h>
int armstrong(int x);

int armstrong(x){
    int a;
    int add=0;
int b=x;
while(x>0){
    a=x%10;
    add=add+pow(a,3);
    x=x/10;
}
if(add==b){
printf("armstrong number %d\n",add);
}
else{
   printf("not an armstrong number %d\n", add);
}
}

void main(){
    int y;
printf("enter any 3 digit number\n");
scanf("%d",&y);
armstrong(y);
}
