// Created by M.Mahadi on 2024-04-25 13:45:49
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ar[n];
    int len = sizeof(ar)/sizeof(char);
    int size = sizeof(char);
    printf("%d ",size);
    printf("%d",len);
    return 0;
}