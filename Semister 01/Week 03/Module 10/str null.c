// Created by M.Mahadi on 2024-04-25 14:29:15
#include <stdio.h>
int main(){
    char mh[7] = {'a','b','c','d','r','g','\0'};
    for (int i = 0; i<6; i++)
    {
        printf("%c",mh[i]);
    }

    
    printf("\n%s",mh);
    return 0;
}