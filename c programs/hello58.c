#include <stdio.h>

struct student{
char name[20];
int age;
int roll;
};
void display(int n,struct student s[]);
void main(){
    int n,i;
    struct student s[100];
printf("enter the number of student\n");
scanf("%d",&n);

for(i=0;i<n;i++){
    printf("enter the name of student %d\n",i+1);
    scanf("%s",&s[i].name);
    printf("enter the age of student %d\n",i+1);
    scanf("%d",&s[i].age);
    printf("enter the roll no of student %d\n",i+1);
    scanf("%d",&s[i].roll);
}
display(n,s);
}
void display(int n,struct student s[]){
    int i;
    printf("name\tage\troll no\n");
for(i=0;i<n;i++){
    printf("%s\t%d\t%d\n",s[i].name,s[i].age,s[i].roll);
}
}
