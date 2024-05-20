// Created by M.Mahadi on 2024-05-21 00:57:48
#include <stdio.h>
int main(){
    int n;
    int arry[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        add +=arry[i];
    }
    printf("%d",add);
    return 0;
}