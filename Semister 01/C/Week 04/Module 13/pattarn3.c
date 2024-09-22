// Created by M.Mahadi on 2024-04-28 01:34:55
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ",j);
        }
        k++;
        printf("\n");
    }
    
    return 0;
}