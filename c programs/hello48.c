#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,i;
   int *data;
printf("enter the number of element\n");
scanf("%d", &a);
data=(int*)calloc(a,sizeof(int));
if(data==NULL){
    printf("not enough memory");
    exit(0);
}

printf("enter the element:\n");
for(i=0;i<a;i++){
    scanf("%d",data+i);
}
for(i=0;i<a;i++){
    if(*data<*(data+i)){

        *data=*(data+i);

    }

    }
    printf("%ld ", *data);
    return 0;
}

