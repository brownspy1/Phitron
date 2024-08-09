// Created by M.Mahadi on 2024-08-09 Time:15:13:47
#include <stdio.h>
void rev(int n)
{
    if (n == 0)
        return;
    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
        rev(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    rev(n);
    return 0;
}