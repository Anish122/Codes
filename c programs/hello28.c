#include <stdio.h>
void main()
{
    int a,n1,n2,add,subst,mult,divide;
    printf("enter first number\n");
        scanf("%d",&n1);
        printf("enter Second number\n");
        scanf("%d",&n2);
    printf("choose operation:\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    scanf("%d",&a);

    switch(a){
    case 1:
        add=n1+n2;
        printf("\n%d",add);
        break;
    case 2:
        subst=n1-n2;
        printf("\n%d",subst);
        break;
    case 3:
        mult=n1*n2;
        printf("\n%d",mult);
        break;
    case 4:
        if (n2==0){
            printf("\nundefined");
        }
        else{
        divide=n1/n2;
        printf("\n%d",subst);
        }
        break;
    case 5:
        exit(0);
    default:
        printf("\nenter correctly");
    }

}
