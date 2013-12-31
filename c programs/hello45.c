#include <stdio.h>
void main(){
int i,data[100],n;

printf("enter n: \n");
scanf("%d",&n);
printf("enter element\n");
for(i=0;i<n;i++){
scanf("%d",(data+i));
}
for(i=0;i<n;i++){
    printf("%d ", *(data+i));
}
}
