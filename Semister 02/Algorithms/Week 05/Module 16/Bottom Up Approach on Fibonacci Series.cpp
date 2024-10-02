// Created by M.Mahadi on 2024-10-02 Time:18-17-41
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll N;
    cin >> N;
    ll a[N];
    a[0] = 0;
    a[1] = 1;
    cout<<"Febo seres: 0,1";
    for (int i = 2; i <= N; i++)
    {
        a[i] = a[i-1]+a[i-2];
        cout<<","<<a[i];
    }

    return 0;
}