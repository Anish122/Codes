#include <stdio.h>
int main(){
    int cash;
    float balance;
    scanf("%d %f",&cash,&balance);

	if(cash%5==0 && balance-0.50>cash)
{
            balance=balance-cash-0.50;
            printf("%.2f\n",balance);
	}
else
{
	printf("%.2f\n",balance);
}
return 0;
}
