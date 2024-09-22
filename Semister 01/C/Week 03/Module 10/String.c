// Created by M.Mahadi on 2024-04-25 13:14:30
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char arry[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%c ",&arry[i]);
    }

    for (int i = 0; i <= n; i++)
    {
        printf("%c",arry[i]);
    }
    

    return 0;
}