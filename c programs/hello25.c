#include <stdio.h>
void main(){
    int p,q,temp,a,b,i,j;

    printf("enter first 3 digit number of interval\n");
    scanf("%d", &p);
    printf("enter second 3 digit number of interval\n");
    scanf("%d", &q);
    if(p>q){
       temp=p;
      p=q;
       q=temp;
   }else{}

    for(i=(p+1); i<q; i++){
            int add=0;

            while(i>0){
                a=i%10;
                add=add+(a*a*a);
                i=i/10;
                }
            if(add==p+1){
                printf(" %d ",add);

            }else{}

    }

}
