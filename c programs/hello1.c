#include <stdio.h>
void main()
{
int x,y,z,a;
while(1){
printf("enter 1 to continue or 0 to exit to window:!\n");
printf("enter your choice!\n");
scanf("%d",&a);
switch(a){
    case 1:
printf("enter first integer!\n");
scanf("%d",&x);
printf("enter second integer!\n");
scanf("%d",&y);
z=x+y;
printf("Addition is: %d \n", z);
break;
    case 0:
        exit(0);
    default:
        printf("enter correctly \n");
}
}
}
