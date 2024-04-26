// Created by M.Mahadi on 2024-04-26 22:24:01
#include <stdio.h>
int main(){
    int n;
    int count;
    scanf("%d",&count);
    int arry[n];
    int find;
for (int i = 0; i < count; i++)
{
    
    scanf("%d",&n);
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    scanf("%d",&find);

    for (int i = 0; i < n; i++)
    {
        if (arry[i]==find)
        {
            flag=1;
        }
    }

    if (flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
}

    return 0;
}