// Created by M.Mahadi on 2024-05-04 09:58:14
#include <stdio.h>
#include <string.h>
int main(){
    char arry[1001];
    int count;
    scanf("%s",arry);
    count = strlen(arry);
    int x = count-1;
    int flag = 1;
    for (int i = 0; x >i; i++,x--)
    {
        if (arry[i]!=arry[x])
        {
            flag=0;
            break;
        }
    }

    if (flag == 0)
    {
        printf("NO");
    }else
    {
       printf("YES");
    }
   
    return 0;
}