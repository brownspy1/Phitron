// Created by M.Mahadi on 2024-04-25 22:36:19
#include <stdio.h>
#include <string.h>
int main(){
    char arry[100001];
    scanf("%s",arry);

    for (int i = 0; i < strlen(arry); i++){
        if (arry[i]==',')
        {
            arry[i]=' ';
        }else if (arry[i]>='a' && arry[i]<='z'){
            arry[i] = arry[i]-32;
        }else if (arry[i]>='A' && arry[i]<='Z')
        {
            arry[i]=arry[i]+32;
        }
        printf("%c",arry[i]);   
    }
    return 0;
}
