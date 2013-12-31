#include <stdio.h>
void main()
{
    int a,b,c,i,j;
    printf("choose between the following:\n");
    printf("1. Pyramid \n");
    printf("2. triangle \n");
    scanf("%d",&a);
    printf("enter the level\n");
    scanf("%d",&b);
switch(a){
    case 1:
      for(i=0;i<b;i++){
        for (j=b-i;j>0;j--){
            printf(" ");
            }
            for(j=0;j<i+1;j++){
                printf(": ");
            }
printf("\n");
      }
      break;
    case 2:
        for(i=0;i<b;i++){
            for(j=0;j<i+1;j++){
                printf("* ");
            }
            printf("\n");
        }
        break;
}
}


