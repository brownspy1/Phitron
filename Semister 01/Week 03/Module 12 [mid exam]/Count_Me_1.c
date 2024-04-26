// Created by M.Mahadi on 2024-04-26 00:12:47
#include <stdio.h>
int main(){
    int count;
    scanf("%d",&count);
    int arry[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arry[i]);
    }
    int di3=0,di2=0;
    
    for (int i = 0; i < count; i++)
    {
        if (arry[i]%2==0)
        {
            di2++;
        }
        else if (arry[i]%3==0)
        {
            di3++;
        }
    }
    printf("%d %d",di2,di3);
    return 0;
}