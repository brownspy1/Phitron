// Created by M.Mahadi on 2024-08-02 Time:19-35-59
#include <stdio.h>
// void recarson(int i){
//     if (i == 6)  return;
//     recarson(i+1); // using call stack revarce
//     printf("%d \n",i);
// }
void recarson(int i){
    if (i < 1) return;
    printf("%d \n",i);
    recarson(i-1);
    
}
int main(){
    recarson(5);
    return 0;
}