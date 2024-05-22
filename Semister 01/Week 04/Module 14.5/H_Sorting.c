// Created by M.Mahadi on 2024-05-23 01:26:59
#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arry[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int x = i+1; x < n; x++)
        {
            if (arry[i]>arry[x])
            {
                int temp = arry[i];
                arry[i]=arry[x];
                arry[x]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arry[i]);
    }
    return 0;
}