// Created by M.Mahadi on 2024-08-09 Time:15:19:47
#include <stdio.h>
void re_array(int ar[], int index, int i)
{
    if (i == index)
        return;
    re_array(ar, index, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", ar[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    re_array(array, n, 0);
    return 0;
}
