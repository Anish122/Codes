#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int a,i,j,p,q,r,counter;
    float k,count;
    int arr[100000];
    scanf("%lld", &p);
    scanf("%lld", &q);
    if(p==1){p++;}
    for(i=p;i<=q;i++){
        arr[i-p]=1;
    }
    k=sqrt(q);
  /*  for(i=2;i<=k;i++){
            count=(float)p/(float)i;
            count=ceil(count);
            printf("%.2ffed\n",count);
        while(i*count>=p && i*count<=q){
                if((i*count)-p>=0){
                    arr[(i*(int)count)-p]=0;
                }
                count++;
        }
    }
    printf("dd");*/
    counter=0;
    for(i=p;i<=q;i++){
        if(arr[i-p]==1){
            printf("%lld ",i);
            counter++;
            count=1;
            while(count*i<=q){
                    arr[(i*(int)count)-p]=0;
                count++;
            }
        }
    }
    printf("\n%lld",counter);
    return 0;
}
