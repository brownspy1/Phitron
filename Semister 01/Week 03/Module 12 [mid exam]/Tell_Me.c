// Created by M.Mahadi on 2024-04-26 22:24:01
#include <stdio.h>
int main(){
    int count;
    scanf("%d",&count);
    int flag=0;
    int n;

    for (int i = 0; i < count; i++)
    {
        scanf("%d",&n);
    int arry[n+1];
    int find;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arry[i]);
    }
        scanf("%d",&find);
    for (int i = 0; i < n; i++)
    {
        if (arry[i]==find)
        {
            flag =1;
        }
        
    }
        if (flag==0)
    {
        printf("NO");
    }else
    {
        printf("YES");
    }
    }

    
    
    
    


    return 0;
}