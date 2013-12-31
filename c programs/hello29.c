#include <stdio.h>

int prime(int x,int y);

int prime(x,y){
int c,d,i,j,flag;
for(i=x+1;i<y;++i){
flag=0;
    for(j=2;j<=i/2;j++){

        if(i%j==0){
          flag=1;
          break;
        }
    }
    if(flag==0){
            printf("%d ",i);

    }
}
}

void main(){
    int a,b;
    printf("enter first number of an interval\n");
    scanf("%d",&a);
    printf("enter second number of an interval\n");
    scanf("%d",&b);
 prime(a,b);
}
