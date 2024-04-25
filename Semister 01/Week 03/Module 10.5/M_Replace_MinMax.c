// Created by M.Mahadi on 2024-04-25 20:36:06
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {scanf("%d",&arry[i]);}

    int min=arry[0],minindex=0;
    int max=arry[0],maxindex=0;

    for (int i = 1; i < n; i++)
    {
        if (min>arry[i])
        {
            min=arry[i];
            minindex=i;
        }if (max<arry[i])
        {
            max=arry[i];
            maxindex=i;
        }
    }
    arry[minindex]=max,arry[maxindex]=min;

    for (int i = 0; i < n; i++)
    {printf("%d ",arry[i]);}
    return 0;
}