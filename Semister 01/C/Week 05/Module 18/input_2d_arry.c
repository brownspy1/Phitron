// Created by M.Mahadi on 2024-08-08 Time:03-59-02
#include <stdio.h>
int main(){
    int arry[10][9];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d",&arry[i][j]);
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%d ",arry[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}