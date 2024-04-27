// Created by M.Mahadi on 2024-04-27 02:32:28
#include <stdio.h>
int main(){
    int a;
    int n;
    scanf("%d %d",&a,&n);
    for (int i = 0; i < a; i++)
    {
        for (int x = 1; x <= n; x++)
        {printf("%d ",x);}
        printf("\n");
    }
    return 0;
}