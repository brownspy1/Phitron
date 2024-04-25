// Created by M.Mahadi on 2024-04-25 20:36:06
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n+1];
    int min=arry[0],max=arry[1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arry[i]>min)
        {
            min = arry[i];
            printf("%d \n",arry[i]);
        }
        
    }

    //  printf("%d ",min);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arry[i]);
    }
    
    
    return 0;
}