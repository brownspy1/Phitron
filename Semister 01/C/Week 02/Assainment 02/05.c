#include <stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int Arry[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&Arry[i]);
    }
    int X,V;
    scanf("%d %d", &X, &V);
    Arry[X] = V;
    for(int i = N-1; i >= 0; i--){
        printf("%d ",Arry[i]);
    }
    return 0;
}

