// Created by M.Mahadi on 2024-10-02 Time:16-53-36
#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    if (n == 0| n == 1) return n;
    return fibo(n-1)+fibo(n-2);
    
}
int main(){
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<fibo(i)<<" ";
    }
    
    return 0;
}