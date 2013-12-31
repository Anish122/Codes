#include <stdio.h>
void main()
{
    int x,i;
    printf("enter count of fibonacci \n");
    scanf("%d",&x);
    int result[x+2];
    for(i=0;i<x+2;i++){
           result[0]=1;
            result[1]=0;
        result[i+2]=result[i+1]+result[i];
        printf("%d ",result[i+2]);
    }

}
