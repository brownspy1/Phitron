// Created by M.Mahadi on 2024-10-02 Time:18-27-48
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5+10;
ll arr[N];
ll fibo(ll n){
    if (n == 0 || n ==1) return n;
    if (arr[n] != -1) return arr[n];
    ll ans = fibo(n-1) + fibo(n-2);
    arr[n] = ans;
    return ans;
}
int main(){
    memset(arr,-1,sizeof(arr));
    cout<<fibo(50);
    return 0;
}