#include <stdio.h>
#define MAX 15
#include <stdlib.h>
struct stackLL{
int data;
struct node *next;
};

typedef struct stackLL node;
node *new,*top,*item,*start;
void push(int data);
void pop();
void show();
void showlist();
void main(){
    top=NULL;
    int data;
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
 scanf("%d",&data);
 push(data);
// print();
break;
case 2:
item=top;
if(item==NULL){printf("stack empty\n");break;}
pop();
break;
case 3:
  item=top;
if(item==NULL){printf("stack empty\n");break;}
show();
break;
case 4:
item=top;
if(item==NULL){printf("stack empty\n");break;}
showlist();
break;
case 0:
    exit(0);
default:
    break;
    }
 goto again;
}

void push(int dataPush){
    new=(node*)malloc(sizeof(node));
        new->data=dataPush;
        new->next=top;
        top=new;

        printf("pushed data is %d \n",top->data);
        }


void pop(){
    node *temp;
temp=(node*)malloc(sizeof(node));
temp=top;
top=top->next;
printf("popped data is %d\n", temp->data);
free(temp);
}

void show(){
printf("top of the stack is %d\n",top->data);
}

void showlist(){
    node *temp1;
    start=top;
    printf("Top<- ");
    while (start!=NULL){
  node *temp;
temp1=(node*)malloc(sizeof(node));
temp1=start;
start=start->next;
printf("%d ->", temp1->data);
free(temp);
}
printf(" Bottom");
}
