#include <stdio.h>
#include<math.h>
int btd(int x);
int dtb(int x);
int bto(int x);
int otb(int x);
int otd(int x);
int dto(int x);

void main(){
    int a,x;
    printf("choose your option:\n");
    printf("1. binary to decimal \n");
    printf("2. decimal to binary\n");
    printf("3. binary to octal \n");
    printf("4. octal to binary \n");
    printf("5. octal to decimal \n");
    printf("6. decimal to octal \n");
    printf("enter your choice: \n");
    scanf("%d",&a);
    switch (a){
case 1:
    printf("enter the binary number\n");
    scanf("%d", &x);
    printf("binary conversion to decimal is: %d ",btd(x));
    break;
case 2:
    printf("enter the decimal number\n");
    scanf("%d", &x);
    printf("decimal conversion to binary is: %d",dtb(x));
    break;
case 3:
    printf("enter the binary number\n");
    scanf("%d", &x);
    printf("binary conversion to octal is: %d",bto(x));
    break;
case 4:
    printf("enter the octal number\n");
    scanf("%d", &x);
    printf("octal conversion to binary is: %d",otb(x));
    break;
case 5:
    printf("enter the octal number\n");
    scanf("%d", &x);
    printf("octal conversion to decimal is: %d",otd(x));
    break;
case 6:
    printf("enter the decimal number\n");
    scanf("%d", &x);
    printf("decimal conversion to octal is: ");
    dto(x);
    break;
default:
    printf("invalid entry");
    exit(0);
    }
}

int btd(int x){
    int y;
    int i=0;
    int result=0;
    while(x>0){
        y=x%10;
        result=result+y*pow(2,i);
        i++;
        x=x/10;
    }
    return result;
}

int dtb(int x){
int y;
int z=0,i=1;
while(x!=0){
y=x%2;
x=x/2;
z= z+ y*i;
i=i*10;
}
return z;
}

int bto(int x){
int y;
    int i=0;
    int result=0;
    while(x>0){
        y=x%10;
        result=result+y*pow(2,i);
        i++;
        x=x/10;
    }
    int p;
int z=0,q=0;
while(p>0){
p=result%8;
z=(pow(10,q)*p)+z;
result=result/8;
q++;
}
return z;
}
int otb(int x){
int y;
    int i=0;
    int result=0;
    while(x>0){
        y=x%10;
        result=result+y*pow(8,i);
        i++;
        x=x/10;
}
int p;
int z=0,q=1;
while(result!=0){
p=result%2;
result=result/2;
z= z+ p*q;
 q=q*10;
}
return z;
}

int otd(int x){
int y;
    int i=0;
    int result=0;
    while(x>0){
        y=x%10;
        result=result+y*pow(8,i);
        i++;
        x=x/10;
    }
    return result;
}

int dto(int x){
int y;
int z=0,i=0;
while(y>0){
y=x%8;
z=(pow(10,i)*y)+z;
x=x/8;
i++;
}
printf("%d",z);
}
