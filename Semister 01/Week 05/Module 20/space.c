// Created by M.Mahadi on 2024-05-10 19:36:00
#include <stdio.h>
int main(){
    int count;
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf(" ");
        }
        for (int x = 0; x < 1; x++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}