// Created by M.Mahadi on 2024-05-23 01:15:57
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k = n;
    for (int i = 0; i < n; i++)
    {
        for (int x = 1; x <= k; x++)
        {
            printf("*");
        }
        printf("\n");
        k--;
    }
    
    
    
    return 0;
}