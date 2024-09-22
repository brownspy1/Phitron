// Created by M.Mahadi on 2024-08-08 Time:07:28:07
#include <stdio.h>
int main(){
    int row,col; scanf("%d %d",&row,&col);
    int array[row][col];
    int cell = row*col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] == 0)
            {
                count++;
            }
            
        }
        
    }
    if (count == cell)
    {
        printf("Zero  Matrix");
    }else
    {
        printf("Matrix");
    }
    
    
    return 0;
}