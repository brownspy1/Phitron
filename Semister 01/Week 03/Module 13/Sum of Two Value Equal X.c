// Created by M.Mahadi on 2024-04-28 19:17:37
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int x = 1; x < n-1; x++)
        {
            _Printf("%d %d\n",i,x);
        }
        
    }
    
    return 0;
}