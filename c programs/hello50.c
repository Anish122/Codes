#include<stdio.h>
#include <string.h>
void main(){
    int length,i,j,counter;
    char arr1[100],arr2[100];
    int temp=0;
    int counter_v=0,counter_c=0,counter_d=0,counter_s=0,counter_char=0;
printf("enter any string : \n");
gets(arr1);
//length = strlen(arr1);  //can do this by this also;
length=0;
while(arr1[length]!='\0'){
    length++;
}
printf("%d\n",length);
for(i=0;i<length;i++){
    arr2[i]=(int)arr1[i];
    printf("%d ",arr2[i]);
}

for(i=0;i<length;i++){
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
}
printf("\n");

for(i=0;i<length;i++){

    if(arr2[i]==65||arr2[i]==97||arr2[i]==69||arr2[i]==101||arr2[i]==73||arr2[i]==105||arr2[i]==79||arr2[i]==111||arr2[i]==85||arr2[i]==117){
counter_v++;
    }
    else if(arr2[i]>=48 && arr2[i]<=57){
        counter_d++;
    }
    else if(arr2[i]==32){
        counter_s++;
    }
    else if(((arr2[i]>=65 && arr2[i]<=90) ||(arr2[i]>=97 && arr2[i]<=122)) &&(arr2[i]!=65||arr2[i]!=97||arr2[i]!=69||arr2[i]!=101||arr2[i]!=73||arr2[i]!=105||arr2[i]!=79||arr2[i]!=111||arr2[i]!=85||arr2[i]!=117)){
        counter_c++;
    }
    else{
        counter_char++;
    }
}

    printf("vowels: %d \n", counter_v);
    printf("consonent: %d \n", counter_c);
    printf("digits: %d \n", counter_d);
    printf("spaces: %d \n", counter_s);
    printf("special characters: %d \n", counter_char);

}
