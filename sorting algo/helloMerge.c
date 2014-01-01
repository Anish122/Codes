#include <stdio.h>
#include <stdlib.h>
int temp[1000];
void mergesort(int low,int high);
void merges(int low,int mid,int high);
void main(){
    int i,n,a[100];
printf("enter the number of element\n");
scanf("%d",&n);
printf("enter the numbers\n");
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}
mergesort(0,(n-1));

for(i=0;i<n;i++){
printf("%d ", temp[i]);
}
}

void mergesort(int low,int high){
    int mid;
    if(low<high){
    mid=(low+high)/2;
    mergesort(low,mid);
    mergesort((mid+1),high);

    merges(low,mid,high);
    }
}

void merges(int low,int mid,int high){
    int i=0;
int k,h=low,j=mid+1,a[100];
while((h<=mid) && (j<=high)){
    if(a[h]<=a[j]){
        temp[i]=a[h];
        h++;

    }
    else{
        temp[i]=a[j];
        j++;
    }
    i++;
}
while(h<=mid){
temp[i]=a[h];
 i++;
 h++;
}
while(j<=high){
        temp[i]=a[j];
        i++;
        j++;
}
}
