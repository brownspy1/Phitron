// Created by M.Mahadi on 2024-05-23 10:13:12
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=n,j=1;
    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i < k; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < j; i++)
        {
            printf("*");
        }
        printf("\n");
        k--;
        j++;
    }
    
    return 0;
}