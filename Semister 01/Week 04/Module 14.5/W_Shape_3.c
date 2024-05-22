// Created by M.Mahadi on 2024-05-23 01:57:00
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
int k = n; int m = 1;    
    for (int i = 0; i < n; i++)
    {
        
       for (int j = 1; j < k; j++)
       {
        printf(" ");
       }
       for (int j = 1; j <= m; j++)
       {
        printf("*");
       }
       printf("\n");
       k--;
       m+=2;
    }
int a = (n*2)-1; int b = 1;    

    for (int i = 0; i < n; i++)
    {
   
       for (int j = 1; j < b; j++)
       {
        printf(" ");
       }
       for (int j = 1; j <= a; j++)
       {
        printf("*");
       }
       a-=2;
       b++;
       printf("\n");
    }
    return 0;
}