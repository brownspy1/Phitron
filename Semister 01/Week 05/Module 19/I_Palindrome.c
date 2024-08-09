// Created by M.Mahadi on 2024-08-09 Time:23:47:32
#include <stdio.h>
#include <string.h>
int main()
{
    char array[1001];
    char B[1002];
    scanf("%s", &array);
    strcpy(B, array);
    int i = 0, n = strlen(B) - 1;
    while (i < n)
    {
        char temp = B[i];
        B[i] = B[n];
        B[n] = temp;
        i++;
        n--;
    }

    if (strcmp(array, B) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}