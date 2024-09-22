// Created by M.Mahadi on 2024-07-03 22:50:31
#include <stdio.h>
void fun(int *p){
    printf("from fun -%p\n",p);
    *p = 200;
    printf("value from fun - %d\n",*p);
}
int main(){
    int x= 100;
    int *p = &x;
    fun(p);
    printf("from main -%p\n",p);
    printf("value from fun - %d\n",x);

    return 0;
}