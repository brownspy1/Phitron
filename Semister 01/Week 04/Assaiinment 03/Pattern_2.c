// Created by M.Mahadi on 2024-05-03 19:52:22
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=1,j=n-1;
    for (int i = 1; i <=n; i++)
    {
        for (int x = 1; x <=j; x++)
        {
            printf(" ");
        }
        for (int x = k; x >= 1; x--)
        {
        printf("%d",x);
        }
        printf("\n");
        k++;
        j--;

        
    }
    
    return 0;
}