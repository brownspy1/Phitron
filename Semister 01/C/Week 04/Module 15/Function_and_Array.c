// Created by M.Mahadi on 2024-07-04 12:21:49
#include <stdio.h>
void fun(int *ar,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%p \n",i[ar]);
    }
    
}
int main(){
    int ar[5] = {10,52,63,154,56};
    fun(ar,5);
    return 0;
}