#include <stdio.h>

typedef struct student{
char name[20];
int roll_no ;
float marks;
}stu;

void main(){
int n,i;

stu d1[100];

printf("enter the number of students\n");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("enter the name of student %d\n", i+1);
scanf("%s",&d1[i].name);
printf("enter the roll no of student %d\n", i+1);
scanf("%d",&d1[i].roll_no);
printf("enter the marks of student %d\n", i+1);
scanf("%f",&d1[i].marks);
}
printf("name     rollno     marks\n");
for (i=0;i<n;i++){
printf("%s\t%d\t%.2f\n",d1[i].name,d1[i].roll_no,d1[i].marks );
}
}
