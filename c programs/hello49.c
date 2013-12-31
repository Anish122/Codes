#include<stdio.h>
#include <string.h>
void main(){
    int length,i,j,counter;
    char arr1[100],arr2[100];
    int temp=0;
printf("enter any string : \n");
gets(arr1);
length = strlen(arr1);

for(i=0;i<length;i++){
    arr2[i]=(int)arr1[i];
   // printf("%d ",arr2[i]);
}

for(i=0;i<length;i++){
    for(j=0;j<length-i;j++){
        if(arr2[j]>arr2[i]){
            temp=arr2[j];
            arr2[j]=arr2[i];
            arr2[i]=temp;
        }
    }
}
printf("\n");
/*for(i=0;i<length;i++){
    printf("%d ",arr2[i]);
}*/
printf("\n");

for(i=0;i<length;i++){
     counter=0;
    for(j=0;j<length;j++){
        if(arr2[i]==arr2[j] ){
            counter++;
        }

}
printf("%c %d\n",arr2[i],counter);
}
}
