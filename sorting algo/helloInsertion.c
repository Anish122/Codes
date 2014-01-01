#include <stdio.h>

void main(){
int a[100],i,n,temp,j,k;
printf("enter the number of element\n");
scanf("%d",&n);
printf("enter the elements\n");
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}

for(i=1;i<n;i++){
    j=i-1;

    while(j>=0 && a[j+1]<a[j]){
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
        --j;
    }
}
for(i=0;i<n;i++){
    printf("%d ", a[i]);
}
}
