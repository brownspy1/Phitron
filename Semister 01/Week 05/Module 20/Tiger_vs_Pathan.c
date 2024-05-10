// Created by M.Mahadi on 2024-05-10 17:35:53
#include <stdio.h>
int main(){
    int count;
    scanf("%d",&count);
    for (int i = 1; i <= count; i++)
    {
        int n;
        scanf("%d",&n);
        char arry[n];
        for (int x = 0; x <= n; x++)
        {
            scanf("%c",&arry[x]);
        }
        int T=0,P=0;
        for (int x = 0; x <= n; x++)
        {
            if (arry[x]=='T')
            {
                T++;
            }
            else if (arry[x]=='P')
            {
                P++;
            }
        }
        if (T>P)
        {
            printf("Tiger\n");
        }else if (P>T)
        {
            printf("Pathaan\n");
        }else if (T==P)
        {
            printf("Draw\n");
        }
        
        
        
        
        
    }
    
    return 0;
}