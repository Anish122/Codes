#include <stdio.h>

struct complex_add{
float real;                                     //from pointer
float img;
}c;
void add(struct complex_add *stu[]);
int main(){
struct complex_add *ptr[100];
int i;
ptr[100]=&c;
for(i=0;i<2;i++){
    printf("enter the real part of number %d\n", i+1);
    scanf("%f",&(*ptr[i]).real);
    printf("enter the imaginary part of number %d\n",i+1);
    scanf("%f",&(*ptr[i]).img);
    }

    add(ptr);
    return 0;
}
void add(struct complex_add *stu[]){
    int i;
    float sumr=0;
    float sumi=0;
for(i=0;i<2;i++){
    sumr += stu[i]->real;               //or (*stu[i].real)         // "->" itself is a pointer
    sumi += stu[i]->img;
}
printf("%f \+ i%f",sumr,sumi);
}
