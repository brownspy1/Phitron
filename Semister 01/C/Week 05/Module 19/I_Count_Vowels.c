// Created by M.Mahadi on 2024-08-09 Time:20:27:15
#include <stdio.h>
int count(char ar[], int i)
{
    if (ar[i] == '\0')
        return 0;
    int size = count(ar, i + 1);
    if (ar[i] >= 'A' && ar[i] <= 'Z')
    {
        ar[i] += 'a';
    }
    if (ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'i' || ar[i] == 'o' || ar[i] == 'u')
    {
        return size + 1;
    }
    else
    {
        return size;
    }
}
int main()
{
    char array[205];
    fgets(array, 205, stdin);
    int ans = count(array, 0);
    printf("%d", ans);
    return 0;
}