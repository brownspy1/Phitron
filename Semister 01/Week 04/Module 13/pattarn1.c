// Created by M.Mahadi on 2024-04-28 00:52:04
#include <stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    int j=(n*2)-1;
    int f=1;
    for (int i = 1; i <=(n*2)-1; i++)
    {   //pattaen 1
        for (int x = 1; x <=k; x++)
        {
            printf("*");
        }

       //pattarn 2
        for (int x = 1; x<=j; x++)
        {
            printf(" ");
        }
        for (int x = 1; x <= f; x++)
        {
            printf("*");
        }
        //pattarn 3
        for (int x = 1; x<=j; x++)
        {
            printf(" ");
        }
        for (int x = 1; x <= f; x++)
        {
            printf("*");
        }
        //condison
        if (i<=n-1)
        {
            k++;
            j-=2;
            f+=2;
        }else
        {
            k--;
            j+=2;
            f-=2;
        }
        printf("\n");
    }
    
    return 0;
}