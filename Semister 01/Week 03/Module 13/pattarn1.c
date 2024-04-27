// Created by M.Mahadi on 2024-04-28 00:52:04
#include <stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        for (int x = 0; x <k; x++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    
    return 0;
}