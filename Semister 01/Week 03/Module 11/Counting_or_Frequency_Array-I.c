// Created by M.Mahadi on 2024-05-20 19:48:50
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    int count[10]={0};
    for (int i = 0; i < n; i++)
    {
        count[arry[i]]++;
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d - %d\n",i,count[i]);
    }
    
    return 0;
}