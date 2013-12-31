#include <stdio.h>
#include <stdlib.h>
struct info{
char name;
int age;
int salary;
};
int main(){
    struct info *ptr;
    int i,n;
 //   again:
    printf("enter the number of elements: \n");
    scanf("%d",&n);
    ptr=(struct info*)malloc(n*sizeof(struct info));
  /*  if(ptr==NULL){
        printf("not have enough memory!! try again\n");
        goto again;
    }*/
    for(i=0;i<n;i++){
        printf("enter the name of person %d\n",i+1);
        scanf("%s",&(ptr+i)->name);
        printf("enter the age of person %d\n",i+1);
        scanf("%d",&(ptr+i)->age);
        printf("enter the salary of person %d\n",i+1);
        scanf("%d",&(ptr+i)->salary);

    }
    printf("name\tage\tsalary");
    for (i=0;i<n;i++){
    printf("%s %d %d",(ptr+i)->name,(ptr+i)->age,(ptr+i)->salary);
}
return 0;
}
