// Created by M.Mahadi on 2024-05-20 18:24:29
#include <stdio.h>
#include <string.h>
void concat(char a[],char b[]){
    int k = strlen(a);
    int n = strlen(b);
    for (int i = 0; i <=n; i++,k++)
    {
        a[k]=b[i];
    }
    
}
int main(){
    char a[] = "hello ";
    char b[] = "world";
    // concat(a,b); // usar defain 
    strcat(a,b); // build in funtion
    printf("%s",a);
    return 0;
}