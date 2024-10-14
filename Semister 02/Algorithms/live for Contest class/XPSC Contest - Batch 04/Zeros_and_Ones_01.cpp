// Created by @brownspy1 on 2024-10-14 Time:17-30-18
#include <bits/stdc++.h>
using namespace std;
int main(){
    int  n;cin>>n;
    int ar[n];
    int ziro = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        if (a == 0)
        {
           ziro++;
        }
        if (a == 1)
        {
            one++;
        }
        

    }
    
    cout<<ziro<<" "<<one;
    
    return 0;
}