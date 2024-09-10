// // Created by M.Mahadi on 2024-09-10 Time:13-25-08
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num, edge;
//     cin >> num >> edge;
//     vector<int> adj[num];
//     while (edge--)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
//     for (int i = 0; i < adj[1].size(); i++)
//     {
//         cout << adj[1][i] << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    for (int i = 0; i < mat[3].size(); i++)
    {
        cout << mat[3][i] << " ";
    }
    return 0;
}