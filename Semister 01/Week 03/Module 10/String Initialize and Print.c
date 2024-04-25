// Created by M.Mahadi on 2024-04-25 14:13:24
#include <stdio.h>
int main(){
char ch[6]={'m','a','h','a','d','i'};
char mh[6] = "mahadi";
char wh[7] = "mahadi";

for (int i = 0; i < 5; i++)
{
    printf("\n");
    printf("[%c <--noob ] ",ch[i]);
    printf("[%c <--pro]",mh[i]);

}
printf("\n[%s <-gold]",wh);

    return 0;
}