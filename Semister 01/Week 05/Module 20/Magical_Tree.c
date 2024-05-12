// Created by M.Mahadi on 2024-05-10 19:14:22
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nx=(n+1)/2+5;
    int j = nx-2, k=0,l=0;
    if (n%2!=0)
    {
        
    }
    
    for (int i = 1; i <= nx; i++)
    {
        for (int x = 0; x <=j; x++)
        {
            printf(" ");
        }
        for (int x = 0; x <= k; x++)
        {
            printf("*");
        }

        printf("\n");
        if (i<nx)
        {
            j--;
            k+=2;
        }else if (i>nx)
        {
            k-=2;
            j++;
            
        }else
        {
        
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf(" ");
        }
        for (int x = 0; x < n; x++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}