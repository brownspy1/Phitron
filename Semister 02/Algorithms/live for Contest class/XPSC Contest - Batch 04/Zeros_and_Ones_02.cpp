// Created by @brownspy1 on 2024-10-14 Time:17-44-17
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;scanf("%d",&n);
    int ar[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int x;scanf("%d",&x);
    if (ar[x - 1] == 0) {
        ar[x - 1] = 1;
    } else {
        ar[x - 1] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int n;scanf("%d",&n);

//     int a[n];

//     for (int i = 0; i < n; i++)

//     {
//         scanf("%d", &a[i]);
//     }

//     int x;
//     scanf("%d", &x);


//     if (a[x - 1] == 0)
//     {
//         a[x - 1] = 1;
//     }
//     else if(a[x - 1] == 1)
//     {
//         a[x - 1] = 0;
//     }


//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }
