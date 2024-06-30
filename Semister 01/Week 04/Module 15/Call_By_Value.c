// Created by M.Mahadi on 2024-06-30 21:01:19
#include <stdio.h>
void fun(int n){
    printf("From fun - %p\n",&n);
    n = 200;
}
int main(){
    int n = 10;
    fun(n);
    printf("From main - %p\n",&n);
    printf("%d",n);
    return 0;
} 