// Created by M.Mahadi on 2024-05-23 01:08:36
#include <stdio.h>
int main(){
    int x=10;
    int *p = &x;
    p = 50;
    printf("%p\n",&p);
    printf("%d\n",*p);
    printf("%d\n",p);
    return 0;
}