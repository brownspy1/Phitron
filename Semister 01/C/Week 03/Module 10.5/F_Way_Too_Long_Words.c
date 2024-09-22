// Created by M.Mahadi on 2024-04-25 22:04:56
#include <stdio.h>
#include <string.h>
int main(){
    int count;
    scanf("%d",&count);
    char arry[100];
    
    for (int i = 0; i < count; i++)
    {scanf("%s",arry);
    int lenth = strlen(arry);
    if (lenth<=10)
    {printf("%s\n",arry);}
    else if (lenth>10)
    {printf("%c%d%c\n",arry[0],(lenth-2),arry[lenth-1]);}}
    return 0;
}