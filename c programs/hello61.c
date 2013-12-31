#include <stdio.h>
void main(){
char a[1000];
    FILE *fptr;
    fptr=fopen("hello.txt","r");
    if(fptr==NULL){
        printf("error");
        exit(0);
    }
fscanf(fptr,"%s",&a);
printf("%s",a);
}
