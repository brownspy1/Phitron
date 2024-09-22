// Created by M.Mahadi on 2024-04-25 19:49:46
#include <stdio.h>
#include <string.h>
int main(){
    int n=1000000;
    char X[n+1];
    fgets(X,n,stdin);
    for (int  i = 0; X[i]!='\\'; i++)
    {
        printf("%c",X[i]);
    }
    
    return 0;
}