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
        for (int x = i+1; x < count; x++)
        {
            if (arry[i]>arry[x])
            {
                int temp=arry[i];
                arry[i]=arry[x];
                arry[x]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d ",arry[i]);
    }
    
    return 0;
}