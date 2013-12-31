#include<stdio.h>
void main(){
    int i;
int a[3];
printf("enter the numbers \n");
for(i=0;i<3;i++){
scanf("%d",&a[i]);
}
//for(i=0;i<3;i++){
// printf("%d \n", arr[i]);
//}
if (a[1]>a[2] || a[1]>a[3]){
    printf("%d is maximum \n", a[1]);
}
else if (a[3]>a[2] || a[3]>a[1]){
    printf("%d is maximum \n", a[2]);
}
else if (a[2]>a[1] || a[2]>a[3]){
    printf("%d is maximum \n", a[3]);
}
}

