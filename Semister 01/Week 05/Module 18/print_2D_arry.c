// Created by M.Mahadi on 2024-08-08 Time:03-49-45
#include <stdio.h>
int main(){
    int n,x; scanf("%d %d",&n,&x);
    int arry[n][x];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d%d ",i,j);
        }
        printf("\n");
        
    }
    
    return 0;
}