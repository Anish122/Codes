#include <stdio.h>
#include <stdlib.h>

struct twowaylist{
int data;
struct twowaylist *next;
struct twowaylist *previous;
};
typedef struct twowaylist node;

void insert(node *p,int info);
void search(node *p,int info);
void delete(node *p,int info);
void print(node *p);
node *root=NULL;
node *ftemp=NULL,*btemp=NULL;
void insert(node *ftemp,int info){
    node *new;
    new=(node*)malloc(sizeof(node));
    new->data=info;
    if(ftemp==NULL){
            new->previous=NULL;
            new->next=NULL;
            root=ftemp=btemp=new;

            }else{
                    new->next=btemp->next;
                    ftemp=new;
                    btemp->next=ftemp;
                    ftemp->previous=btemp;
                    btemp=ftemp;


            }
            printf("\n%d node added successfully\n",info);
            }

void search(node *temp,int info){
    int counter=0;
    int check=0;
while(temp!=NULL){
        counter++;
if(temp->data==info){
        check=1;
    printf("key found at position %d\n",counter);
break;
}
temp=temp->next;
}
if(check==0){printf("key not found\n");}
}


void delete(node *temp,int info){
 int counter=0;
    int check=0;
    node *temp1,*temp2;

while(temp!=NULL){
        counter++;
if(temp->data==info){check=1;
temp1=root;
root=root->next;
free(temp1);
printf("key successfully deleated from %d position\n",counter);
break;
}
else if(temp->next!=NULL){
        if(temp->next->data==info){
            check=1;
 temp2=temp->next;
temp1=temp->next->next;
temp->next=temp->next->next;
temp1->previous=temp1->previous->previous;
free(temp2);
printf("key successfully deleated from %d position\n",(counter+1));
break;
}
}
temp=temp->next;
}
if(check==0){printf("key not found\n");}

}



void print(node *root){
node *temp=NULL;
temp=root;
printf("start <->");
while(temp!=NULL){
    printf("%d <->",temp->data);
    temp=temp->next;
    }
printf(" end");
}

void main() {
int i,choice,key;
again:
printf("\n1. to insert a node\n");
printf("2. to search for a node\n");
printf("3. to delete a node\n");
printf("4. see the list\n");
printf("0. exit\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice){
case 1:
    printf("enter the value to insert\n");
    scanf("%d",&key);
    insert(root,key);
    break;
case 2:
    if(root==NULL){printf("list empty!!"); }
    else{
    printf("enter the value to search for.\n");
    scanf("%d",&key);
    search(root,key);
    }
    break;
case 3:
   if(root==NULL){printf("list empty!!"); }
    else{
    printf("enter the value to delete.\n");
    scanf("%d",&key);
    delete(root,key);
    }
    break;
case 4:
    if(root==NULL){printf("list empty!!"); }
    else{
   print(root);
    }
    break;

case 0:
    exit(0);

}

goto again;
}



