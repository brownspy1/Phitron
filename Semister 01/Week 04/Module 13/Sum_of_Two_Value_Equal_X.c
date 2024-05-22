// Created by M.Mahadi on 2024-05-22 23:15:22
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    int x;
    scanf("%d",&x);
    int flag = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arry[i]+arry[j]==x)
            {
                flag = 1;
            }
            
        }
        
    }
    if (flag==1)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    
    
    return 0;
}