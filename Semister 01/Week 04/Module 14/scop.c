// Created by M.Mahadi on 2024-05-22 23:58:55
#include <stdio.h>
void fun(void){
    int x = 200;
    printf("%d %p\n",x,&x);
}
int main(){
    int x = 102;
    fun();
    printf("%d %p\n",x,&x);
    return 0;
}