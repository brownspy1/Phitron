// Created by M.Mahadi on 2024-08-09 Time:15:19:47
#include <stdio.h>
long long int re_array(int ar[], int index, int i)
{

    if (i >= index)
        return 0;
    return ar[i] + re_array(ar, index, i + 1);
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
    int a = re_array(array, n, 0);
    printf("%lld", a);
    return 0;
}
