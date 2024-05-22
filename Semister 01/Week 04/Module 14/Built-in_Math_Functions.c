// Created by M.Mahadi on 2024-04-30 21:42:42
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    double M;
    scanf("%lf",&M);
    int X = ceil(M); // out put 1 cill valu
    int Y = floor(M); // out put 0 floor valu
    int Z = round(M); // 4
    int W = round(M); // 5
    float N = sqrt(M); // squre
    int L = pow(2,5);
    int G = abs(-10);
    printf("%d %d\n",X,Y);
    printf("%d %d\n",Z,W);
    printf("%0.0f %d\n",N,L);
    printf("%d",G);
    return 0;
}