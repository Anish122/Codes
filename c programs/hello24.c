#include <stdio.h>
#include <math.h>
void main()
{
    int a,b;
printf("enter any 3 digit number in xxx format ie 000 to 999\n");
    scanf("%d", &a);
        int reserve=a;
        int e=0;
        while(a>0){
            b=a%10;
            e=e+pow(b,3);
            a=a/10;
        }
        if(reserve==e){
            printf("%d is an armstrong number",reserve);

        }
        else{
            printf("%d is not an armstrong number",reserve);

        }

}
