#include <stdio.h>
#define MAX 15
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
    if(rear>=(MAX-1)){printf("Queue full!!\n");}
    else{insert();}
    print();
    break;
case 2:
    if(rear==-1){/*printf("queue is empty!!\n");*/}
    else{delete();}
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
printf("enter the data to insert n the queue: \n");
scanf("%d",&InsertData);
rear++;
queue[rear]=InsertData;
if(front==-1){front=0;}
printf("data added is %d\n", queue[rear]);
}


void delete(){
int spam;
spam=queue[front];
if(front==-1){printf("queue is empty\n");}
else{queue[front]=NULL;}
if(front==rear){front=rear=-1;}else{front++;}
printf("removed data is %d\n",spam);
}


void print(){
    int i,j=front;
if(rear==-1){printf("Queue empty\n");}
else{printf("front: ");for(i=j;i<=rear;i++){printf("%d ->",queue[i]); }printf(" :rear");}
}
