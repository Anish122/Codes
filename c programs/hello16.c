#include<stdio.h>

#include<stdio.h>
int main(){
    int x,mult,y;
printf("enter the number for whome u want to find the table \n");
scanf("%d",&x);
printf("enter the count: \n");
scanf("%d",&y);

                int i;
            for(i=1;i<y+1;i++){
            int result;
            result=x*i;
            printf("%d * %d = %d \n", x,i,result);


}

return 0;
}
