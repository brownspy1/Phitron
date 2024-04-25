// Created by mahadi on 4/22/2024.
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arry[n+1];
    for(int i =0; i<n; i++){
        scanf("%d",&arry[i]);
    }
    int index ,value;
    scanf("%d %d",&index ,&value);

    // reorder index
    for (int i = n; i >= index+1; i--){
        arry[i]=arry[i-1];
    
    }
    arry[index] = value;

    for(int i =0; i<=n; i++){
        printf("%d ",arry[i]);
    }
    return 0;
}
