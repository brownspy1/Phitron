// Created by M.Mahadi on 2024-07-04 23:37:18
#include <stdio.h>
int main(){
    int arry[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&arry[i]);
    }
    int a = arry[0],b=arry[1],c=arry[2];
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (arry[i]>arry[j])
            {
                int temp = arry[i];
                arry[i]=arry[j];
                arry[j]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",arry[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}