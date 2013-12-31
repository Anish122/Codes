#include <stdio.h>
void main()
{
    int i,a,b,c,d;
    printf("enter the  numbers \n");
        scanf("%d %d",&a,&b);
        if (a<b){
            c=a;
            a=b;
            b=c;
        }else{

        }
   jum:     if(a%b==0){
            printf("HCF is %d ", b);
        }else{
            d= a%b;
            a=b;
            b=d;
            goto jum;
        }

}
