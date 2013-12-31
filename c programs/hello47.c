#include <stdio.h>

int cyclic(int *,int *,int *);

int main(){
    int a,b,c,i,j,k;
    printf("enter 3 numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    i=&a;
    j=&b;
    k=&c;
    cyclic(i,j,k);
    printf("numbers after swapping are: %d %d %d:",a,b,c);
    return 0;
}

int cyclic(int *a,int *b,int *c){
    int temp;
    temp = *a;
    *a=*b;
    *b=*c;
    *c=temp;
}
