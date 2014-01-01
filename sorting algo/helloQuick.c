#include <stdio.h>
void quickSort(int a[],int left, int right);

void main(){
    int n,i,a[100];
printf("enter the value of N\n");
scanf("%d",&n);
printf("enter the %d elements\n",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
quickSort(a,0,(n-1));

printf("sorted list is:\n");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
}

void quickSort(int a[],int left,int right){
int newleft,newright,mid,temp;
newleft=left;
newright=right;
mid=(left+right)/2;
while(newleft<=newright){
while(newleft<right && a[newleft]<a[mid]){
    newleft++;
}
while(newright>left && a[newright]>a[mid]){
    newright--;
}
if(newleft<=newright){
    temp=a[newleft];
    a[newleft]=a[newright];
    a[newright]=temp;
    newleft++;
    newright--;
}
}
if(newleft<right){quickSort(a,newleft,right);}
if(newright>left){quickSort(a,left,newright);}
}

