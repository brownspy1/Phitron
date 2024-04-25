// Created by M.Mahadi on 2024-04-25 22:36:19
//solve hoy nai
#include <stdio.h>
#include <string.h>
int main(){
    char arry[100000];
    fgets(arry,100000,stdin);

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
