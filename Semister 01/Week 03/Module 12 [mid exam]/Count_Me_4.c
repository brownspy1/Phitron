// Created by M.Mahadi on 2024-04-27 11:20:41
#include <stdio.h>
#include <string.h>
int main(){
    char s[10001];
    int count = 26;
    scanf("%s",&s);
    for (int i = 0; i <count; i++)
    {
        int a=0;
        if (s[i]!=s[i+1])
        {
            printf("%c - 1\n",s[i]);
        }else{
            a++;
            printf("%c - %d\n",s[i],a);
        }
        
    }
    
    return 0;
}