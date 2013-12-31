#include <stdio.h>
#include <math.h>
void main(){
int c,i=0,arr[i];
float add=0;
printf("enter the count of numbers\n ");
scanf("%d", &c);

for(i=0;i<c;i++){
    printf("enter the numbers");
scanf("%d",&arr[i]);
add=add+arr[i];
}
printf("average of these %d numbers is: %.2f", c,(add/c));
}
