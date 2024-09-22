// Created by M.Mahadi on 2024-04-26 16:30:28
#include <stdio.h>
int main(){
    int count;
    scanf("%d",&count);
    for (int i = 1; i <= count; i++)
    {
        int M1,M2,D;
        scanf("%d %d  %d",&M1,&M2 ,&D);
        int calculation= (M1*D)/(M1+M2);
        int final = D-calculation;
        printf("%d\n",final);
    }
    
    return 0;
}