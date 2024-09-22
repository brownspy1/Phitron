// Created by M.Mahadi on 2024-04-28 17:43:48
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    int j = n-1;
    for (int i = 1; i <= (2*n)-1; i++)
    {
        for (int s = 1; s <= j; s++)
        {
            printf(" ");
        }
        for (int s = 1; s <= k; s++)
        {
            if (i%2!=0)
            {
                printf("#");
            }else
            {
                printf("-");
            }
            
            
        }
        if (i<=n-1)
        {
        j--;
        k+=2;
        }else
        {
            j++;
            k-=2;
        }
        
        
        printf("\n");
    }
    return 0;
}