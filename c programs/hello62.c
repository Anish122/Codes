#include <stdio.h>

void main(){
char a[1000];
    FILE *fptr;
    fptr=fopen("hello62.c","rb");
    if(fptr==NULL){
        printf("error");
        exit(0);
    }
fread(a,sizeof(a),1,fptr);
printf("%s",a);
}
