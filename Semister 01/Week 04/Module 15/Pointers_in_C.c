// Created by M.Mahadi on 2024-06-28 05:22:41
#include <stdio.h>
int main(){
    int x = 10;
    int *point = &x;
    printf("this is a pointer of x - %p\n",x);
    printf("this is a pointer of point - %p\n",*point);
    return 0;
}