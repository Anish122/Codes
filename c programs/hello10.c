#include<stdio.h>
#include<math.h>
void main(){
float a,b,c,d,e,f;
float p,q;
 printf("enter the coefficient of x^2\n");
 scanf("%f",&a);
 printf("enter the coefficient of x^1 \n");
 scanf("%f",&b);
printf("enter the coefficient of x^0 \n");
 scanf("%f",&c);
 d=(b*b)-(4*a*c);
 if(d>0){
p = (-1*b + sqrt(d))/(2*a);
q = (-1*b - sqrt(d))/(2*a);
printf("roots are %f and %f \n", p,q);
}
else{
        e=(-1*b/(2*a));
        f=(sqrt(d)/(2*a));

   printf("roots are %.3f+%.2fi and %.2f-%.2fi\n", e,f,e,f);
}

}

