#include <stdio.h>
#define MAX 15
#include <stdlib.h>
void push(char data);
char pop(void);
char stacktop(void);
void print();
char stack[MAX];
int top =-1;

void main(){
    char data;
int choice,a;
again:
    printf("\n1. push a number to the stack\n");
    printf("2. pop a number from the stack\n");
    printf("3. show the number on the top of the stack\n");
    printf("4. see the stack \n");
    printf("0. exit\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);
    switch(choice){
case 1:
printf("enter the character to push:\n");
 scanf("%s",&data);
 push(data);
 print();
break;
case 2:
    if(top==-1){
        printf("stack empty");
    }
    else{
        printf("popped data is %c", pop());
    }
    break;
case 3:

printf("%c", stacktop());
    break;
case 4:
    print();
case 0:
    exit(0);
default:
    break;
    }
 //   printf("\n");
 //   printf("enter 1 to continue else 0 to exit");
 //   scanf("%d",&a);
 goto again;

}

void push(char dataPush){
    if(top>=MAX)
    {
    printf("stack full\n");
    return;
    }
else{
top++;
stack[top]=dataPush;
}
}
char pop(){
char data;
data=stack[top];
top--;
return data;
}

void print(){
    int i;
    printf("\ncurrent stack items are:\n");
    printf("bottom ");
for(i=0;i<=top;i++){
    printf("%c ->",stack[i]);
}
printf(" top");
}

char stacktop(void){
    char item;
if (top==-1){
        printf("stack is empty\n");
    return(NULL);
}
else{
    item=stack[top];
    return item;
}
}
