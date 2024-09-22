#include <stdio.h>
int main(){
    char A;
    scanf("%c",&A);
    if (A<91 && A>64){
        int finala = A+32;
        printf("%c",finala);

    }else if(A<=122 && A>=97){
        int finala = A-32;
        printf("%c",finala);
    }
    return 0;
}