// Created by M.Mahadi on 2024-04-27 17:20:53
#include <stdio.h>
int main() {
    int a, b;
    scanf("\n%d %d", &a, &b);
    int add=a+b,sum=a-b;
    if (sum<0)
    {
        sum=b-a;
    }
    printf("%d\n%d", add,sum);

    return 0;
}
