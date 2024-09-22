// Created by M.Mahadi on 2024-04-27 02:06:34
#include <stdio.h>
#include <string.h>
int main(){
    int count;
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        int upp=0,low=0,mat=0;
        char arry[10001];
        scanf("%s",&arry);
        for (int x = 0; x < strlen(arry); x++)
        {
            if (arry[x]>='a' && arry[x]<='z')
            {
                low++;
            }
            if (arry[x]>='A' && arry[x]<='Z')
            {
                upp++;
            }
            if (arry[x]>='0' && arry[x]<='9')
            {
                mat++;
            }
            
        }
        printf("%d %d %d\n",upp,low,mat);
        
    }
    
    return 0;
}