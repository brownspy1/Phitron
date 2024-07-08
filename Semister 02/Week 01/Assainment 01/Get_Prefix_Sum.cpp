// Created by M.Mahadi  on 2024-07-08 21:07:31
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arry[i];
    }
    long long int prefix[n];
    prefix[0]=arry[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i]=arry[i]+prefix[i-1];
    }
    
    
    
    for (int i = n-1; i>=0;i--)
    {
        cout<<prefix[i]<<" ";
    }
    
    return 0;
}