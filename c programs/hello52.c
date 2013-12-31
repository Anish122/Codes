#include<stdio.h>
#include <string.h>

void reversal(char arr[100]);

void main(){
    int length;
    char arr[100];
printf("enter the string:\n");
gets(arr);
reversal(arr);
puts(arr);
}


void reversal(char arr[]){
    int length,i,j,temp[100];
    length=strlen(arr);

    for(i=length-1,j=0;i+1!=0;--i,++j){
        temp[j]=arr[i];

    }
   // temp[j]!='\0';
strcpy(arr,temp);
}
