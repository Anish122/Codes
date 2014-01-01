#include <stdio.h>
#include <stdlib.h>
int heap[100],n;


void delete(){
    int info,i=0,temp,c,root;
printf("enter the node to delete ");
scanf("%d",&info);
while(i<n){
    if(heap[i]==info){break;}
    i++;
    }
temp=heap[i];
heap[i]=heap[n-1];
heap[n-1]=temp;
n--;
for(i=1;i<n;i++){
    c=i;
    do{
        root=(c-1)/2;
        if(heap[root] < heap[c]){
           temp=heap[c];
            heap[c]=heap[root];
            heap[root]=temp;
        }
        c=root;
    }while(c!=0);
}
}


void create(){
int i,info,c,root,temp;
printf("enter the number of nodes\n");
scanf("%d",&n);
printf("enter the %d nodes\n",n);
for(i=0;i<n;i++){
    scanf("%d",&heap[i]);
}
for(i=1;i<n;i++){
        c=i;
        do{

            root=(c-1)/2;
            if(heap[root] < heap[c]){
                temp=heap[root];
                heap[root]=heap[c];
                heap[c]=temp;
                }
        c=root;
        }while(c!=0);
        }
}

void insert(){
    int root,temp,c;
    n++;
    printf("\nenter the value ");
    scanf("%d",&heap[n]);
    c=n;
    do{
        root=(c-1)/2;
        if(heap[root] < heap[c]){
            temp=heap[root];
            heap[root]=heap[c];
            heap[c]=temp;
        }
        c=root;
    }while(c!=0);
    }
void print(){
    int j=0;
    while(j<n){
        printf("%d ",heap[j]);
        j++;
    }
}
void main(){
    int choice,i=0,info,heap[100],n=0;
    again:
printf("\n1. create heap \n");
printf("2. insert a node in the heap:\n");
printf("3. delete a node from the heap\n");
printf("4. to see the heap formed\n");
printf("0. exit\n");
printf("enter your choice: ");
scanf("%d",&choice);
switch(choice){
case 1:
    create();
    printf("heap successfully created\n");
    break;
case 2:
       insert();
printf("node successfully inserted");
    break;
case 3:
    delete();
    printf("node successfully deleated");
    break;
case 4:
    print();
    break;

case 0:
    exit(0);
}

goto again;
}
