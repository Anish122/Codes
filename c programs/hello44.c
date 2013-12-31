#include <stdio.h>
void main(){
    int a,i,j,arr[100];
    int temp=0;
printf("enter the number of element in the array\n");
scanf("%d",&a);
printf("enter the number\n");
for(i=0;i<a;i++){
    scanf("%d",&arr[i]);

}
for(i=0;i<a;i++){
    for(j=0;j<i;j++){
        if(arr[j]>arr[i]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        else{}
    }
}
printf("\nsorted list will be: \n");
for(i=0;i<a;i++){
    printf("%d ", arr[i]);
}
}
