// Created by M.Mahadi on 2024-05-21 18:48:22
#include <stdio.h>
int main(){
    char a;
    int count[26] = {0};
    while (scanf("%c",&a)!=EOF)
    {
        count[a-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i]!=0)
        {
            printf("%c : %d\n",i+'a',count[i]);
        }
        
    }
    
     
    return 0;
}