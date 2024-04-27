// Created by M.Mahadi on 2024-04-27 16:45:57
#include <stdio.h>
int main(){
    char arry[10001];
    int cnt[26]={0};
    scanf("%s",&arry);
    int i=0;
    while (arry[i]!='\0')
    {
        if (arry[i]>='a' && arry[i]<='z')
        {
            cnt[arry[i]-97]++;
        }
        i++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i]>0)
        {
            printf("%c - %d\n",i+97,cnt[i]);
        }
    }
    return 0;
}