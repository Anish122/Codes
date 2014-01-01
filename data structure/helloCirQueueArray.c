#include <stdio.h>
#define MAX 5
void insert();
void delete();
void print();
int front=-1;
int rear=-1;
int queue[MAX];

void main(){
    int choice;
    again:
printf("\n");
printf("1. to add a number in a queue\n");
printf("2. to remove a number from a queue\n");
printf("3. to see the queue\n");
printf("0. to exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch (choice){
case 1:
    if((rear==MAX-1 && front==0)|| front==rear+1){printf("Queue is full!!\n");break;}
   insert();
   print();
   break;
case 2:
    if(front==-1){printf("queue is empty!!");break;}
   delete();
   print();
   break;
case 3:
print();
break;
case 0:
    exit(0);
}
goto again;
}


void insert(){
    int InsertData;
printf("enter the data to insert in the queue:\n");
scanf("%d",&InsertData);
if(front==-1){front=rear=0;}
else if(rear==(MAX-1)){rear=0;}
else{rear=rear+1;}
queue[rear]=InsertData;
printf("%d entered successfully at position %d\n",queue[rear],rear);
}
void delete(){
    int temp;
temp=queue[front];
queue[front]=NULL;
if(front==rear){
    front=-1;
    rear=-1;
}
else if(front==MAX-1){
    front=0;
}
//else if(rear==0){rear=MAX-1;}
else{front=front+1;}
printf("%d removed successfully from %d\n",temp,front-1);
        }


void print(){
    int j=front;
    int k=rear;
    int i;
if(rear==-1){printf("queue is empty\n");}
else{

        if(front<=rear){printf("front ->");for(i=j;i<=rear;i++){printf("%d ->",queue[i]);}}
       if(front>rear){for(i=k;i<front;i++){if(queue[i]!=NULL){printf("%d ->",queue[i]);}} }
        printf("rear ");
}
}

