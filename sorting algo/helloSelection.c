#include <stdio.h>

void main(){
int a[100],i,n,temp,j,mini;
int l=0;
printf("enter the number of element\n");
scanf("%d",&n);
printf("enter the elements\n");
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++){
    mini=i;
    for(j=i+1;j<n;j++){
        if(a[j]<a[mini]){
            mini=j;
            }
    }
temp=a[mini];
a[mini]=a[i];
a[i]=temp;
}
for(i=0;i<n;i++){
printf("%d " ,a[i]);
}
}
