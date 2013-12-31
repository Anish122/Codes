#include <stdio.h>

int prime(int x,int y);

int prime(x,y){
int c,d,i,j,k,l,flag;
int counter=0;
d=y;
for(i=x+1;i<y;++i){
flag=0;
    for(j=2;j<=i/2;j++){

        if(i%j==0){
          flag=1;
          break;
        }
    }

    if(flag==0){

    //   printf("%d ",i);
         c=d-i;
    //    printf("%d \n",c);
      int flag1;

         for(k=2;k<=c/2;k++){
flag1=0;

            if(c%k==0){
                flag1=1;
break;
            }
         }

         if(flag1==0){
l=d-c;
            printf("%d %d\n",l,c);
            counter++;
         }

}

    }
    printf("count : %d\n",counter);
}


void main(){
    int a,b;

    printf("enter the number :\n");
    scanf("%d",&b);
 prime(1,b);
}
