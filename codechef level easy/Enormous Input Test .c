#include <stdio.h>
int main(){
    long long int n,k;
    long long int num,count;
    scanf("%lld%lld",&n,&k);
    count=0;
    while(n--){
        scanf("%lld",&num);
        if(num%k==0){
            count++;
        }
    }
    printf("%lld",count);
return 0;
}
