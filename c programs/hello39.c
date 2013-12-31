#include <stdio.h>
#include <math.h>
int main(){
int i,j,k,r1,c1,r2,c2,add[10][10];
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
        if(j==(c1-1)){printf("\n");}
   }
}
//second matrix
printf("enter your second matrix row count\n");
scanf("%d", &r2);
printf("enter your second matrix column count\n");
scanf("%d", &c2);
int arr2[r2][c2];
printf("enter your second matrix:\n");
for (i=0;i<r2;i++){
    for(j=0;j<c2;j++){
        scanf("%d",&arr2[i][j]);
        printf("%d ",arr2[i][j]);
        if(j==(c2-1)){printf("\n");}
   }
}
if (r1!=r2 && c1!=c2)
    {
        printf("Error! rows or column of first matrix is not equal to row and column of second matrix.Enter Again!\n");
        goto again;
    }

for(i=0; i<r1; ++i)
    for(j=0; j<c1; ++j)
    {
       add[i][j]=0;
    }

for(i=0; i<r1; ++i)
    for(j=0; j<c1; ++j)

    {
        add[i][j]+=arr1[i][j]+arr2[i][j];
    }
    printf("\n matrix after adding 2 matrix will be:\n");
for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        printf("%d  ", add[i][j]);
        if(j==(c1-1)){printf("\n");}
    }
}
return 0;
}
