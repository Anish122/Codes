#include <stdio.h>

typedef struct height{
int feet;
int inch;
}measure;

void main(){
measure d1[100];
int n,i,sumd=0,sumi=0,a,b;


printf("enter the no of heights:");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("enter feet and inch of student %d\n", i+1);
scanf("%d %d",&d1[i].feet,&d1[i].inch);
}

for(i=0;i<n;i++){
sumd += d1[i].feet;
sumi += d1[i].inch;
}
if(sumi>12){
a=sumi%12;
b=sumi/12;
sumi =a;
sumd += b;
}


printf("net height= %d\'%d\"", sumd,sumi);


}
