#include <stdio.h>
#include <stdlib.h>
typedef struct bstree node;
struct bstree{
int data;
node *right;
node *left;
};

node *temp,*root;
node *create(node *temp,int info);
int searc(node *temp,int key);
void insert(node *temp,int key);
void delete(node *temp,int key);

int searc(node *ptr,int key){
int found=0;
if(ptr==NULL){
        return;
}
if(ptr->data==key){
printf(" found");return;
found=1;
}
if(ptr->data > key){
     //   printf(" left");
    ptr= ptr->left;
}
else{
  //  printf(" right");
    ptr= ptr->right;
}
while(ptr!=NULL){
    if(ptr->data==key){
           printf(" found");return;
           found=1;
    }else{
    if(ptr->data>key){
        ptr=ptr->left;
}
    else{
        ptr=ptr->right;
              }
            }
    }
if(found==0){printf("not found;");}
}



node *create(node *temp,int info){
if(temp==NULL){
    temp=(node*)malloc(sizeof(node));
    temp->data=info;
    temp->left=NULL;
    temp->right=NULL;
}
else{
    if(temp->data>info){
    temp->left=create(temp->left,info);
}
if(temp->data<info){
    temp->right=create(temp->right,info);
}
}
return (temp);
}

void insert(node *temp,int info){
node *new;
node *temp1=NULL;

new=(node*)malloc(sizeof(node));
while(temp!=NULL){
if(temp->data==info){
    printf("node already exists\n");
    break;
}
else if(temp->data>info){
 temp1=temp;
temp=temp->left;
}
else{
        temp1=temp;
    temp=temp->right;
}
}
if(temp1->data > info){
        new->data=info;
        new->left=NULL;
        new->right=NULL;
        temp1->left=new;
        printf("%d node successfully inserted\n",new->data);
    }else{
        new->data=info;
        new->left=NULL;
        new->right=NULL;
        temp1->right=new;
        printf("%d node successfully inserted\n",new->data);
        }
}

void delete(node *temp,int info){
node *parent,*inord;
if(temp->data==info){parent=NULL;}
else if(temp->data>info){parent=temp;temp=temp->left;}
else {parent=temp;temp=temp->right;}
while(temp->left!=NULL ||temp->right!=NULL){
    if(temp->data==info){printf("a");break;}
    else if(temp->data>info){printf("b");parent=temp;temp=temp->left;}
    else{parent=temp;temp=temp->right;printf("c");}
}
printf("\n%da%d",temp->data,parent->data);
        if(temp->right==NULL && temp->left==NULL){if(parent->left==temp){parent->left=NULL;}else{parent->right=NULL;}free(temp);return; }
        if(temp->right!=NULL && temp->left==NULL){if(parent->left==temp){parent->left=temp->right;}else{parent->right=temp->right;}free(temp);return;}
        if(temp->right==NULL && temp->left!=NULL){if(parent->left==temp){parent->left=temp->left;}else{parent->right=temp->left;}free(temp);return;}
        if(temp->right!=NULL && temp->left!=NULL){
       //     parent=temp;
            inord=temp->right;
            while(inord->left!=NULL){
                    parent=inord;
                inord=inord->left;
            }
            printf("cdscd");
            temp->data=inord->data;
            temp=parent;
        }

}




void main(){
    int choice,key,r,n,info,i;
    again:
printf("\n1. To create a tree\n");
printf("2. To search a node in the tree\n");
printf("3. To insert for a node\n");
printf("4. To delete a node\n");
printf("0. exit\n");
printf("enter your choice: ");
scanf("%d",&choice);

switch(choice){
case 1:
    if(root!=NULL){printf("tree already exists\n");}
    else{
            printf("enter the number of nodes: ");
            scanf("%d",&n);
            printf("enter the value of %d nodes\n",n);
            for(i=0;i<n;i++){
                    scanf("%d",&info);
                    root=create(root,info);
                    }
            }
    break;
case 2:
    if(root==NULL){printf("tree not exists\n");}
    else{
        printf("\nenter the element you want to search: ");
        scanf("%d",&key);
        searc(root,key);
    }
    break;
case 3:
    if(root==NULL){printf("tree not exists\n");}
    else{
        printf("\nenter the element you want to insert: ");
        scanf("%d",&key);
        insert(root,key);
    }
    break;
case 4:
    if(root==NULL){printf("tree not exists\n");}
    else{
        printf("\nenter the element you want to delete: ");
        scanf("%d",&key);
        delete(root,key);
        printf("%d deleated successfully",key);
    }
    break;
case 0:
    exit(0);
    }
    goto again;
}
