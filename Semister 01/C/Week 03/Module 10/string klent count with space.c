// Created by M.Mahadi on 2024-04-25 17:42:18
#include <stdio.h>
int main(){
    char a[50];
//    scanf("%s",a);
    fgets(a,50,stdin);
    int count =0;
    for(int i =0; a[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
    return 0;
}