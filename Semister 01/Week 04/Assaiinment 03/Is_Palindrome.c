// Created by M.Mahadi on 2024-05-03 21:16:37
#include <stdio.h>
#include <string.h>
int main(){
    char arry[1001];
    scanf("%s",&arry);
    int count = strlen(arry);
    int x=count-1;
    int flag=1;
    for (int i = 0; x >i; i++,x--)
    {
        if (arry[i]!=arry[x])
        {
            flag=0;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("Not Palindrome");
    }else
    {
    printf("Palindrome");
    }
    
    
    
   
    
    
    return 0;
}