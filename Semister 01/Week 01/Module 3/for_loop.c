// Created by M.Mahadi on 2024-04-23 23:28:32
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    // 1 to 10
    for(int i=1; i<=n; i++){
        printf("%d\n",i);
    }

    // 1 to 10
    for(int x=n; x>=1; x--){
        printf("%d\n",x);
    }
    return 0;
}