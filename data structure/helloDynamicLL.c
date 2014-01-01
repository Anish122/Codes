#include <stdio.h>
#include <stdlib.h>
struct list{
int data;
struct list *next;
};
typedef struct list node;
void append();
void prepend();
void delete();
void print();
void between();
int item;

node *start=NULL,*new,*del;
node *box=NULL;
//node *box1=NULL;

void  main(){
    int choice;
   again:
        printf("\n");
        printf("1. append the list\n");
        printf("2. prepend the list\n");
        printf("3. delete the data from list\n");
        printf("4. show the list\n");
        printf("5. insert between two consecutive node\n");
        printf("0. exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
    case 1:
      append();

       print();
        break;
    case 2:
     prepend();
       print();
        break;
    case 3:
         if(start==NULL){printf("list Empty!!\n");break;}
      delete();
        print();
        break;
    case 4:
         if(start==NULL){printf("list Empty!!\n");break;}
        print();
        break;
    case 5:
        if(start==NULL){printf("list empty!!\n");break;}
        between();
        print();
        break;
    case 0:
        exit (0);
    default:
        break;
        }
        goto again;
        }


void append(){
    int appendData;
    new=(node*)malloc(sizeof(node));
    if(new==NULL){
        printf("out of memory\n");
    }
    else{
        printf("entet the data to append\n");
        scanf("%d",&appendData);
        new->data=appendData;
        if(start==NULL){
            start=box=new;

        }
        else{
            box->next=new;

           box=new;         //can also write box=box->next
        }
    }
    box->next=NULL;
    printf("%d successfully inserted \n",box->data);
}

void prepend(){

int prependData;

new=(node*)malloc(sizeof(node));
if(new==NULL){
    printf("out of memory\n");
}
else{
printf("enter the data to prepend\n");
scanf("%d",&prependData);
new->data=prependData;
    if(start==NULL){
        start=box=new;
    }
    else{
        new->next=start;
        start=new;

    }
}
box->next=NULL;
printf("%d successfully inserted \n",start->data);
}


void print(){
    node *j;
    j=start;
    while(j!=NULL){
        printf("%d ->",j->data);
        j=j->next;
    }
}

void between(){
node *new,*temp;
temp=start;
int key,info;
int counter=0;
printf("enter the node after which you want to insert the node\n");
scanf("%d",&info);
printf("enter the value of node you want to insert\n");
scanf("%d",&key);
new=(node*)malloc(sizeof(node));
new->data=key;
if(new==NULL){
printf("memory unavailable\n");
}else{
while(temp->data!=info){

    temp=temp->next;
}
if(temp!=NULL){
if(temp->data==info){
           new->next=temp->next;
           temp->next=new;
           counter++;
        }else{
        printf("node not found");
        }
}
else{
    printf("node not found");
}

        if(counter!=0){
            printf("%d inserted successfully after %d\n",key,info);
        }
}
}

void delete(){
    int key;
    node *j;
    j=start;
printf("enter the number you want to delete");
scanf("%d",&key);
    del=(node*)malloc(sizeof(node));
    if(del==NULL){printf("cant delete!!");}
    else{
        if(start->data==key){del=start;start=start->next;free(del);}
        else{
            while(j->next!=NULL){
                    if(j->next->data==key){del=j->next;j->next=j->next->next;free(del);break;}
                j=j->next;
            }
        }
    }
    printf("%d deleated successfully\n",key);
}

