// Created by M.Mahadi on 2024-08-09 Time:19:04:40
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int primary_diagonal = 0, secondary_diagonal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_diagonal += array[i][j];
            }
            if (i + j == n - 1)
            {
                secondary_diagonal += array[i][j];
            }
        }
    }
    printf("%d", abs(primary_diagonal - secondary_diagonal));
    return 0;
}