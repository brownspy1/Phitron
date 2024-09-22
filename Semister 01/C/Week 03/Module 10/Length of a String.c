// Created by M.Mahadi on 2024-04-25 17:27:25
#include <stdio.h>
#include <string.h>
int main(){
    char a[1000];
    scanf("%s",&a);
    int count=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        count++;
    }
    printf("%s",a);
    return 0;
}