// Created by M.Mahadi on 2024-08-09 Time:20:02:00
#include <stdio.h>
int main()
{
    int row, colum;
    scanf("%d %d", &row, &colum);
    int A[row][colum];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    int B[row][colum];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    int C[row][colum];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}