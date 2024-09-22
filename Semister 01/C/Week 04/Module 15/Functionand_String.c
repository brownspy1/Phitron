// Created by M.Mahadi on 2024-07-04 12:37:42
#include <stdio.h>
#include <string.h>
char* fun (char *ar){
    printf("%s\n",ar);
    int i =0;
    printf("%d \n",strlen(ar));
    while (i[ar]!=EOF)
    {
        printf("%c ",ar[i] );
        i++;
    }
    
    
}
int main(){
    char ar[7]= "mahadi";
    fun(ar);
    return 0;
}