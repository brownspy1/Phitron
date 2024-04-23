#include <stdio.h>
int main(){
    int A;
    scanf("%d",&A);
    int cal = A/1000;
    if (cal%2==0){
        printf("EVEN");
    } else{
        printf("ODD");
    }
    return 0;
}