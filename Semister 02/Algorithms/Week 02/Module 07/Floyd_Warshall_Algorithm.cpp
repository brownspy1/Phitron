// Created by M.Mahadi on 2024-09-21 Time:17-11-37
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 6;
ll matrix[N][N];
void Floyd()
{
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (matrix[i][i] < 0)
        {
            cout<<"Cycle detected";
            break;
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 0;
            }
            else
            {
                matrix[i][j] = INT_MAX;
            }
        }
    }

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        matrix[a][b] = c;
    }
    Floyd();
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matrix[i][j] == INT_MAX)
            {
                cout << "INF" << " ";
            }
            else
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}