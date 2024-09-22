// Created by M.Mahadi on 2024-05-20 20:54:02
#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    char arry[100];
    scanf("%s",arry);
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arry[i]-'a']++;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //    if (count[i]!=0)
    //    {
    //      printf("%c - %d\n",i+'a',count[i]);  
    //    }
         
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     int value = arry[i]-'a';
    //     printf( "%c - %d\n",value+'a',count[value]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     int val = arry[i]-'a';
    //     if (count[val]!=0)
    //     {
    //         printf("%c - %d\n",val+'a',count[val]);
    //     }
        
    //     count[val]=0;
    // }
    
    
    return 0;
}