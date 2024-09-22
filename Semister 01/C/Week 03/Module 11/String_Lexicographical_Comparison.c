// Created by M.Mahadi on 2024-05-20 11:18:09
#include <stdio.h>
#include <string.h>
int compare(char a[],char b[]){
    for (int i = 0;; i++)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            return 0;
            break;
        }
        else if (a[i]=='\0')
        {
            return -1;
            break;
        }
        else if (b[i]=='\0')
        {
            return 1;
            break;
        }
        if (a[i]<b[i])
        {
            return -1;
            break;
        }else if (b[i]<a[i])
        {
            return 1;
            break;
        }
    }
}

int main(){
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int ans = compare(a,b); // usar defain funtion
    // int ans = strcmp(a,b); // string.h hedae building funtion

    if (ans == 0)
    {
        printf("EQULE\n");
    }else if (ans < 0)
    {
        printf("B\n");
    }else if (ans > 0)
    {
        printf("A\n");
    }
    
    
    
    return 0;
}