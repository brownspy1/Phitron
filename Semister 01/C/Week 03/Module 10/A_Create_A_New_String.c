// Created by M.Mahadi on 2024-04-25 18:47:20
#include <stdio.h>
int main(){
    char N[1001],J[1001];
    scanf("%s %s",&N,&J);
    int cN=0,CJ=0;
    for(int i=0;N[i]!='\0';i++){
        cN++;
    }

    for (int  i = 0;J[i]!='\0'; i++)
    {
        CJ++;
    }
    

    printf("%d %d\n",cN,CJ);
    printf("%s %s",N,J);
    return 0;
}