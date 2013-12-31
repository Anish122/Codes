#include <stdio.h>
void reverse();

void main(){
printf("enter a sentence followed \n");
reverse();
return 0;
}

void reverse(){
    char c;
scanf("%c",&c);
if(c != '\n'){
    reverse();
    printf("%c", c);
}
}
