#include <stdio.h>
#include <math.h>
int main(){
int i,j,k,r1,c1,r2,c2,mult[10][10];
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
while (c1!=r2)
    {
        printf("Error! column of first matrix not equal to row of second.Enter Again!\n");
   /*     printf("Enter rows and column for first matrix: ");
        scanf("%d%d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d%d",&r2, &c2);*/
        goto again;
    }

for(i=0; i<r1; ++i)
    for(j=0; j<c2; ++j)
    {
       mult[i][j]=0;
    }

for(i=0; i<r1; ++i)
    for(j=0; j<c2; ++j)
    for(k=0; k<c1; ++k)
    {
        mult[i][j]+=arr1[i][k]*arr2[k][j];
    }
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        printf("%d  ", mult[i][j]);
        if(j==(c2-1)){printf("\n");}
    }
}
return 0;
}
