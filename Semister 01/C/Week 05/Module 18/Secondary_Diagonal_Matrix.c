// Created by M.Mahadi on 2024-08-08 Time:23:30:45
#include <stdio.h>
#include <stdbool.h>
int main(){
    int rowe,colume;scanf("%d %d",&rowe,&colume);
    int array[rowe][colume];
    for (int i = 0; i < rowe; i++)
    {
        for (int j = 0; j < colume; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }
    //secondary Diagonal Matrix
    bool flag = true;
    if (rowe != colume)
    {
        flag = false;
    }
    
    for (int i = 0; i < rowe; i++)
    {
        for (int j = 0; j < colume; j++)
        {
            if (rowe-1==i+j)
            {
                continue;
            }
            
            if (array[i][j]!=0)
            {
                flag = false;
            }
            
        }
        
    }
    if (flag)
    {
        printf("Secondary Diagonal Matrix");
    }else
    {
        printf("Not Secondary Diagonal Matrix");
    }
    
    
    return 0;
}