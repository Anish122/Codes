#include<stdio.h>
int hcf(int x, int y);
void main(){
    int a,b;
printf("enter the  numbers \n");
        scanf("%d %d",&a,&b);
        printf("hcf: %d",hcf(a,b));
}

int hcf(int x, int y){
if(y!=0){
    return hcf(y,x%y);
}
else{
    return x;
}

}
