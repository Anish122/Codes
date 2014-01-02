#include <stdio.h>
#include <iostream>
int main(){
    int num;
	while(scanf("%d",&num)){
		if(num!=42){
			printf("%d\n",num);
		}else{

            break;
		}
	}
return 0;
}
