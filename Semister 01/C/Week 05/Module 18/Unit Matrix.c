// Created by M.Mahadi on 2024-08-09 Time:14:33:03
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int rowe, Colum;
    scanf("%d %d", &rowe, &Colum);
    int array[rowe][Colum];
    for (int i = 0; i < rowe; i++)
    {
        for (int j = 0; j < Colum; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    bool flag = true;
    if (rowe != Colum)
    {
        flag = false;
    }

    for (int i = 0; i < rowe; i++)
    {
        for (int j = 0; j < Colum; j++)
        {
            if (i == j)
            {
                if (array[i][j] != 1)
                {
                    flag = false;
                }
                continue;
            }
            if (array[i][j] != 0)
            {
                flag = false;
            }
        }
    }

    if (flag)
    {
        printf("Unit Matrix");
    }
    else
    {
        printf("Not Unit Matrix");
    }

    return 0;
}