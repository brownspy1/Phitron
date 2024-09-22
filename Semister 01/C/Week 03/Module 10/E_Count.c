// Created by M.Mahadi on 2024-04-25 20:00:38
#include <stdio.h>
#include <string.h>
int main(){
    char arry[1000000];
    int add=0;
    scanf("%s",&arry);
    for (int i = 0; i < strlen(arry); i++)
    {
        add+=arry[i]-'0';
       
        
    }
    printf("%d",add);
    return 0;
}