// Created by M.Mahadi on 2024-08-09 Time:22:12:20
#include <stdio.h>
long long int facet(long long int n)
{
    if (n == 0)
        return 1;
    long long int val = facet(n - 1);
    return n * val;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ans = facet(n);
    printf("%lld", ans);
    return 0;
}