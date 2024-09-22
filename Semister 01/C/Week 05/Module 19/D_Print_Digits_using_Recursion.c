// Created by M.Mahadi on 2024-08-09 Time:20:18:00
#include <stdio.h>
void number(int n)
{
    if (n == 0)
        return;

    int x = n % 10;
    number(n / 10);
    printf("%d ", x);
}
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int m;
        scanf("%d", &m);
        number(m);
        if (m == 0)
        {
            printf("0");
        }

        printf("\n");
    }
    return 0;
}