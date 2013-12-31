#include <stdio.h>
void matrix_form(int arr1[][10],int arr2[][10],int r1,int c1,int r2, int c2);
void display(int mult[][10], int r1,int c1);
void multiplication(int arr1[][10],int [][10],int r1,int c1,int r2, int c2,int mult[10][10]);

int main(){
    int r1,c1,r2,c2,arr1[10][10],arr2[10][10],mult[10][10];
  again:
printf("enter the row and column for first matrix:\n");
scanf("%d %d", &r1,&c1);
printf("enter the row and column for second matrix:\n");
scanf("%d %d", &r2,&c2);
if(c1!=r2){
    printf("Error! rows or column of first matrix is not equal to row and column of second matrix.Enter Again!\n");
    goto again;
}
matrix_form(arr1,arr2,r1,c1,r2,c2);
multiplication(arr1,arr2,r1,c1,r2,c2,mult);
display(mult,r1,c2);
return 0;
}

void matrix_form(int arr1[][10],int arr2[][10],int r1,int c1,int r2, int c2){
    int i,j;
printf("enter your first matrix:\n");
for (i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%d",&arr1[i][j]);
        printf("%d ",arr1[i][j]);
     //  if(j==(c1-1)){printf("\n");}
   }
   printf("\n");
}
printf("\n");
printf("enter your second matrix:\n");
for (i=0;i<r2;i++){
    for(j=0;j<c2;j++){
        scanf("%d",&arr2[i][j]);
        printf("%d ",arr2[i][j]);
      //  if(j==(c2-1)){printf("\n");}
   }
   printf("\n");
}
}
void multiplication(int arr1[][10],int arr2[][10],int r1,int c1,int r2, int c2,int mult[][10]){
    int i,j,k;
    for(i=0;i<r1;++i){
        for(j=0;j<c2;++j){
            mult[i][j]=0;

        }
    }

for(i=0;i<r1;++i){
    for(j=0;j<c2;++j){
        for(k=0;k<c1;++k){
            mult[i][j] += arr1[i][k]*arr2[k][j];
        }
    }
}
}

void display(int mult[][10],int r1,int c2){
    int i,j;
 for (i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        printf("%d ", mult[i][j]);
  //    if(j=c2-1){printf("\n");}
    }
    printf("\n");
 }
}

