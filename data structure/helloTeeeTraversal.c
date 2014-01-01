#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100

struct BinTree{
int data;
struct BinTree *left;
struct BinTree *right;
};
typedef struct BinTree node;


node *root=NULL;
node *temp=NULL;
int arr[MAX];
node *insertv(node *p,int q);
int try=0;
void print(node *p);
void preorder(node *p);
void inorder(node *p);
void postorder(node *p);


void preorder(node *ptr){
int counter=0,z;
int prestack[100];
int pretop=0;
prestack[pretop]=NULL;
int preArr[100];
int preCount=0;
while(ptr!=NULL){
    preArr[preCount]= ptr->data;
    preCount++;
    counter++;
    if(ptr->right!=NULL){
            pretop++;
    prestack[pretop]=ptr->right;
    }

    if(ptr->left!=NULL){
            ptr=ptr->left;
    }else{
    ptr=prestack[pretop];
    pretop--;
    }
}
printf("\npreorder traversal is: ");
for(z=0;z<counter;z++){
printf("%d ",preArr[z]);}
}

void inorder(node *ptr){
int instack[MAX];
int intop=0;
instack[intop]=NULL;
int inarr[MAX];
int incount=0;
int counter=0,z;
again:
    while(ptr!=NULL){
        intop++;
    instack[intop]=ptr;
ptr=ptr->left;
}
ptr=instack[intop];
intop--;
while(ptr!=NULL){
inarr[incount]=ptr->data;
incount++;
counter++;
if(ptr->right!=NULL){
    ptr=ptr->right;
    goto again;
}
ptr=instack[intop];
intop--;
}
printf("\nInorder traversal is: ");
for(z=0;z<counter;z++){
printf("%d ",inarr[z]);}
}


void postorder(node *ptr){
node *temp;int postop=0;
int postStack[MAX];postStack[postop]=NULL;
int postCount=0;int postArr[MAX];int counter=0,z;
while(postStack[postop]!=NULL){
while(ptr!=NULL){
    if (ptr->right!=NULL){postop++;postStack[postop]=ptr->right;}
    postop++;
    postStack[postop]=ptr;
    ptr=ptr->left;
    }
ptr=postStack[postop];
    postop--;
  if(ptr->right && postStack[postop]==ptr->right){
        temp=ptr;
        ptr=postStack[postop];
    postop--;
    postop++;
    postStack[postop]=temp;
    }
else{
    postArr[postCount]=ptr->data;
    postCount++;counter++;
    ptr=postStack[postop];
    postop--;
}
}

printf("\nPostorder traversal is: ");
for(z=0;z<counter;z++){
printf("%d ",postArr[z]);}
}


node *insertv(node *temp,int info){
if(temp==NULL){

       temp=(node*)malloc(sizeof(node));
            temp->left=NULL;
            temp->right=NULL;
            temp->data=info;
        //   arr[try]=temp->data;
         //   try++;
            }
            else{
                if(temp->data > info){
              temp->left=  insertv(temp->left,info);
                }
                if(temp->data < info){
                temp->right=insertv(temp->right,info);
                }
                }
                return (temp);
                }

void main(){
    int n,info,j,i;
printf("enter number of node in the tree:\n");
scanf("%d",&n);
printf("enter the value of %d nodes\n",n);
for(i=0;i<n;i++){
scanf("%d",&info);
root=insertv(root,info);
}
preorder(root);
inorder(root);
postorder(root);
}
