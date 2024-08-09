// Created by M.Mahadi on 2024-08-09 Time:19:20:27
#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int array[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    return 0;
}