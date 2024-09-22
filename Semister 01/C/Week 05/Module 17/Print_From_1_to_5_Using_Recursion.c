// Created by M.Mahadi on 2024-08-02 Time:19-35-59
#include <stdio.h>
void recarson(int i){
    if (i == 6)  return;
    printf("%d \n",i);
    recarson(i+1);
}
int main(){
    recarson(1);
    return 0;
}