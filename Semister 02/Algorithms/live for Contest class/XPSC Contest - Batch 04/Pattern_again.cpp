#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        printf("\n");

        if (i == n)
        {
            i--;
        }
    }

    // for (int i = n - 1; i >= 1; i--)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         printf("%d", k);
    //     }
    //     printf("\n");
    //     }

    return 0;
}
