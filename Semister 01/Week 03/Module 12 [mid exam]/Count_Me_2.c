// Created by M.Mahadi on 2024-04-26 15:17:22
#include <stdio.h>
#include <string.h>
int main(){
    char s[100000];
    scanf("%s",&s);
    int cononent=0;
   for (int i = 0; i < strlen(s); i++)
   {
    if (s[i]!='a'
     && s[i]!='e' 
     && s[i]!='i' 
     && s[i]!='o' 
     && s[i]!='u')
    {
        cononent++;
    }
   }
   printf("%d",cononent);
    
    return 0;
}