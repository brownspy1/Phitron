// Created by M.Mahadi on 2024-07-07 20:31:00
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
    
    vector <int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i];
    }
    vector <int> ans(v2);
    ans.insert(ans.end(),v.begin(),v.end());
    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}