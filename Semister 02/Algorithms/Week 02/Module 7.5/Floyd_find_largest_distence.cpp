// Created by M.Mahadi on 2024-09-22 Time:16-45-36
//https://basecamp.eolymp.com/en/problems/975
#include <bits/stdc++.h>
#define ch floyd[i][k]!=INT_MAX && floyd[k][j]!=INT_MAX
using namespace std;
int main(){
    int n;
    cin >> n;
    int floyd[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> floyd[i][j];
            if (floyd[i][j] == -1)
            {
                floyd[i][j] = INT_MAX;
            }
            
        }
    }


    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ch && floyd[i][k] + floyd[k][j] < floyd[i][j])
                {
                    floyd[i][j] = floyd[i][k] + floyd[k][j];
                }
            }
        }
    }

int imax = INT_MIN;

for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (floyd[i][j] != INT_MAX)
            {
                imax = max(floyd[i][j],imax);
            }
            
        }
    }
cout<<imax;





    return 0;
}