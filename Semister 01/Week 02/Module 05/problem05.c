#include <stdio.h>
int main(){
    char A;
    scanf("%c",&A);
    if(A>47 && A<58){
        printf("IS DIGIT");
    }
    else if(A>64 && A<91){
        printf("ALPHA\n"
               "IS CAPITAL");
    }
    else if(A>96 && A<123){
        printf("ALPHA\n"
               "IS SMALL");}
    return 0;
}