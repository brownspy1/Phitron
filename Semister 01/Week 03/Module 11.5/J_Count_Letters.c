// // Created by M.Mahadi on 2024-05-21 03:07:25
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char arry[1000001];
//     scanf("%s",arry);
//     int count[26] = {0};
//     int lenth = strlen(arry);
//     for (int i = 0; i < lenth; i++)
//     {
//         count[arry[i]-'a']++;
//     }
//  for (int i = 0; i < 26; i++)
//     {
//         if (count[i]!=0)
//         {
//             printf( "%c : %d\n",i+'a',count[i]);
//         }
        
//     }
    
//     return 0;
// }

// Created by M.Mahadi on 2024-05-20 20:54:02
#include <stdio.h>
#include <string.h>
int main(){
    
    char arry[101];
    scanf("%s",arry);
    int count[26] = {0};
    for (int i = 0; i < strlen(arry); i++)
    {
        count[arry[i]-'a']++;
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