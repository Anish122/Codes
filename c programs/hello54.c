#include <stdio.h>

void main(){
    char arr1[100],arr2[100],length;
int i;
printf("enter the first string\n");
//scanf("%s",&arr1);
gets(arr1);
length=strlen(arr1);
for(i=0;i<length;i++){
    arr1[i+length]=arr1[i];
    printf("%d%d\n",i+length,arr1[i+length]);
}
for(i=0;i<(2*length);i++){
printf("%c",arr1[i]);}
}
