
#include <stdio.h>
#include <math.h>
int main(){
int i,j,r1,c1,r2,temp;
again:
printf("enter your first matrix row count\n");
scanf("%d", &r1);
printf("enter your first matrix column count\n");
scanf("%d", &c1);
int arr1[r1][c1];
printf("enter your first matrix:\n");
for (i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%d",&arr1[i][j]);
        printf("%d ",arr1[i][j]);
      // or if(j==(c1-1)){printf("\n");}
   }
   printf("\n");
}
printf("\n");
int arr2[c1][r1];
for(i=0;i<r1;++i){
    for(j=0;j<c1;++j){
        arr2[j][i]=arr1[i][j];
//printf("%d ",arr2[j][i]);
// if(j==(c1-1)){printf("\n");}
    }
}
for(i=0;i<c1;++i){
    for(j=0;j<r1;++j){
     printf("%d ",arr2[i][j]);
//or if(j==(r1-1)){printf("\n");}

}
printf("\n");
}

}
