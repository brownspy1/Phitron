// Created by M.Mahadi on 2024-04-30 19:24:01
#include <stdio.h>
int mahadi(int X, int Y){
    int add = X*Y;
    return add;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int down = mahadi(a,b);
    printf("%d",down);
    return 0;
}