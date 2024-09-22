// Created by M.Mahadi on 2024-07-04 22:25:50
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d",i);
        }else
        {
            printf("%d ",i);
        }
        
        
    }
    
    return 0;
}