#include <stdio.h>
#include <math.h>
void main(){
    int a,i,mean,arr[100];
    int sum=0,sigma=0;
    float s,sd;
    printf("# of entry\n");
    scanf("%d",&a);
    printf("enter the numbers \n");
    for(i=0;i<a;++i){
        scanf("%d",&arr[i]);
        sum +=arr[i];
        }
        printf("%d \n",sum);
        mean=sum/a;
        for(i=0;i<a;i++)
        {
            sigma+=pow(arr[i]-mean,2);
        }
        s=sigma/a;
        sd=sqrtf(s);
        printf("%.2f ",sd);
}
