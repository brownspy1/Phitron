// Created by M.Mahadi on 2024-04-28 01:15:24
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int j=n-1;
    int k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int x = 1;  x<=j ; x++)
        {
            printf(" ");
        }
        for (int x = 1; x <= k; x++)
        {
            printf("*");
        }
        j--;
        k+=2;
        printf("\n");
        
    }

    return 0;
}