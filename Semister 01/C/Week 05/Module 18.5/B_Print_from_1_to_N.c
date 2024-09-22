// Created by M.Mahadi on 2024-08-09 Time:15:08:05
#include <stdio.h>
void num(int n)
{
    if (n == 0)
        return;
    num(n - 1);
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    num(n);

    return 0;
}