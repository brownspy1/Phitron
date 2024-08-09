// Created by M.Mahadi on 2024-08-09 Time:22:52:30
#include <stdio.h>
#include <limits.h>
int max(int ar[], int n, int i)
{
    if (n == i)
        return INT_MIN;
    int val = max(ar, n, i + 1);
    if (ar[i] > val)
    {
        return ar[i];
    }
    else if (ar[i] < val)
    {
        return val;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int ans = max(array, n, 0);
    printf("%d", ans);
    return 0;
}