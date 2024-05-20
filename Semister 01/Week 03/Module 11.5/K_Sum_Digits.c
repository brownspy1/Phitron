// Created by M.Mahadi on 2024-05-21 02:49:06
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char arry[n+1];
    scanf("%s",arry);
    int add =0;
    for (int i = 0; i < n; i++)
    {
        add += arry[i]-'0'; 
    }
    printf("%d",add);
    return 0;
}