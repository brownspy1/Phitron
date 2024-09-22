// Created by M.Mahadi on 2024-05-02 21:34:02
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=1,j=n-1;
    for (int i = 1; i < (n*2); i++)
    {
        for (int x = 1; x <=j; x++)
        {
            printf(" ");
        }
        for (int x = 1; x <=k; x++)
        {
            if (i%2!=0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        if (i<n)
        {
            k+=2;
            j--;
        }else
        {
            k-=2;
            j++;
        }
        
        
        
    }
    
    
    return 0;
}

