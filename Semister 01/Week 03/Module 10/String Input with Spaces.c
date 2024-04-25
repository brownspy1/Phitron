// Created by M.Mahadi on 2024-04-25 16:59:59
#include <stdio.h>
#include <string.h>
int main(){
    //using gets funtion
    // char m[13];
    // gets(m);
    // printf("%s",m);


    // // USING FGETS funtion    
    char a[50];
    fgets(a,50,stdin);
    a[9] = '\0';
    // ------------------------- len finder--------------
    // int x = sizeof(a)/sizeof(char);
    // printf("%d",x);
    //-------------------------- end len find -----------------
    printf("%s",a);
    return 0;
}