#include<stdio.h>
void main(){
char x,vowel[5]={'a','e','i','o','u'};

printf("enter the alphabet \n");
 scanf("%c",&x);

        if(x==vowel[0] ||x==vowel[1]||x==vowel[2]||x==vowel[3]||x==vowel[4]){
          printf("%c is a vowel \n", x);

        }
        else{


        printf("%c is a consonent \n", x);
}
}





