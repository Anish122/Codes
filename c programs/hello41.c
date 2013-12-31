#include <stdio.h>
#include <math.h>
void main(){
    int a,i,mean,arr[100];
    int temp=0;
    printf("# of entry\n");
    scanf("%d",&a);
    printf("enter the numbers \n");
    for(i=0;i<a;++i){
        scanf("%d",&arr[i]);
if (i>0){
        if(temp>arr[i]){
}

else{
    temp=arr[i];
}
}
}
printf("%d ", temp);
}
