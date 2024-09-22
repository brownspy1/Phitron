// Created by M.Mahadi on 2024-07-07 21:40:37
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (v[i]<0)
        {
            v[i]=2;
        }else if (v[i]>0)
        {
            v[i]=1;
        }
        
        
    }
    for (auto &&i : v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}