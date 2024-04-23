// Created by M.Mahadi on 2024-04-23 17:57:32
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i <=n; i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}