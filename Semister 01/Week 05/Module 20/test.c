// Created by M.Mahadi on 2024-05-10 19:14:22
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int j = 4, k=0,l=0;
    int valu;
    if (n%2!=0)
    {
        valu=
    }
    
    for (int i = 1; i <= 6; i++)
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
        if (i<6)
        {
            j--;
            k+=2;
        }else if (i>6)
        {
            k-=2;
            j++;
            
        }else
        {
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
        }
        
        
    }
    
    
    return 0;
}