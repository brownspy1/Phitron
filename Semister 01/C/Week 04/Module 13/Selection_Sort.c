// Created by M.Mahadi on 2024-04-28 21:16:10
#include <stdio.h>
int main(){
    int count;
    scanf("%d",&count);
    int arry[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arry[i]);
    }
    for (int i = 0; i < count-1; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (arry[i]>arry[j])
            {
                int temp = arry[i];
                arry[i]=arry[j];
                arry[j]=temp;
            }
            
        }
        
    }
    
    
    for (int i = 0; i < count; i++)
    {
        printf("%d ",arry[i]);
    }
    
    return 0;
}