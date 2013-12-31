#include<stdio.h>
#include <string.h>
void main(){
    int length,i,j,c,counter=0;
    char arr1[100],arr2[100],arr3[100];
    int temp=0;
printf("enter any string : \n");
gets(arr1);
length = strlen(arr1);

for(i=0;i<length;i++){
    arr2[i]=(int)arr1[i];
    printf("%d ",arr2[i]);
}

/*for(i=0;i<length;i++){
    for(j=0;j<length;j++){
        if(arr2[j]>arr2[i]){
            temp=arr2[j];
            arr2[j]=arr2[i];
            arr2[i]=temp;
        }
    }
}
printf("\n");
for(i=0;i<length;i++){
    printf("%d ",arr2[i]);
}*/
printf("\n");


printf("number of characters: %d\n",length);
for(i=0;i<length;i++){
if((arr2[i]>=65 && arr2[i]<=90) ||(arr2[i]>=97 && arr2[i]<=122)){

arr3[i-counter]=arr2[i];

}
else{counter++;}
}
printf("number of characters removed: %d\n",counter);
printf("number of characters remaining: %d\n",length-counter);
printf("final string: \n");
for(i=0;i<length-counter;i++){
    printf("%c",arr3[i]);
}
}
