#include<stdio.h>
void main(){
    char c;
int x;
printf("enter to check for alphabet \n");
scanf("%c",&c);
x=(int)c;
if ((x>65 && x<90) || (x>97 && x<122)){
    printf("%c is an alphabet", c);
}
else{
    printf("%c not a alphabet", c);
}
}

