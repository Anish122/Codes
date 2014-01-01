#include <stdio.h>

void main(){
int a[100],i,n,temp,j;
int l;
printf("enter the number of element\n");
scanf("%d",&n);
printf("enter the elements\n");
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}
l=0;
for(j=0;j<n-1-l;j++){
l++;
for(i=0;i<n;i++){
if(a[i]>a[i+1]){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}

}
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}
