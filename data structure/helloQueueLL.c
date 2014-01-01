#include <stdio.h>

struct queue{
int data;
struct queue *next;
};
typedef struct queue node;

node *front=NULL,*root,*rear=NULL;

void insert();
void delete();
void print();

void main(){
    int choice;
  again:
printf("\n");
printf("1. to add a number in a queue\n");
printf("2. to remove a number from a queue\n");
printf("0. to exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch (choice){
case 1:
insert();
print();
    break;
case 2:
    if(front==NULL){printf("stack empty\n");break;}
    delete();
   print();
    break;

case 0:
    exit(0);
}
goto again;
}


void insert(){
    int InsertData;
    root=(node*)malloc(sizeof(node));
    if(root==NULL){
        printf("out of memory\n");
    }
    printf("enter the data to insert:\n");
    scanf("%d",&InsertData);
    root->data=InsertData;
    if(front==NULL){
        front=rear=root;
        rear->next=NULL;
    }else{
        if(front==rear){
            rear=root;
            front->next=rear;
        }
        else{
            rear->next=root;
            rear=rear->next;
        }
    }
    rear->next=NULL;
    printf("data inserted is %d\n",rear->data);
}


void delete(){
    node *temp1=NULL;
if(front==NULL){}
else{
        temp1=front;
        front=front->next;
        printf("removed data is %d\n",temp1->data);
        free(temp1);
    }

}



void print(){
    node *j = front;
    printf("\n");

printf("front ->");
while(j!=NULL){printf("%d ->",j->data);j=j->next;}
printf("rear");
}
