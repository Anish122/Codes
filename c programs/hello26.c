#include<stdio.h>
void main(){
    int a,b;
    int i=2;
    int flag;
printf("enter any number \n");
scanf("%d", &a);
printf("1 ");

again:if(a>1){
    if(a%i==0){
    a=a/i;
flag=1;
}
else{
    i++;
    goto again;
}
if(flag==1){
    printf("%d ",i);
    goto again;
}
}else{exit(0);}
}
