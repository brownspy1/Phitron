// Created by M.Mahadi on 2024-04-25 00:19:34
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arry[i]);
    }
    int index;
    scanf("%d",&index);
    for (int i = index; i < n; i++)
    {
        arry[i]=arry[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",arry[i]);
    }

    return 0;
}