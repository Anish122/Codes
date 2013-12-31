#include <stdio.h>
void main()
{
    int a,b,c,d,p,q;
    printf("enter the  numbers \n");
        scanf("%d %d",&a,&b);
        p=a;
        q=b;
        if (a<b){
            c=a;
            a=b;
            b=c;
        }
   jum:     if(a%b==0){
            printf("HCF is %d \n", b);
            printf("LCM is %d \n", (p*q)/b);
        }else{
            d= a%b;
            a=b;
            b=d;
            goto jum;
        }

}
