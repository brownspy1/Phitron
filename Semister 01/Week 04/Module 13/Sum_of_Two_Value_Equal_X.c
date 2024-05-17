// Created by M.Mahadi on 2024-04-28 20:42:34
#include <stdio.h>
int main(){
    // input from consol
    int count;
    scanf("%d",&count);
    int arry[count];
    int flag=0;
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arry[i]);
    }
    int x;
    scanf("%d",&x);

    // mul work from here
    for (int i = 0; i < count-1; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (arry[i]+arry[j]==x)
            {
                flag = 1;
            }
            
        }
        
    }
    if (flag==0)
    {
        printf("NO");
    }else
    {
        printf("YES");
    }
    
    
    return 0;
}