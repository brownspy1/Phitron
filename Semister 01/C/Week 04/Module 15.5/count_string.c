// Created by M.Mahadi on 2024-07-05 00:05:19
#include <stdio.h>
int main(){
    char ar[20];
    scanf("%s",&ar);
    int count = 0;
    while (ar[count] != '\0')
    {
        count++;
    }
    printf("%d",count);
    return 0;
}