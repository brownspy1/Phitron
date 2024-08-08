// Created by M.Mahadi on 2024-08-08 Time:23:16:38
#include <stdio.h>
#include <stdbool.h>
int main(){
    int row,colum; scanf("%d %d",&row,&colum);
    int array[row][colum];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }
    // Diagonal Matrix
    bool flag = true; 
    if (row != colum)
    {
        flag = false;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            if (i==j)
            {
                continue;
            }
            
            if (array[i][j] !=0)
            {
                flag = false;
            }
            
        }
    }
    if (flag)
    {
        printf("Primary Diagonal Matrix");
    }else
    {
        printf("Not Primary Diagonal Matrix");
    }
    
    

    return 0;
}