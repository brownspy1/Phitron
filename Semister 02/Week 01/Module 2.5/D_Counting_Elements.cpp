// Created by M.Mahadi on 2024-07-07 22:09:40
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    for (int i : v)
    {
        auto it = find(v.begin(),v.end(),i+1);
        if (it!=v.end())
        {
            count++;
        }
        
    }
    cout<<count<<endl;
     
    
    return 0;
}