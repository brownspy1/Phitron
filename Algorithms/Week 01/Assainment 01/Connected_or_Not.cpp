// Created by M.Mahadi on 2024-09-14 Time:05-52-41
#include <bits/stdc++.h>
using namespace std;
int adj[1000][1000];
int n, e;
int main()
{
    cin >> n >> e;
    memset(adj, 0, sizeof(adj));
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y)
        {
            cout << "YES" << endl;
        }
        else if (adj[x][y] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
// // Created by M.Mahadi on 2024-09-14 Time:05-52-41
// #include <bits/stdc++.h>
// using namespace std;
// vector<pair<int, int>> eageList;
// int n, e;
// int main()
// {
//     cin >> n >> e;
//     for (int i = 0; i < e; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         eageList.push_back({a, b});
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         bool flag = false;
//         int x, y;
//         cin >> x >> y;
//         if (x == y)
//         {
//             flag = true;
//         }
//         else
//         {
//             for (int i = 0; i < e; i++)
//             {
//                 if (eageList[i].first == x && eageList[i].second == y)
//                 {
//                     flag = true;
//                     break;
//                 }
//             }
//         }

//         if (flag)
//         {
//             cout << "YES" << endl;
//         }
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }