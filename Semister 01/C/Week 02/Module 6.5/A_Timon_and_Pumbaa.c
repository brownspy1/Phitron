// Created by M.Mahadi on 2024-04-23 18:00:33
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int cal = a-b;
    if(cal<=0){
        printf("0");
    }else{
        printf("%d",cal);
    }
    return 0;
}