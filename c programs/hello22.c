#include <stdio.h>
void main()
{
    int a,b,c,d,i;
    printf("enter any number\n");
    scanf("%d", &a);
    b=a/2;
    i=2;
    while(i<b+1){
        if (a%i==0){
          printf("composite number\n");
          exit(0);
        }
        else{
}
i++;
    }
    printf("prime number\n");
}
