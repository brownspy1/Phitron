// Created by @brownspy1 on 2024-10-14 Time:21-58-48
#include <stdio.h>
int main(){
    int n;scanf("%d",&n);
    int ar[100005];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int maxSalami = 0; 
    for (int i = 0; i < n; i++)
    {
        if (maxSalami< ar[i])
        {
            maxSalami = ar[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        int ans = maxSalami-ar[i];
        printf("%d ",ans);
    }
    
    return 0;
}