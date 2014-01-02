#include <stdio.h>
int main(){
    int T;
    char str[101];
    int len,i;
    int count_one,count_two;
    scanf("%d",&T);
    T++;
    while(T--){
        count_one=0;count_two=0;
        gets(str);
        len=strlen(str);
        //printf("%d\n",len);
        if(len>0){
            for(i=0;i<len;i++){
                if(str[i]=='A' || str[i]=='D' ||str[i]=='O' ||str[i]=='P' ||str[i]=='R'||str[i]=='Q'){
                    count_one++;
                }
                else if(str[i]=='B'){
                    count_two=count_two+2;
                }
            }
            printf("%d\n",(count_one+count_two));
        }

    }
    return 0;
}
