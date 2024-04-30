// Created by M.Mahadi on 2024-04-30 21:03:01
#include <stdio.h>
int fun(int x){
    for (int i = 1; i <= x; i++)
    {
        printf("%d\n",i);
    }
    
}
int main(){
    int x;
    scanf("%d",&x);
    fun(x);
    return 0;
}