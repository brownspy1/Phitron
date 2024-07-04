// Created by M.Mahadi on 2024-05-13 18:07:27
#include <stdio.h>
void recarson(int i){
    if (i>1) return;
    printf(" %d\n",i);
    recarson(i-1);
   
     
}
int main(){
    recarson(6);
    return 0;
}

