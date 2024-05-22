// Created by M.Mahadi on 2024-05-23 01:15:57
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j =1; j <= k; j++,k--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}