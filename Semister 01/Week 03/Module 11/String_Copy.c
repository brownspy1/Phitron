// Created by M.Mahadi on 2024-05-20 10:29:36
#include <stdio.h>
#include <string.h>
char copy(char a[],char b[]){
    for (int i = 0; i <= strlen(b); i++)
    {
        a[i]=b[i]
    }
    printf("%s %s",a,b);
}
int main(){
    char a[100],b[100];
    copy(a,b)

    return 0;
}