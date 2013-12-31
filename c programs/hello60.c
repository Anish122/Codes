#include <stdio.h>
void main(){
    char a[1000];

    FILE *ptr;
    ptr=fopen("editing.txt","w+");
    if(ptr==NULL){
        printf("error");
        exit(0);
    }
printf("enter any sentence:\n");
gets(a);
fprintf(ptr,"%s",a);
fclose(ptr);
return 0;
}
