// Created by M.Mahadi on 2024-05-01 01:11:29
#include <stdio.h>
int max_of_four(int a, int b, int c, int d){
    int max = a;
    if (a>b && a>c && a>d){max = a;}
    else if (b>a && b>c && b>d){max = b;}
    else if (c>a && c>b && c>d){max = c;}
    else if (d>a && d>b && d>c){max = d;}
    return max;
    
    
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}