// Created by M.Mahadi on 2024-05-22 22:43:34
#include <stdio.h>
int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int arry[N+1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arry[i]);
    }
    int count[M+1];
    for (int i = 0; i <= M; i++)
    {
        count[i]=0;
    }
    for (int i = 0; i < N; i++)
    {
        count[arry[i]]++;
        
    }
    for (int i = 1; i <= M; i++)
    {
        printf("%d\n",count[i]);
    }
    
    
    return 0;
}

