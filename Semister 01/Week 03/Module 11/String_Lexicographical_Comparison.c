// Created by M.Mahadi on 2024-05-20 11:18:09
#include <stdio.h>
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
            return 1;
            break;
        }
        else if (b[i]=='\0')
        {
            return 2;
            break;
        }
        if (a[i]<b[i])
        {
            return 1;
        }else if (b[i]<a[i])
        {
            return 2;
        }
    }
}

int main(){
    char a[100],b[100];
    int ans = compare(a,b);
    printf("%d",ans);
    return 0;
}