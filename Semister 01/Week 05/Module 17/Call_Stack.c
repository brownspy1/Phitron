// Created by M.Mahadi on 2024-05-13 13:10:33
#include <stdio.h>
void hello(void){
    printf("Hello start\n");
    printf("Hello end\n");
}
void wordl(void){
    printf("World start\n");
    hello();
    printf("World end\n");
}
int main(){
    printf("main start\n");
    wordl();
    printf("main end\n");
    return 0;
}